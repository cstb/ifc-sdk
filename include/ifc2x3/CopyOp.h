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
        virtual ~CopyOp();
        /**
         * Operator called by entities in their copy methods.
         * 
         * @param obj
         */
        Step::BaseObject *operator()(const Step::BaseObject *obj) const;
        /**
         * @param obj
         */
        virtual bool visitIfc2DCompositeCurve(Ifc2DCompositeCurve *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcActionRequest(IfcActionRequest *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcActor(IfcActor *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcActorRole(IfcActorRole *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcActuatorType(IfcActuatorType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcAirTerminalBoxType(IfcAirTerminalBoxType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcAirTerminalType(IfcAirTerminalType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcAirToAirHeatRecoveryType(IfcAirToAirHeatRecoveryType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcAlarmType(IfcAlarmType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcAngularDimension(IfcAngularDimension *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotation(IfcAnnotation *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationFillArea(IfcAnnotationFillArea *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationFillAreaOccurrence(IfcAnnotationFillAreaOccurrence *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationSurface(IfcAnnotationSurface *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationSurfaceOccurrence(IfcAnnotationSurfaceOccurrence *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcApplication(IfcApplication *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcAppliedValueRelationship(IfcAppliedValueRelationship *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcApproval(IfcApproval *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcApprovalActorRelationship(IfcApprovalActorRelationship *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcApprovalPropertyRelationship(IfcApprovalPropertyRelationship *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcApprovalRelationship(IfcApprovalRelationship *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcArbitraryClosedProfileDef(IfcArbitraryClosedProfileDef *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcArbitraryOpenProfileDef(IfcArbitraryOpenProfileDef *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcArbitraryProfileDefWithVoids(IfcArbitraryProfileDefWithVoids *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcAsset(IfcAsset *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcAsymmetricIShapeProfileDef(IfcAsymmetricIShapeProfileDef *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcAxis1Placement(IfcAxis1Placement *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcAxis2Placement2D(IfcAxis2Placement2D *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcAxis2Placement3D(IfcAxis2Placement3D *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcBeam(IfcBeam *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcBeamType(IfcBeamType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcBezierCurve(IfcBezierCurve *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcBlobTexture(IfcBlobTexture *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcBlock(IfcBlock *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcBoilerType(IfcBoilerType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcBooleanClippingResult(IfcBooleanClippingResult *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcBooleanResult(IfcBooleanResult *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcBoundaryEdgeCondition(IfcBoundaryEdgeCondition *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcBoundaryFaceCondition(IfcBoundaryFaceCondition *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcBoundaryNodeCondition(IfcBoundaryNodeCondition *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcBoundaryNodeConditionWarping(IfcBoundaryNodeConditionWarping *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcBoundedSurface(IfcBoundedSurface *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcBoundingBox(IfcBoundingBox *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcBoxedHalfSpace(IfcBoxedHalfSpace *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcBuilding(IfcBuilding *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcBuildingElementPart(IfcBuildingElementPart *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcBuildingElementProxy(IfcBuildingElementProxy *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcBuildingElementProxyType(IfcBuildingElementProxyType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcBuildingStorey(IfcBuildingStorey *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCShapeProfileDef(IfcCShapeProfileDef *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCableCarrierFittingType(IfcCableCarrierFittingType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCableCarrierSegmentType(IfcCableCarrierSegmentType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCableSegmentType(IfcCableSegmentType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCalendarDate(IfcCalendarDate *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCartesianPoint(IfcCartesianPoint *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCartesianTransformationOperator2D(IfcCartesianTransformationOperator2D *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCartesianTransformationOperator2DnonUniform(IfcCartesianTransformationOperator2DnonUniform *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCartesianTransformationOperator3D(IfcCartesianTransformationOperator3D *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCartesianTransformationOperator3DnonUniform(IfcCartesianTransformationOperator3DnonUniform *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCenterLineProfileDef(IfcCenterLineProfileDef *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcChamferEdgeFeature(IfcChamferEdgeFeature *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcChillerType(IfcChillerType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCircle(IfcCircle *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCircleHollowProfileDef(IfcCircleHollowProfileDef *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCircleProfileDef(IfcCircleProfileDef *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcClassification(IfcClassification *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcClassificationItem(IfcClassificationItem *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcClassificationItemRelationship(IfcClassificationItemRelationship *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcClassificationNotation(IfcClassificationNotation *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcClassificationNotationFacet(IfcClassificationNotationFacet *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcClassificationReference(IfcClassificationReference *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcClosedShell(IfcClosedShell *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCoilType(IfcCoilType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcColourRgb(IfcColourRgb *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcColumn(IfcColumn *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcColumnType(IfcColumnType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcComplexProperty(IfcComplexProperty *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCompositeCurve(IfcCompositeCurve *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCompositeCurveSegment(IfcCompositeCurveSegment *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCompositeProfileDef(IfcCompositeProfileDef *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCompressorType(IfcCompressorType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCondenserType(IfcCondenserType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCondition(IfcCondition *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcConditionCriterion(IfcConditionCriterion *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcConnectedFaceSet(IfcConnectedFaceSet *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcConnectionCurveGeometry(IfcConnectionCurveGeometry *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcConnectionPointEccentricity(IfcConnectionPointEccentricity *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcConnectionPointGeometry(IfcConnectionPointGeometry *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcConnectionPortGeometry(IfcConnectionPortGeometry *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcConnectionSurfaceGeometry(IfcConnectionSurfaceGeometry *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcConstraintAggregationRelationship(IfcConstraintAggregationRelationship *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcConstraintClassificationRelationship(IfcConstraintClassificationRelationship *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcConstraintRelationship(IfcConstraintRelationship *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcConstructionEquipmentResource(IfcConstructionEquipmentResource *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcConstructionMaterialResource(IfcConstructionMaterialResource *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcConstructionProductResource(IfcConstructionProductResource *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcContextDependentUnit(IfcContextDependentUnit *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcControllerType(IfcControllerType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcConversionBasedUnit(IfcConversionBasedUnit *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCooledBeamType(IfcCooledBeamType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCoolingTowerType(IfcCoolingTowerType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCoordinatedUniversalTimeOffset(IfcCoordinatedUniversalTimeOffset *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCostItem(IfcCostItem *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCostSchedule(IfcCostSchedule *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCostValue(IfcCostValue *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCovering(IfcCovering *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCoveringType(IfcCoveringType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCraneRailAShapeProfileDef(IfcCraneRailAShapeProfileDef *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCraneRailFShapeProfileDef(IfcCraneRailFShapeProfileDef *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCrewResource(IfcCrewResource *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCsgSolid(IfcCsgSolid *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCurrencyRelationship(IfcCurrencyRelationship *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCurtainWall(IfcCurtainWall *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCurtainWallType(IfcCurtainWallType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCurveBoundedPlane(IfcCurveBoundedPlane *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCurveStyle(IfcCurveStyle *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCurveStyleFont(IfcCurveStyleFont *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCurveStyleFontAndScaling(IfcCurveStyleFontAndScaling *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcCurveStyleFontPattern(IfcCurveStyleFontPattern *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDamperType(IfcDamperType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDateAndTime(IfcDateAndTime *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDefinedSymbol(IfcDefinedSymbol *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDerivedProfileDef(IfcDerivedProfileDef *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDerivedUnit(IfcDerivedUnit *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDerivedUnitElement(IfcDerivedUnitElement *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDiameterDimension(IfcDiameterDimension *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDimensionCalloutRelationship(IfcDimensionCalloutRelationship *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDimensionCurve(IfcDimensionCurve *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDimensionCurveDirectedCallout(IfcDimensionCurveDirectedCallout *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDimensionCurveTerminator(IfcDimensionCurveTerminator *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDimensionPair(IfcDimensionPair *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDimensionalExponents(IfcDimensionalExponents *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDirection(IfcDirection *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDiscreteAccessory(IfcDiscreteAccessory *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDiscreteAccessoryType(IfcDiscreteAccessoryType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionChamberElement(IfcDistributionChamberElement *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionChamberElementType(IfcDistributionChamberElementType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionControlElement(IfcDistributionControlElement *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionElement(IfcDistributionElement *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionElementType(IfcDistributionElementType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionFlowElement(IfcDistributionFlowElement *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionPort(IfcDistributionPort *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDocumentElectronicFormat(IfcDocumentElectronicFormat *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDocumentInformation(IfcDocumentInformation *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDocumentInformationRelationship(IfcDocumentInformationRelationship *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDocumentReference(IfcDocumentReference *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDoor(IfcDoor *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDoorLiningProperties(IfcDoorLiningProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDoorPanelProperties(IfcDoorPanelProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDoorStyle(IfcDoorStyle *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDraughtingCallout(IfcDraughtingCallout *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDraughtingCalloutRelationship(IfcDraughtingCalloutRelationship *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDraughtingPreDefinedColour(IfcDraughtingPreDefinedColour *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDraughtingPreDefinedCurveFont(IfcDraughtingPreDefinedCurveFont *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDraughtingPreDefinedTextFont(IfcDraughtingPreDefinedTextFont *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDuctFittingType(IfcDuctFittingType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDuctSegmentType(IfcDuctSegmentType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcDuctSilencerType(IfcDuctSilencerType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcEdge(IfcEdge *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcEdgeCurve(IfcEdgeCurve *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcEdgeLoop(IfcEdgeLoop *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcElectricApplianceType(IfcElectricApplianceType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcElectricDistributionPoint(IfcElectricDistributionPoint *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcElectricFlowStorageDeviceType(IfcElectricFlowStorageDeviceType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcElectricGeneratorType(IfcElectricGeneratorType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcElectricHeaterType(IfcElectricHeaterType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcElectricMotorType(IfcElectricMotorType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcElectricTimeControlType(IfcElectricTimeControlType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcElectricalBaseProperties(IfcElectricalBaseProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcElectricalCircuit(IfcElectricalCircuit *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcElectricalElement(IfcElectricalElement *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcElementAssembly(IfcElementAssembly *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcElementQuantity(IfcElementQuantity *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcEllipse(IfcEllipse *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcEllipseProfileDef(IfcEllipseProfileDef *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcEnergyConversionDevice(IfcEnergyConversionDevice *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcEnergyProperties(IfcEnergyProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcEnvironmentalImpactValue(IfcEnvironmentalImpactValue *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcEquipmentElement(IfcEquipmentElement *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcEquipmentStandard(IfcEquipmentStandard *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcEvaporativeCoolerType(IfcEvaporativeCoolerType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcEvaporatorType(IfcEvaporatorType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcExtendedMaterialProperties(IfcExtendedMaterialProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcExternallyDefinedHatchStyle(IfcExternallyDefinedHatchStyle *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcExternallyDefinedSurfaceStyle(IfcExternallyDefinedSurfaceStyle *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcExternallyDefinedSymbol(IfcExternallyDefinedSymbol *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcExternallyDefinedTextFont(IfcExternallyDefinedTextFont *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcExtrudedAreaSolid(IfcExtrudedAreaSolid *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFace(IfcFace *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFaceBound(IfcFaceBound *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFaceOuterBound(IfcFaceOuterBound *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFaceSurface(IfcFaceSurface *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFacetedBrep(IfcFacetedBrep *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFacetedBrepWithVoids(IfcFacetedBrepWithVoids *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFailureConnectionCondition(IfcFailureConnectionCondition *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFanType(IfcFanType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFastener(IfcFastener *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFastenerType(IfcFastenerType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFillAreaStyle(IfcFillAreaStyle *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFillAreaStyleHatching(IfcFillAreaStyleHatching *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFillAreaStyleTileSymbolWithStyle(IfcFillAreaStyleTileSymbolWithStyle *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFillAreaStyleTiles(IfcFillAreaStyleTiles *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFilterType(IfcFilterType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFireSuppressionTerminalType(IfcFireSuppressionTerminalType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFlowController(IfcFlowController *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFlowFitting(IfcFlowFitting *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFlowInstrumentType(IfcFlowInstrumentType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFlowMeterType(IfcFlowMeterType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFlowMovingDevice(IfcFlowMovingDevice *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFlowSegment(IfcFlowSegment *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFlowStorageDevice(IfcFlowStorageDevice *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFlowTerminal(IfcFlowTerminal *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFlowTreatmentDevice(IfcFlowTreatmentDevice *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFluidFlowProperties(IfcFluidFlowProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFooting(IfcFooting *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFuelProperties(IfcFuelProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFurnishingElement(IfcFurnishingElement *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFurnishingElementType(IfcFurnishingElementType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFurnitureStandard(IfcFurnitureStandard *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcFurnitureType(IfcFurnitureType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcGasTerminalType(IfcGasTerminalType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcGeneralMaterialProperties(IfcGeneralMaterialProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcGeneralProfileProperties(IfcGeneralProfileProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcGeometricCurveSet(IfcGeometricCurveSet *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcGeometricRepresentationContext(IfcGeometricRepresentationContext *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcGeometricRepresentationSubContext(IfcGeometricRepresentationSubContext *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcGeometricSet(IfcGeometricSet *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcGrid(IfcGrid *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcGridAxis(IfcGridAxis *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcGridPlacement(IfcGridPlacement *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcGroup(IfcGroup *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcHalfSpaceSolid(IfcHalfSpaceSolid *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcHeatExchangerType(IfcHeatExchangerType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcHumidifierType(IfcHumidifierType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcHygroscopicMaterialProperties(IfcHygroscopicMaterialProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcIShapeProfileDef(IfcIShapeProfileDef *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcImageTexture(IfcImageTexture *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcInventory(IfcInventory *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcIrregularTimeSeries(IfcIrregularTimeSeries *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcIrregularTimeSeriesValue(IfcIrregularTimeSeriesValue *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcJunctionBoxType(IfcJunctionBoxType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcLShapeProfileDef(IfcLShapeProfileDef *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcLaborResource(IfcLaborResource *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcLampType(IfcLampType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcLibraryInformation(IfcLibraryInformation *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcLibraryReference(IfcLibraryReference *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcLightDistributionData(IfcLightDistributionData *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcLightFixtureType(IfcLightFixtureType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcLightIntensityDistribution(IfcLightIntensityDistribution *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcLightSourceAmbient(IfcLightSourceAmbient *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcLightSourceDirectional(IfcLightSourceDirectional *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcLightSourceGoniometric(IfcLightSourceGoniometric *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcLightSourcePositional(IfcLightSourcePositional *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcLightSourceSpot(IfcLightSourceSpot *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcLine(IfcLine *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcLinearDimension(IfcLinearDimension *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcLocalPlacement(IfcLocalPlacement *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcLocalTime(IfcLocalTime *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcLoop(IfcLoop *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcMappedItem(IfcMappedItem *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcMaterial(IfcMaterial *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcMaterialClassificationRelationship(IfcMaterialClassificationRelationship *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcMaterialDefinitionRepresentation(IfcMaterialDefinitionRepresentation *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcMaterialLayer(IfcMaterialLayer *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcMaterialLayerSet(IfcMaterialLayerSet *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcMaterialList(IfcMaterialList *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcMeasureWithUnit(IfcMeasureWithUnit *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcMechanicalConcreteMaterialProperties(IfcMechanicalConcreteMaterialProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcMechanicalFastener(IfcMechanicalFastener *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcMechanicalFastenerType(IfcMechanicalFastenerType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcMechanicalMaterialProperties(IfcMechanicalMaterialProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcMechanicalSteelMaterialProperties(IfcMechanicalSteelMaterialProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcMember(IfcMember *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcMemberType(IfcMemberType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcMetric(IfcMetric *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcMonetaryUnit(IfcMonetaryUnit *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcMotorConnectionType(IfcMotorConnectionType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcMove(IfcMove *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcObjective(IfcObjective *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcOccupant(IfcOccupant *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcOffsetCurve2D(IfcOffsetCurve2D *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcOffsetCurve3D(IfcOffsetCurve3D *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcOpenShell(IfcOpenShell *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcOpeningElement(IfcOpeningElement *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcOpticalMaterialProperties(IfcOpticalMaterialProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcOrderAction(IfcOrderAction *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcOrganization(IfcOrganization *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcOrganizationRelationship(IfcOrganizationRelationship *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcOrientedEdge(IfcOrientedEdge *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcOutletType(IfcOutletType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcOwnerHistory(IfcOwnerHistory *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPath(IfcPath *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPerformanceHistory(IfcPerformanceHistory *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPermeableCoveringProperties(IfcPermeableCoveringProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPermit(IfcPermit *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPerson(IfcPerson *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPersonAndOrganization(IfcPersonAndOrganization *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPhysicalComplexQuantity(IfcPhysicalComplexQuantity *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPile(IfcPile *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPipeFittingType(IfcPipeFittingType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPipeSegmentType(IfcPipeSegmentType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPixelTexture(IfcPixelTexture *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPlanarBox(IfcPlanarBox *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPlanarExtent(IfcPlanarExtent *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPlane(IfcPlane *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPlate(IfcPlate *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPlateType(IfcPlateType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPointOnCurve(IfcPointOnCurve *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPointOnSurface(IfcPointOnSurface *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPolyLoop(IfcPolyLoop *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPolygonalBoundedHalfSpace(IfcPolygonalBoundedHalfSpace *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPolyline(IfcPolyline *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPostalAddress(IfcPostalAddress *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPreDefinedDimensionSymbol(IfcPreDefinedDimensionSymbol *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPreDefinedPointMarkerSymbol(IfcPreDefinedPointMarkerSymbol *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPreDefinedTerminatorSymbol(IfcPreDefinedTerminatorSymbol *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPresentationLayerAssignment(IfcPresentationLayerAssignment *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPresentationLayerWithStyle(IfcPresentationLayerWithStyle *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPresentationStyleAssignment(IfcPresentationStyleAssignment *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcProcedure(IfcProcedure *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcProductDefinitionShape(IfcProductDefinitionShape *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcProductRepresentation(IfcProductRepresentation *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcProductsOfCombustionProperties(IfcProductsOfCombustionProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcProject(IfcProject *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcProjectOrder(IfcProjectOrder *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcProjectOrderRecord(IfcProjectOrderRecord *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcProjectionCurve(IfcProjectionCurve *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcProjectionElement(IfcProjectionElement *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyBoundedValue(IfcPropertyBoundedValue *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyConstraintRelationship(IfcPropertyConstraintRelationship *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyDependencyRelationship(IfcPropertyDependencyRelationship *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyEnumeratedValue(IfcPropertyEnumeratedValue *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyEnumeration(IfcPropertyEnumeration *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyListValue(IfcPropertyListValue *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyReferenceValue(IfcPropertyReferenceValue *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPropertySet(IfcPropertySet *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPropertySingleValue(IfcPropertySingleValue *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyTableValue(IfcPropertyTableValue *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcProtectiveDeviceType(IfcProtectiveDeviceType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcProxy(IfcProxy *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcPumpType(IfcPumpType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcQuantityArea(IfcQuantityArea *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcQuantityCount(IfcQuantityCount *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcQuantityLength(IfcQuantityLength *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcQuantityTime(IfcQuantityTime *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcQuantityVolume(IfcQuantityVolume *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcQuantityWeight(IfcQuantityWeight *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRadiusDimension(IfcRadiusDimension *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRailing(IfcRailing *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRailingType(IfcRailingType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRamp(IfcRamp *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRampFlight(IfcRampFlight *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRampFlightType(IfcRampFlightType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRationalBezierCurve(IfcRationalBezierCurve *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRectangleHollowProfileDef(IfcRectangleHollowProfileDef *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRectangleProfileDef(IfcRectangleProfileDef *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRectangularPyramid(IfcRectangularPyramid *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRectangularTrimmedSurface(IfcRectangularTrimmedSurface *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcReferencesValueDocument(IfcReferencesValueDocument *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRegularTimeSeries(IfcRegularTimeSeries *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcReinforcementBarProperties(IfcReinforcementBarProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcReinforcementDefinitionProperties(IfcReinforcementDefinitionProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcReinforcingBar(IfcReinforcingBar *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcReinforcingMesh(IfcReinforcingMesh *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelAggregates(IfcRelAggregates *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsTasks(IfcRelAssignsTasks *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToActor(IfcRelAssignsToActor *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToControl(IfcRelAssignsToControl *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToGroup(IfcRelAssignsToGroup *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToProcess(IfcRelAssignsToProcess *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToProduct(IfcRelAssignsToProduct *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToProjectOrder(IfcRelAssignsToProjectOrder *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToResource(IfcRelAssignsToResource *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociates(IfcRelAssociates *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesAppliedValue(IfcRelAssociatesAppliedValue *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesApproval(IfcRelAssociatesApproval *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesClassification(IfcRelAssociatesClassification *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesConstraint(IfcRelAssociatesConstraint *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesDocument(IfcRelAssociatesDocument *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesLibrary(IfcRelAssociatesLibrary *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesMaterial(IfcRelAssociatesMaterial *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesProfileProperties(IfcRelAssociatesProfileProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsElements(IfcRelConnectsElements *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsPathElements(IfcRelConnectsPathElements *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsPortToElement(IfcRelConnectsPortToElement *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsPorts(IfcRelConnectsPorts *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsStructuralActivity(IfcRelConnectsStructuralActivity *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsStructuralElement(IfcRelConnectsStructuralElement *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsStructuralMember(IfcRelConnectsStructuralMember *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsWithEccentricity(IfcRelConnectsWithEccentricity *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsWithRealizingElements(IfcRelConnectsWithRealizingElements *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelContainedInSpatialStructure(IfcRelContainedInSpatialStructure *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelCoversBldgElements(IfcRelCoversBldgElements *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelCoversSpaces(IfcRelCoversSpaces *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelDefinesByProperties(IfcRelDefinesByProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelDefinesByType(IfcRelDefinesByType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelFillsElement(IfcRelFillsElement *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelFlowControlElements(IfcRelFlowControlElements *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelInteractionRequirements(IfcRelInteractionRequirements *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelNests(IfcRelNests *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelOccupiesSpaces(IfcRelOccupiesSpaces *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelOverridesProperties(IfcRelOverridesProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelProjectsElement(IfcRelProjectsElement *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelReferencedInSpatialStructure(IfcRelReferencedInSpatialStructure *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelSchedulesCostItems(IfcRelSchedulesCostItems *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelSequence(IfcRelSequence *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelServicesBuildings(IfcRelServicesBuildings *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelSpaceBoundary(IfcRelSpaceBoundary *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelVoidsElement(IfcRelVoidsElement *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRelaxation(IfcRelaxation *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRepresentation(IfcRepresentation *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRepresentationContext(IfcRepresentationContext *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRepresentationMap(IfcRepresentationMap *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRevolvedAreaSolid(IfcRevolvedAreaSolid *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRibPlateProfileProperties(IfcRibPlateProfileProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRightCircularCone(IfcRightCircularCone *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRightCircularCylinder(IfcRightCircularCylinder *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRoof(IfcRoof *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRoundedEdgeFeature(IfcRoundedEdgeFeature *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcRoundedRectangleProfileDef(IfcRoundedRectangleProfileDef *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSIUnit(IfcSIUnit *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSanitaryTerminalType(IfcSanitaryTerminalType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcScheduleTimeControl(IfcScheduleTimeControl *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSectionProperties(IfcSectionProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSectionReinforcementProperties(IfcSectionReinforcementProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSectionedSpine(IfcSectionedSpine *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSensorType(IfcSensorType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcServiceLife(IfcServiceLife *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcServiceLifeFactor(IfcServiceLifeFactor *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcShapeAspect(IfcShapeAspect *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcShapeRepresentation(IfcShapeRepresentation *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcShellBasedSurfaceModel(IfcShellBasedSurfaceModel *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSite(IfcSite *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSlab(IfcSlab *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSlabType(IfcSlabType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSlippageConnectionCondition(IfcSlippageConnectionCondition *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSoundProperties(IfcSoundProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSoundValue(IfcSoundValue *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSpace(IfcSpace *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSpaceHeaterType(IfcSpaceHeaterType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSpaceProgram(IfcSpaceProgram *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSpaceThermalLoadProperties(IfcSpaceThermalLoadProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSpaceType(IfcSpaceType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSphere(IfcSphere *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStackTerminalType(IfcStackTerminalType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStair(IfcStair *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStairFlight(IfcStairFlight *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStairFlightType(IfcStairFlightType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralAnalysisModel(IfcStructuralAnalysisModel *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralCurveConnection(IfcStructuralCurveConnection *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralCurveMember(IfcStructuralCurveMember *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralCurveMemberVarying(IfcStructuralCurveMemberVarying *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLinearAction(IfcStructuralLinearAction *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLinearActionVarying(IfcStructuralLinearActionVarying *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadGroup(IfcStructuralLoadGroup *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadLinearForce(IfcStructuralLoadLinearForce *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadPlanarForce(IfcStructuralLoadPlanarForce *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadSingleDisplacement(IfcStructuralLoadSingleDisplacement *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadSingleDisplacementDistortion(IfcStructuralLoadSingleDisplacementDistortion *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadSingleForce(IfcStructuralLoadSingleForce *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadSingleForceWarping(IfcStructuralLoadSingleForceWarping *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadTemperature(IfcStructuralLoadTemperature *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralPlanarAction(IfcStructuralPlanarAction *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralPlanarActionVarying(IfcStructuralPlanarActionVarying *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralPointAction(IfcStructuralPointAction *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralPointConnection(IfcStructuralPointConnection *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralPointReaction(IfcStructuralPointReaction *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralProfileProperties(IfcStructuralProfileProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralResultGroup(IfcStructuralResultGroup *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralSteelProfileProperties(IfcStructuralSteelProfileProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralSurfaceConnection(IfcStructuralSurfaceConnection *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralSurfaceMember(IfcStructuralSurfaceMember *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralSurfaceMemberVarying(IfcStructuralSurfaceMemberVarying *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStructuredDimensionCallout(IfcStructuredDimensionCallout *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStyledItem(IfcStyledItem *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcStyledRepresentation(IfcStyledRepresentation *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSubContractResource(IfcSubContractResource *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSubedge(IfcSubedge *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceCurveSweptAreaSolid(IfcSurfaceCurveSweptAreaSolid *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceOfLinearExtrusion(IfcSurfaceOfLinearExtrusion *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceOfRevolution(IfcSurfaceOfRevolution *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceStyle(IfcSurfaceStyle *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceStyleLighting(IfcSurfaceStyleLighting *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceStyleRefraction(IfcSurfaceStyleRefraction *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceStyleRendering(IfcSurfaceStyleRendering *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceStyleShading(IfcSurfaceStyleShading *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceStyleWithTextures(IfcSurfaceStyleWithTextures *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSweptDiskSolid(IfcSweptDiskSolid *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSwitchingDeviceType(IfcSwitchingDeviceType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSymbolStyle(IfcSymbolStyle *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSystem(IfcSystem *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcSystemFurnitureElementType(IfcSystemFurnitureElementType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTShapeProfileDef(IfcTShapeProfileDef *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTable(IfcTable *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTableRow(IfcTableRow *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTankType(IfcTankType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTask(IfcTask *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTelecomAddress(IfcTelecomAddress *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTendon(IfcTendon *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTendonAnchor(IfcTendonAnchor *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTerminatorSymbol(IfcTerminatorSymbol *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTextLiteral(IfcTextLiteral *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTextLiteralWithExtent(IfcTextLiteralWithExtent *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTextStyle(IfcTextStyle *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTextStyleFontModel(IfcTextStyleFontModel *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTextStyleForDefinedFont(IfcTextStyleForDefinedFont *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTextStyleTextModel(IfcTextStyleTextModel *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTextureCoordinateGenerator(IfcTextureCoordinateGenerator *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTextureMap(IfcTextureMap *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTextureVertex(IfcTextureVertex *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcThermalMaterialProperties(IfcThermalMaterialProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTimeSeriesReferenceRelationship(IfcTimeSeriesReferenceRelationship *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTimeSeriesSchedule(IfcTimeSeriesSchedule *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTimeSeriesValue(IfcTimeSeriesValue *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTopologyRepresentation(IfcTopologyRepresentation *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTransformerType(IfcTransformerType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTransportElement(IfcTransportElement *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTransportElementType(IfcTransportElementType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTrapeziumProfileDef(IfcTrapeziumProfileDef *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTrimmedCurve(IfcTrimmedCurve *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTubeBundleType(IfcTubeBundleType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTwoDirectionRepeatFactor(IfcTwoDirectionRepeatFactor *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTypeObject(IfcTypeObject *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcTypeProduct(IfcTypeProduct *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcUShapeProfileDef(IfcUShapeProfileDef *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcUnitAssignment(IfcUnitAssignment *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcUnitaryEquipmentType(IfcUnitaryEquipmentType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcValveType(IfcValveType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcVector(IfcVector *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcVertex(IfcVertex *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcVertexBasedTextureMap(IfcVertexBasedTextureMap *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcVertexLoop(IfcVertexLoop *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcVertexPoint(IfcVertexPoint *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcVibrationIsolatorType(IfcVibrationIsolatorType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcVirtualElement(IfcVirtualElement *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcVirtualGridIntersection(IfcVirtualGridIntersection *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcWall(IfcWall *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcWallStandardCase(IfcWallStandardCase *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcWallType(IfcWallType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcWasteTerminalType(IfcWasteTerminalType *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcWaterProperties(IfcWaterProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcWindow(IfcWindow *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcWindowLiningProperties(IfcWindowLiningProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcWindowPanelProperties(IfcWindowPanelProperties *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcWindowStyle(IfcWindowStyle *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcWorkPlan(IfcWorkPlan *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcWorkSchedule(IfcWorkSchedule *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcZShapeProfileDef(IfcZShapeProfileDef *obj) = 0;
        /**
         * @param obj
         */
        virtual bool visitIfcZone(IfcZone *obj) = 0;
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
        virtual ~DeepCopyOp();
        /**
         * @param obj
         */
        virtual bool visitIfc2DCompositeCurve(Ifc2DCompositeCurve *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcActionRequest(IfcActionRequest *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcActor(IfcActor *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcActorRole(IfcActorRole *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcActuatorType(IfcActuatorType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAirTerminalBoxType(IfcAirTerminalBoxType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAirTerminalType(IfcAirTerminalType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAirToAirHeatRecoveryType(IfcAirToAirHeatRecoveryType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAlarmType(IfcAlarmType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAngularDimension(IfcAngularDimension *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotation(IfcAnnotation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationFillArea(IfcAnnotationFillArea *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationFillAreaOccurrence(IfcAnnotationFillAreaOccurrence *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationSurface(IfcAnnotationSurface *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationSurfaceOccurrence(IfcAnnotationSurfaceOccurrence *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcApplication(IfcApplication *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAppliedValueRelationship(IfcAppliedValueRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcApproval(IfcApproval *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcApprovalActorRelationship(IfcApprovalActorRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcApprovalPropertyRelationship(IfcApprovalPropertyRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcApprovalRelationship(IfcApprovalRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcArbitraryClosedProfileDef(IfcArbitraryClosedProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcArbitraryOpenProfileDef(IfcArbitraryOpenProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcArbitraryProfileDefWithVoids(IfcArbitraryProfileDefWithVoids *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAsset(IfcAsset *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAsymmetricIShapeProfileDef(IfcAsymmetricIShapeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAxis1Placement(IfcAxis1Placement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAxis2Placement2D(IfcAxis2Placement2D *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAxis2Placement3D(IfcAxis2Placement3D *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBeam(IfcBeam *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBeamType(IfcBeamType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBezierCurve(IfcBezierCurve *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBlobTexture(IfcBlobTexture *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBlock(IfcBlock *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBoilerType(IfcBoilerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBooleanClippingResult(IfcBooleanClippingResult *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBooleanResult(IfcBooleanResult *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBoundaryEdgeCondition(IfcBoundaryEdgeCondition *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBoundaryFaceCondition(IfcBoundaryFaceCondition *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBoundaryNodeCondition(IfcBoundaryNodeCondition *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBoundaryNodeConditionWarping(IfcBoundaryNodeConditionWarping *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBoundedSurface(IfcBoundedSurface *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBoundingBox(IfcBoundingBox *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBoxedHalfSpace(IfcBoxedHalfSpace *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBuilding(IfcBuilding *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBuildingElementPart(IfcBuildingElementPart *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBuildingElementProxy(IfcBuildingElementProxy *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBuildingElementProxyType(IfcBuildingElementProxyType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBuildingStorey(IfcBuildingStorey *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCShapeProfileDef(IfcCShapeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCableCarrierFittingType(IfcCableCarrierFittingType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCableCarrierSegmentType(IfcCableCarrierSegmentType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCableSegmentType(IfcCableSegmentType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCalendarDate(IfcCalendarDate *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCartesianPoint(IfcCartesianPoint *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCartesianTransformationOperator2D(IfcCartesianTransformationOperator2D *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCartesianTransformationOperator2DnonUniform(IfcCartesianTransformationOperator2DnonUniform *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCartesianTransformationOperator3D(IfcCartesianTransformationOperator3D *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCartesianTransformationOperator3DnonUniform(IfcCartesianTransformationOperator3DnonUniform *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCenterLineProfileDef(IfcCenterLineProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcChamferEdgeFeature(IfcChamferEdgeFeature *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcChillerType(IfcChillerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCircle(IfcCircle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCircleHollowProfileDef(IfcCircleHollowProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCircleProfileDef(IfcCircleProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcClassification(IfcClassification *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcClassificationItem(IfcClassificationItem *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcClassificationItemRelationship(IfcClassificationItemRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcClassificationNotation(IfcClassificationNotation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcClassificationNotationFacet(IfcClassificationNotationFacet *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcClassificationReference(IfcClassificationReference *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcClosedShell(IfcClosedShell *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCoilType(IfcCoilType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcColourRgb(IfcColourRgb *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcColumn(IfcColumn *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcColumnType(IfcColumnType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcComplexProperty(IfcComplexProperty *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCompositeCurve(IfcCompositeCurve *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCompositeCurveSegment(IfcCompositeCurveSegment *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCompositeProfileDef(IfcCompositeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCompressorType(IfcCompressorType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCondenserType(IfcCondenserType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCondition(IfcCondition *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConditionCriterion(IfcConditionCriterion *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConnectedFaceSet(IfcConnectedFaceSet *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConnectionCurveGeometry(IfcConnectionCurveGeometry *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConnectionPointEccentricity(IfcConnectionPointEccentricity *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConnectionPointGeometry(IfcConnectionPointGeometry *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConnectionPortGeometry(IfcConnectionPortGeometry *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConnectionSurfaceGeometry(IfcConnectionSurfaceGeometry *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConstraintAggregationRelationship(IfcConstraintAggregationRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConstraintClassificationRelationship(IfcConstraintClassificationRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConstraintRelationship(IfcConstraintRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConstructionEquipmentResource(IfcConstructionEquipmentResource *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConstructionMaterialResource(IfcConstructionMaterialResource *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConstructionProductResource(IfcConstructionProductResource *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcContextDependentUnit(IfcContextDependentUnit *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcControllerType(IfcControllerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConversionBasedUnit(IfcConversionBasedUnit *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCooledBeamType(IfcCooledBeamType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCoolingTowerType(IfcCoolingTowerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCoordinatedUniversalTimeOffset(IfcCoordinatedUniversalTimeOffset *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCostItem(IfcCostItem *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCostSchedule(IfcCostSchedule *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCostValue(IfcCostValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCovering(IfcCovering *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCoveringType(IfcCoveringType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCraneRailAShapeProfileDef(IfcCraneRailAShapeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCraneRailFShapeProfileDef(IfcCraneRailFShapeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCrewResource(IfcCrewResource *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCsgSolid(IfcCsgSolid *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCurrencyRelationship(IfcCurrencyRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCurtainWall(IfcCurtainWall *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCurtainWallType(IfcCurtainWallType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCurveBoundedPlane(IfcCurveBoundedPlane *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCurveStyle(IfcCurveStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCurveStyleFont(IfcCurveStyleFont *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCurveStyleFontAndScaling(IfcCurveStyleFontAndScaling *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCurveStyleFontPattern(IfcCurveStyleFontPattern *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDamperType(IfcDamperType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDateAndTime(IfcDateAndTime *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDefinedSymbol(IfcDefinedSymbol *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDerivedProfileDef(IfcDerivedProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDerivedUnit(IfcDerivedUnit *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDerivedUnitElement(IfcDerivedUnitElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDiameterDimension(IfcDiameterDimension *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDimensionCalloutRelationship(IfcDimensionCalloutRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDimensionCurve(IfcDimensionCurve *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDimensionCurveDirectedCallout(IfcDimensionCurveDirectedCallout *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDimensionCurveTerminator(IfcDimensionCurveTerminator *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDimensionPair(IfcDimensionPair *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDimensionalExponents(IfcDimensionalExponents *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDirection(IfcDirection *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDiscreteAccessory(IfcDiscreteAccessory *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDiscreteAccessoryType(IfcDiscreteAccessoryType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionChamberElement(IfcDistributionChamberElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionChamberElementType(IfcDistributionChamberElementType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionControlElement(IfcDistributionControlElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionElement(IfcDistributionElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionElementType(IfcDistributionElementType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionFlowElement(IfcDistributionFlowElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionPort(IfcDistributionPort *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDocumentElectronicFormat(IfcDocumentElectronicFormat *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDocumentInformation(IfcDocumentInformation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDocumentInformationRelationship(IfcDocumentInformationRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDocumentReference(IfcDocumentReference *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDoor(IfcDoor *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDoorLiningProperties(IfcDoorLiningProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDoorPanelProperties(IfcDoorPanelProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDoorStyle(IfcDoorStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDraughtingCallout(IfcDraughtingCallout *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDraughtingCalloutRelationship(IfcDraughtingCalloutRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDraughtingPreDefinedColour(IfcDraughtingPreDefinedColour *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDraughtingPreDefinedCurveFont(IfcDraughtingPreDefinedCurveFont *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDraughtingPreDefinedTextFont(IfcDraughtingPreDefinedTextFont *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDuctFittingType(IfcDuctFittingType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDuctSegmentType(IfcDuctSegmentType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDuctSilencerType(IfcDuctSilencerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEdge(IfcEdge *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEdgeCurve(IfcEdgeCurve *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEdgeLoop(IfcEdgeLoop *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricApplianceType(IfcElectricApplianceType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricDistributionPoint(IfcElectricDistributionPoint *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricFlowStorageDeviceType(IfcElectricFlowStorageDeviceType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricGeneratorType(IfcElectricGeneratorType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricHeaterType(IfcElectricHeaterType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricMotorType(IfcElectricMotorType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricTimeControlType(IfcElectricTimeControlType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricalBaseProperties(IfcElectricalBaseProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricalCircuit(IfcElectricalCircuit *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricalElement(IfcElectricalElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElementAssembly(IfcElementAssembly *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElementQuantity(IfcElementQuantity *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEllipse(IfcEllipse *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEllipseProfileDef(IfcEllipseProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEnergyConversionDevice(IfcEnergyConversionDevice *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEnergyProperties(IfcEnergyProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEnvironmentalImpactValue(IfcEnvironmentalImpactValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEquipmentElement(IfcEquipmentElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEquipmentStandard(IfcEquipmentStandard *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEvaporativeCoolerType(IfcEvaporativeCoolerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEvaporatorType(IfcEvaporatorType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcExtendedMaterialProperties(IfcExtendedMaterialProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcExternallyDefinedHatchStyle(IfcExternallyDefinedHatchStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcExternallyDefinedSurfaceStyle(IfcExternallyDefinedSurfaceStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcExternallyDefinedSymbol(IfcExternallyDefinedSymbol *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcExternallyDefinedTextFont(IfcExternallyDefinedTextFont *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcExtrudedAreaSolid(IfcExtrudedAreaSolid *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFace(IfcFace *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFaceBound(IfcFaceBound *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFaceOuterBound(IfcFaceOuterBound *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFaceSurface(IfcFaceSurface *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFacetedBrep(IfcFacetedBrep *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFacetedBrepWithVoids(IfcFacetedBrepWithVoids *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFailureConnectionCondition(IfcFailureConnectionCondition *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFanType(IfcFanType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFastener(IfcFastener *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFastenerType(IfcFastenerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFillAreaStyle(IfcFillAreaStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFillAreaStyleHatching(IfcFillAreaStyleHatching *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFillAreaStyleTileSymbolWithStyle(IfcFillAreaStyleTileSymbolWithStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFillAreaStyleTiles(IfcFillAreaStyleTiles *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFilterType(IfcFilterType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFireSuppressionTerminalType(IfcFireSuppressionTerminalType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFlowController(IfcFlowController *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFlowFitting(IfcFlowFitting *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFlowInstrumentType(IfcFlowInstrumentType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFlowMeterType(IfcFlowMeterType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFlowMovingDevice(IfcFlowMovingDevice *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFlowSegment(IfcFlowSegment *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFlowStorageDevice(IfcFlowStorageDevice *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFlowTerminal(IfcFlowTerminal *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFlowTreatmentDevice(IfcFlowTreatmentDevice *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFluidFlowProperties(IfcFluidFlowProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFooting(IfcFooting *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFuelProperties(IfcFuelProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFurnishingElement(IfcFurnishingElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFurnishingElementType(IfcFurnishingElementType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFurnitureStandard(IfcFurnitureStandard *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFurnitureType(IfcFurnitureType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGasTerminalType(IfcGasTerminalType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGeneralMaterialProperties(IfcGeneralMaterialProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGeneralProfileProperties(IfcGeneralProfileProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGeometricCurveSet(IfcGeometricCurveSet *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGeometricRepresentationContext(IfcGeometricRepresentationContext *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGeometricRepresentationSubContext(IfcGeometricRepresentationSubContext *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGeometricSet(IfcGeometricSet *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGrid(IfcGrid *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGridAxis(IfcGridAxis *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGridPlacement(IfcGridPlacement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGroup(IfcGroup *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcHalfSpaceSolid(IfcHalfSpaceSolid *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcHeatExchangerType(IfcHeatExchangerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcHumidifierType(IfcHumidifierType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcHygroscopicMaterialProperties(IfcHygroscopicMaterialProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcIShapeProfileDef(IfcIShapeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcImageTexture(IfcImageTexture *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcInventory(IfcInventory *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcIrregularTimeSeries(IfcIrregularTimeSeries *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcIrregularTimeSeriesValue(IfcIrregularTimeSeriesValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcJunctionBoxType(IfcJunctionBoxType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLShapeProfileDef(IfcLShapeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLaborResource(IfcLaborResource *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLampType(IfcLampType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLibraryInformation(IfcLibraryInformation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLibraryReference(IfcLibraryReference *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLightDistributionData(IfcLightDistributionData *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLightFixtureType(IfcLightFixtureType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLightIntensityDistribution(IfcLightIntensityDistribution *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLightSourceAmbient(IfcLightSourceAmbient *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLightSourceDirectional(IfcLightSourceDirectional *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLightSourceGoniometric(IfcLightSourceGoniometric *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLightSourcePositional(IfcLightSourcePositional *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLightSourceSpot(IfcLightSourceSpot *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLine(IfcLine *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLinearDimension(IfcLinearDimension *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLocalPlacement(IfcLocalPlacement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLocalTime(IfcLocalTime *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLoop(IfcLoop *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMappedItem(IfcMappedItem *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMaterial(IfcMaterial *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMaterialClassificationRelationship(IfcMaterialClassificationRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMaterialDefinitionRepresentation(IfcMaterialDefinitionRepresentation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMaterialLayer(IfcMaterialLayer *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMaterialLayerSet(IfcMaterialLayerSet *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMaterialList(IfcMaterialList *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMeasureWithUnit(IfcMeasureWithUnit *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMechanicalConcreteMaterialProperties(IfcMechanicalConcreteMaterialProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMechanicalFastener(IfcMechanicalFastener *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMechanicalFastenerType(IfcMechanicalFastenerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMechanicalMaterialProperties(IfcMechanicalMaterialProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMechanicalSteelMaterialProperties(IfcMechanicalSteelMaterialProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMember(IfcMember *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMemberType(IfcMemberType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMetric(IfcMetric *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMonetaryUnit(IfcMonetaryUnit *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMotorConnectionType(IfcMotorConnectionType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMove(IfcMove *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcObjective(IfcObjective *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOccupant(IfcOccupant *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOffsetCurve2D(IfcOffsetCurve2D *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOffsetCurve3D(IfcOffsetCurve3D *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOpenShell(IfcOpenShell *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOpeningElement(IfcOpeningElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOpticalMaterialProperties(IfcOpticalMaterialProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOrderAction(IfcOrderAction *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOrganization(IfcOrganization *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOrganizationRelationship(IfcOrganizationRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOrientedEdge(IfcOrientedEdge *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOutletType(IfcOutletType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOwnerHistory(IfcOwnerHistory *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPath(IfcPath *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPerformanceHistory(IfcPerformanceHistory *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPermeableCoveringProperties(IfcPermeableCoveringProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPermit(IfcPermit *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPerson(IfcPerson *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPersonAndOrganization(IfcPersonAndOrganization *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPhysicalComplexQuantity(IfcPhysicalComplexQuantity *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPile(IfcPile *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPipeFittingType(IfcPipeFittingType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPipeSegmentType(IfcPipeSegmentType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPixelTexture(IfcPixelTexture *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPlanarBox(IfcPlanarBox *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPlanarExtent(IfcPlanarExtent *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPlane(IfcPlane *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPlate(IfcPlate *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPlateType(IfcPlateType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPointOnCurve(IfcPointOnCurve *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPointOnSurface(IfcPointOnSurface *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPolyLoop(IfcPolyLoop *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPolygonalBoundedHalfSpace(IfcPolygonalBoundedHalfSpace *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPolyline(IfcPolyline *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPostalAddress(IfcPostalAddress *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPreDefinedDimensionSymbol(IfcPreDefinedDimensionSymbol *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPreDefinedPointMarkerSymbol(IfcPreDefinedPointMarkerSymbol *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPreDefinedTerminatorSymbol(IfcPreDefinedTerminatorSymbol *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPresentationLayerAssignment(IfcPresentationLayerAssignment *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPresentationLayerWithStyle(IfcPresentationLayerWithStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPresentationStyleAssignment(IfcPresentationStyleAssignment *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProcedure(IfcProcedure *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProductDefinitionShape(IfcProductDefinitionShape *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProductRepresentation(IfcProductRepresentation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProductsOfCombustionProperties(IfcProductsOfCombustionProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProject(IfcProject *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProjectOrder(IfcProjectOrder *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProjectOrderRecord(IfcProjectOrderRecord *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProjectionCurve(IfcProjectionCurve *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProjectionElement(IfcProjectionElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyBoundedValue(IfcPropertyBoundedValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyConstraintRelationship(IfcPropertyConstraintRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyDependencyRelationship(IfcPropertyDependencyRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyEnumeratedValue(IfcPropertyEnumeratedValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyEnumeration(IfcPropertyEnumeration *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyListValue(IfcPropertyListValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyReferenceValue(IfcPropertyReferenceValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertySet(IfcPropertySet *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertySingleValue(IfcPropertySingleValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyTableValue(IfcPropertyTableValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProtectiveDeviceType(IfcProtectiveDeviceType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProxy(IfcProxy *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPumpType(IfcPumpType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcQuantityArea(IfcQuantityArea *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcQuantityCount(IfcQuantityCount *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcQuantityLength(IfcQuantityLength *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcQuantityTime(IfcQuantityTime *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcQuantityVolume(IfcQuantityVolume *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcQuantityWeight(IfcQuantityWeight *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRadiusDimension(IfcRadiusDimension *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRailing(IfcRailing *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRailingType(IfcRailingType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRamp(IfcRamp *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRampFlight(IfcRampFlight *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRampFlightType(IfcRampFlightType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRationalBezierCurve(IfcRationalBezierCurve *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRectangleHollowProfileDef(IfcRectangleHollowProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRectangleProfileDef(IfcRectangleProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRectangularPyramid(IfcRectangularPyramid *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRectangularTrimmedSurface(IfcRectangularTrimmedSurface *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcReferencesValueDocument(IfcReferencesValueDocument *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRegularTimeSeries(IfcRegularTimeSeries *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcReinforcementBarProperties(IfcReinforcementBarProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcReinforcementDefinitionProperties(IfcReinforcementDefinitionProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcReinforcingBar(IfcReinforcingBar *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcReinforcingMesh(IfcReinforcingMesh *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAggregates(IfcRelAggregates *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsTasks(IfcRelAssignsTasks *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToActor(IfcRelAssignsToActor *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToControl(IfcRelAssignsToControl *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToGroup(IfcRelAssignsToGroup *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToProcess(IfcRelAssignsToProcess *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToProduct(IfcRelAssignsToProduct *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToProjectOrder(IfcRelAssignsToProjectOrder *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToResource(IfcRelAssignsToResource *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociates(IfcRelAssociates *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesAppliedValue(IfcRelAssociatesAppliedValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesApproval(IfcRelAssociatesApproval *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesClassification(IfcRelAssociatesClassification *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesConstraint(IfcRelAssociatesConstraint *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesDocument(IfcRelAssociatesDocument *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesLibrary(IfcRelAssociatesLibrary *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesMaterial(IfcRelAssociatesMaterial *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesProfileProperties(IfcRelAssociatesProfileProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsElements(IfcRelConnectsElements *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsPathElements(IfcRelConnectsPathElements *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsPortToElement(IfcRelConnectsPortToElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsPorts(IfcRelConnectsPorts *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsStructuralActivity(IfcRelConnectsStructuralActivity *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsStructuralElement(IfcRelConnectsStructuralElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsStructuralMember(IfcRelConnectsStructuralMember *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsWithEccentricity(IfcRelConnectsWithEccentricity *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsWithRealizingElements(IfcRelConnectsWithRealizingElements *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelContainedInSpatialStructure(IfcRelContainedInSpatialStructure *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelCoversBldgElements(IfcRelCoversBldgElements *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelCoversSpaces(IfcRelCoversSpaces *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelDefinesByProperties(IfcRelDefinesByProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelDefinesByType(IfcRelDefinesByType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelFillsElement(IfcRelFillsElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelFlowControlElements(IfcRelFlowControlElements *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelInteractionRequirements(IfcRelInteractionRequirements *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelNests(IfcRelNests *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelOccupiesSpaces(IfcRelOccupiesSpaces *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelOverridesProperties(IfcRelOverridesProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelProjectsElement(IfcRelProjectsElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelReferencedInSpatialStructure(IfcRelReferencedInSpatialStructure *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelSchedulesCostItems(IfcRelSchedulesCostItems *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelSequence(IfcRelSequence *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelServicesBuildings(IfcRelServicesBuildings *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelSpaceBoundary(IfcRelSpaceBoundary *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelVoidsElement(IfcRelVoidsElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelaxation(IfcRelaxation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRepresentation(IfcRepresentation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRepresentationContext(IfcRepresentationContext *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRepresentationMap(IfcRepresentationMap *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRevolvedAreaSolid(IfcRevolvedAreaSolid *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRibPlateProfileProperties(IfcRibPlateProfileProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRightCircularCone(IfcRightCircularCone *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRightCircularCylinder(IfcRightCircularCylinder *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRoof(IfcRoof *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRoundedEdgeFeature(IfcRoundedEdgeFeature *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRoundedRectangleProfileDef(IfcRoundedRectangleProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSIUnit(IfcSIUnit *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSanitaryTerminalType(IfcSanitaryTerminalType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcScheduleTimeControl(IfcScheduleTimeControl *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSectionProperties(IfcSectionProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSectionReinforcementProperties(IfcSectionReinforcementProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSectionedSpine(IfcSectionedSpine *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSensorType(IfcSensorType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcServiceLife(IfcServiceLife *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcServiceLifeFactor(IfcServiceLifeFactor *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcShapeAspect(IfcShapeAspect *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcShapeRepresentation(IfcShapeRepresentation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcShellBasedSurfaceModel(IfcShellBasedSurfaceModel *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSite(IfcSite *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSlab(IfcSlab *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSlabType(IfcSlabType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSlippageConnectionCondition(IfcSlippageConnectionCondition *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSoundProperties(IfcSoundProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSoundValue(IfcSoundValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSpace(IfcSpace *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSpaceHeaterType(IfcSpaceHeaterType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSpaceProgram(IfcSpaceProgram *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSpaceThermalLoadProperties(IfcSpaceThermalLoadProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSpaceType(IfcSpaceType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSphere(IfcSphere *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStackTerminalType(IfcStackTerminalType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStair(IfcStair *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStairFlight(IfcStairFlight *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStairFlightType(IfcStairFlightType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralAnalysisModel(IfcStructuralAnalysisModel *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralCurveConnection(IfcStructuralCurveConnection *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralCurveMember(IfcStructuralCurveMember *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralCurveMemberVarying(IfcStructuralCurveMemberVarying *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLinearAction(IfcStructuralLinearAction *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLinearActionVarying(IfcStructuralLinearActionVarying *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadGroup(IfcStructuralLoadGroup *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadLinearForce(IfcStructuralLoadLinearForce *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadPlanarForce(IfcStructuralLoadPlanarForce *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadSingleDisplacement(IfcStructuralLoadSingleDisplacement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadSingleDisplacementDistortion(IfcStructuralLoadSingleDisplacementDistortion *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadSingleForce(IfcStructuralLoadSingleForce *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadSingleForceWarping(IfcStructuralLoadSingleForceWarping *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadTemperature(IfcStructuralLoadTemperature *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralPlanarAction(IfcStructuralPlanarAction *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralPlanarActionVarying(IfcStructuralPlanarActionVarying *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralPointAction(IfcStructuralPointAction *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralPointConnection(IfcStructuralPointConnection *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralPointReaction(IfcStructuralPointReaction *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralProfileProperties(IfcStructuralProfileProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralResultGroup(IfcStructuralResultGroup *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralSteelProfileProperties(IfcStructuralSteelProfileProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralSurfaceConnection(IfcStructuralSurfaceConnection *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralSurfaceMember(IfcStructuralSurfaceMember *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralSurfaceMemberVarying(IfcStructuralSurfaceMemberVarying *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuredDimensionCallout(IfcStructuredDimensionCallout *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStyledItem(IfcStyledItem *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStyledRepresentation(IfcStyledRepresentation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSubContractResource(IfcSubContractResource *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSubedge(IfcSubedge *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceCurveSweptAreaSolid(IfcSurfaceCurveSweptAreaSolid *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceOfLinearExtrusion(IfcSurfaceOfLinearExtrusion *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceOfRevolution(IfcSurfaceOfRevolution *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceStyle(IfcSurfaceStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceStyleLighting(IfcSurfaceStyleLighting *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceStyleRefraction(IfcSurfaceStyleRefraction *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceStyleRendering(IfcSurfaceStyleRendering *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceStyleShading(IfcSurfaceStyleShading *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceStyleWithTextures(IfcSurfaceStyleWithTextures *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSweptDiskSolid(IfcSweptDiskSolid *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSwitchingDeviceType(IfcSwitchingDeviceType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSymbolStyle(IfcSymbolStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSystem(IfcSystem *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSystemFurnitureElementType(IfcSystemFurnitureElementType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTShapeProfileDef(IfcTShapeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTable(IfcTable *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTableRow(IfcTableRow *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTankType(IfcTankType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTask(IfcTask *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTelecomAddress(IfcTelecomAddress *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTendon(IfcTendon *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTendonAnchor(IfcTendonAnchor *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTerminatorSymbol(IfcTerminatorSymbol *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextLiteral(IfcTextLiteral *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextLiteralWithExtent(IfcTextLiteralWithExtent *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextStyle(IfcTextStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextStyleFontModel(IfcTextStyleFontModel *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextStyleForDefinedFont(IfcTextStyleForDefinedFont *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextStyleTextModel(IfcTextStyleTextModel *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextureCoordinateGenerator(IfcTextureCoordinateGenerator *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextureMap(IfcTextureMap *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextureVertex(IfcTextureVertex *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcThermalMaterialProperties(IfcThermalMaterialProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTimeSeriesReferenceRelationship(IfcTimeSeriesReferenceRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTimeSeriesSchedule(IfcTimeSeriesSchedule *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTimeSeriesValue(IfcTimeSeriesValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTopologyRepresentation(IfcTopologyRepresentation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTransformerType(IfcTransformerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTransportElement(IfcTransportElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTransportElementType(IfcTransportElementType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTrapeziumProfileDef(IfcTrapeziumProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTrimmedCurve(IfcTrimmedCurve *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTubeBundleType(IfcTubeBundleType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTwoDirectionRepeatFactor(IfcTwoDirectionRepeatFactor *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTypeObject(IfcTypeObject *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTypeProduct(IfcTypeProduct *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcUShapeProfileDef(IfcUShapeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcUnitAssignment(IfcUnitAssignment *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcUnitaryEquipmentType(IfcUnitaryEquipmentType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcValveType(IfcValveType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcVector(IfcVector *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcVertex(IfcVertex *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcVertexBasedTextureMap(IfcVertexBasedTextureMap *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcVertexLoop(IfcVertexLoop *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcVertexPoint(IfcVertexPoint *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcVibrationIsolatorType(IfcVibrationIsolatorType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcVirtualElement(IfcVirtualElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcVirtualGridIntersection(IfcVirtualGridIntersection *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWall(IfcWall *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWallStandardCase(IfcWallStandardCase *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWallType(IfcWallType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWasteTerminalType(IfcWasteTerminalType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWaterProperties(IfcWaterProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWindow(IfcWindow *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWindowLiningProperties(IfcWindowLiningProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWindowPanelProperties(IfcWindowPanelProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWindowStyle(IfcWindowStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWorkPlan(IfcWorkPlan *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWorkSchedule(IfcWorkSchedule *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcZShapeProfileDef(IfcZShapeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcZone(IfcZone *obj);

        /**
         * @param original
         */
        virtual Step::BaseObject *find(const Step::BaseObject *original) const;
        
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
        virtual void associate(const Step::BaseObject *original, Step::BaseObject *clone) const;


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
        virtual ~ShallowCopyOp();
        /**
         * @param obj
         */
        virtual bool visitIfc2DCompositeCurve(Ifc2DCompositeCurve *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcActionRequest(IfcActionRequest *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcActor(IfcActor *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcActorRole(IfcActorRole *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcActuatorType(IfcActuatorType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAirTerminalBoxType(IfcAirTerminalBoxType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAirTerminalType(IfcAirTerminalType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAirToAirHeatRecoveryType(IfcAirToAirHeatRecoveryType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAlarmType(IfcAlarmType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAngularDimension(IfcAngularDimension *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotation(IfcAnnotation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationFillArea(IfcAnnotationFillArea *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationFillAreaOccurrence(IfcAnnotationFillAreaOccurrence *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationSurface(IfcAnnotationSurface *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationSurfaceOccurrence(IfcAnnotationSurfaceOccurrence *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcApplication(IfcApplication *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAppliedValueRelationship(IfcAppliedValueRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcApproval(IfcApproval *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcApprovalActorRelationship(IfcApprovalActorRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcApprovalPropertyRelationship(IfcApprovalPropertyRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcApprovalRelationship(IfcApprovalRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcArbitraryClosedProfileDef(IfcArbitraryClosedProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcArbitraryOpenProfileDef(IfcArbitraryOpenProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcArbitraryProfileDefWithVoids(IfcArbitraryProfileDefWithVoids *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAsset(IfcAsset *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAsymmetricIShapeProfileDef(IfcAsymmetricIShapeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAxis1Placement(IfcAxis1Placement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAxis2Placement2D(IfcAxis2Placement2D *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAxis2Placement3D(IfcAxis2Placement3D *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBeam(IfcBeam *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBeamType(IfcBeamType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBezierCurve(IfcBezierCurve *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBlobTexture(IfcBlobTexture *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBlock(IfcBlock *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBoilerType(IfcBoilerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBooleanClippingResult(IfcBooleanClippingResult *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBooleanResult(IfcBooleanResult *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBoundaryEdgeCondition(IfcBoundaryEdgeCondition *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBoundaryFaceCondition(IfcBoundaryFaceCondition *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBoundaryNodeCondition(IfcBoundaryNodeCondition *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBoundaryNodeConditionWarping(IfcBoundaryNodeConditionWarping *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBoundedSurface(IfcBoundedSurface *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBoundingBox(IfcBoundingBox *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBoxedHalfSpace(IfcBoxedHalfSpace *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBuilding(IfcBuilding *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBuildingElementPart(IfcBuildingElementPart *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBuildingElementProxy(IfcBuildingElementProxy *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBuildingElementProxyType(IfcBuildingElementProxyType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBuildingStorey(IfcBuildingStorey *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCShapeProfileDef(IfcCShapeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCableCarrierFittingType(IfcCableCarrierFittingType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCableCarrierSegmentType(IfcCableCarrierSegmentType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCableSegmentType(IfcCableSegmentType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCalendarDate(IfcCalendarDate *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCartesianPoint(IfcCartesianPoint *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCartesianTransformationOperator2D(IfcCartesianTransformationOperator2D *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCartesianTransformationOperator2DnonUniform(IfcCartesianTransformationOperator2DnonUniform *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCartesianTransformationOperator3D(IfcCartesianTransformationOperator3D *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCartesianTransformationOperator3DnonUniform(IfcCartesianTransformationOperator3DnonUniform *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCenterLineProfileDef(IfcCenterLineProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcChamferEdgeFeature(IfcChamferEdgeFeature *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcChillerType(IfcChillerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCircle(IfcCircle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCircleHollowProfileDef(IfcCircleHollowProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCircleProfileDef(IfcCircleProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcClassification(IfcClassification *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcClassificationItem(IfcClassificationItem *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcClassificationItemRelationship(IfcClassificationItemRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcClassificationNotation(IfcClassificationNotation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcClassificationNotationFacet(IfcClassificationNotationFacet *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcClassificationReference(IfcClassificationReference *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcClosedShell(IfcClosedShell *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCoilType(IfcCoilType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcColourRgb(IfcColourRgb *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcColumn(IfcColumn *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcColumnType(IfcColumnType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcComplexProperty(IfcComplexProperty *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCompositeCurve(IfcCompositeCurve *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCompositeCurveSegment(IfcCompositeCurveSegment *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCompositeProfileDef(IfcCompositeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCompressorType(IfcCompressorType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCondenserType(IfcCondenserType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCondition(IfcCondition *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConditionCriterion(IfcConditionCriterion *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConnectedFaceSet(IfcConnectedFaceSet *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConnectionCurveGeometry(IfcConnectionCurveGeometry *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConnectionPointEccentricity(IfcConnectionPointEccentricity *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConnectionPointGeometry(IfcConnectionPointGeometry *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConnectionPortGeometry(IfcConnectionPortGeometry *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConnectionSurfaceGeometry(IfcConnectionSurfaceGeometry *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConstraintAggregationRelationship(IfcConstraintAggregationRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConstraintClassificationRelationship(IfcConstraintClassificationRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConstraintRelationship(IfcConstraintRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConstructionEquipmentResource(IfcConstructionEquipmentResource *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConstructionMaterialResource(IfcConstructionMaterialResource *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConstructionProductResource(IfcConstructionProductResource *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcContextDependentUnit(IfcContextDependentUnit *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcControllerType(IfcControllerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConversionBasedUnit(IfcConversionBasedUnit *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCooledBeamType(IfcCooledBeamType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCoolingTowerType(IfcCoolingTowerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCoordinatedUniversalTimeOffset(IfcCoordinatedUniversalTimeOffset *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCostItem(IfcCostItem *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCostSchedule(IfcCostSchedule *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCostValue(IfcCostValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCovering(IfcCovering *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCoveringType(IfcCoveringType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCraneRailAShapeProfileDef(IfcCraneRailAShapeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCraneRailFShapeProfileDef(IfcCraneRailFShapeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCrewResource(IfcCrewResource *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCsgSolid(IfcCsgSolid *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCurrencyRelationship(IfcCurrencyRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCurtainWall(IfcCurtainWall *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCurtainWallType(IfcCurtainWallType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCurveBoundedPlane(IfcCurveBoundedPlane *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCurveStyle(IfcCurveStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCurveStyleFont(IfcCurveStyleFont *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCurveStyleFontAndScaling(IfcCurveStyleFontAndScaling *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCurveStyleFontPattern(IfcCurveStyleFontPattern *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDamperType(IfcDamperType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDateAndTime(IfcDateAndTime *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDefinedSymbol(IfcDefinedSymbol *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDerivedProfileDef(IfcDerivedProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDerivedUnit(IfcDerivedUnit *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDerivedUnitElement(IfcDerivedUnitElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDiameterDimension(IfcDiameterDimension *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDimensionCalloutRelationship(IfcDimensionCalloutRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDimensionCurve(IfcDimensionCurve *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDimensionCurveDirectedCallout(IfcDimensionCurveDirectedCallout *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDimensionCurveTerminator(IfcDimensionCurveTerminator *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDimensionPair(IfcDimensionPair *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDimensionalExponents(IfcDimensionalExponents *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDirection(IfcDirection *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDiscreteAccessory(IfcDiscreteAccessory *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDiscreteAccessoryType(IfcDiscreteAccessoryType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionChamberElement(IfcDistributionChamberElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionChamberElementType(IfcDistributionChamberElementType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionControlElement(IfcDistributionControlElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionElement(IfcDistributionElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionElementType(IfcDistributionElementType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionFlowElement(IfcDistributionFlowElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionPort(IfcDistributionPort *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDocumentElectronicFormat(IfcDocumentElectronicFormat *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDocumentInformation(IfcDocumentInformation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDocumentInformationRelationship(IfcDocumentInformationRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDocumentReference(IfcDocumentReference *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDoor(IfcDoor *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDoorLiningProperties(IfcDoorLiningProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDoorPanelProperties(IfcDoorPanelProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDoorStyle(IfcDoorStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDraughtingCallout(IfcDraughtingCallout *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDraughtingCalloutRelationship(IfcDraughtingCalloutRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDraughtingPreDefinedColour(IfcDraughtingPreDefinedColour *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDraughtingPreDefinedCurveFont(IfcDraughtingPreDefinedCurveFont *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDraughtingPreDefinedTextFont(IfcDraughtingPreDefinedTextFont *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDuctFittingType(IfcDuctFittingType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDuctSegmentType(IfcDuctSegmentType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDuctSilencerType(IfcDuctSilencerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEdge(IfcEdge *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEdgeCurve(IfcEdgeCurve *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEdgeLoop(IfcEdgeLoop *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricApplianceType(IfcElectricApplianceType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricDistributionPoint(IfcElectricDistributionPoint *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricFlowStorageDeviceType(IfcElectricFlowStorageDeviceType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricGeneratorType(IfcElectricGeneratorType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricHeaterType(IfcElectricHeaterType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricMotorType(IfcElectricMotorType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricTimeControlType(IfcElectricTimeControlType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricalBaseProperties(IfcElectricalBaseProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricalCircuit(IfcElectricalCircuit *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricalElement(IfcElectricalElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElementAssembly(IfcElementAssembly *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElementQuantity(IfcElementQuantity *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEllipse(IfcEllipse *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEllipseProfileDef(IfcEllipseProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEnergyConversionDevice(IfcEnergyConversionDevice *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEnergyProperties(IfcEnergyProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEnvironmentalImpactValue(IfcEnvironmentalImpactValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEquipmentElement(IfcEquipmentElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEquipmentStandard(IfcEquipmentStandard *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEvaporativeCoolerType(IfcEvaporativeCoolerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEvaporatorType(IfcEvaporatorType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcExtendedMaterialProperties(IfcExtendedMaterialProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcExternallyDefinedHatchStyle(IfcExternallyDefinedHatchStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcExternallyDefinedSurfaceStyle(IfcExternallyDefinedSurfaceStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcExternallyDefinedSymbol(IfcExternallyDefinedSymbol *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcExternallyDefinedTextFont(IfcExternallyDefinedTextFont *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcExtrudedAreaSolid(IfcExtrudedAreaSolid *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFace(IfcFace *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFaceBound(IfcFaceBound *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFaceOuterBound(IfcFaceOuterBound *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFaceSurface(IfcFaceSurface *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFacetedBrep(IfcFacetedBrep *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFacetedBrepWithVoids(IfcFacetedBrepWithVoids *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFailureConnectionCondition(IfcFailureConnectionCondition *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFanType(IfcFanType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFastener(IfcFastener *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFastenerType(IfcFastenerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFillAreaStyle(IfcFillAreaStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFillAreaStyleHatching(IfcFillAreaStyleHatching *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFillAreaStyleTileSymbolWithStyle(IfcFillAreaStyleTileSymbolWithStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFillAreaStyleTiles(IfcFillAreaStyleTiles *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFilterType(IfcFilterType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFireSuppressionTerminalType(IfcFireSuppressionTerminalType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFlowController(IfcFlowController *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFlowFitting(IfcFlowFitting *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFlowInstrumentType(IfcFlowInstrumentType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFlowMeterType(IfcFlowMeterType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFlowMovingDevice(IfcFlowMovingDevice *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFlowSegment(IfcFlowSegment *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFlowStorageDevice(IfcFlowStorageDevice *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFlowTerminal(IfcFlowTerminal *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFlowTreatmentDevice(IfcFlowTreatmentDevice *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFluidFlowProperties(IfcFluidFlowProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFooting(IfcFooting *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFuelProperties(IfcFuelProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFurnishingElement(IfcFurnishingElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFurnishingElementType(IfcFurnishingElementType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFurnitureStandard(IfcFurnitureStandard *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFurnitureType(IfcFurnitureType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGasTerminalType(IfcGasTerminalType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGeneralMaterialProperties(IfcGeneralMaterialProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGeneralProfileProperties(IfcGeneralProfileProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGeometricCurveSet(IfcGeometricCurveSet *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGeometricRepresentationContext(IfcGeometricRepresentationContext *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGeometricRepresentationSubContext(IfcGeometricRepresentationSubContext *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGeometricSet(IfcGeometricSet *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGrid(IfcGrid *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGridAxis(IfcGridAxis *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGridPlacement(IfcGridPlacement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGroup(IfcGroup *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcHalfSpaceSolid(IfcHalfSpaceSolid *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcHeatExchangerType(IfcHeatExchangerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcHumidifierType(IfcHumidifierType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcHygroscopicMaterialProperties(IfcHygroscopicMaterialProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcIShapeProfileDef(IfcIShapeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcImageTexture(IfcImageTexture *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcInventory(IfcInventory *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcIrregularTimeSeries(IfcIrregularTimeSeries *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcIrregularTimeSeriesValue(IfcIrregularTimeSeriesValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcJunctionBoxType(IfcJunctionBoxType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLShapeProfileDef(IfcLShapeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLaborResource(IfcLaborResource *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLampType(IfcLampType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLibraryInformation(IfcLibraryInformation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLibraryReference(IfcLibraryReference *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLightDistributionData(IfcLightDistributionData *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLightFixtureType(IfcLightFixtureType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLightIntensityDistribution(IfcLightIntensityDistribution *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLightSourceAmbient(IfcLightSourceAmbient *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLightSourceDirectional(IfcLightSourceDirectional *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLightSourceGoniometric(IfcLightSourceGoniometric *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLightSourcePositional(IfcLightSourcePositional *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLightSourceSpot(IfcLightSourceSpot *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLine(IfcLine *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLinearDimension(IfcLinearDimension *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLocalPlacement(IfcLocalPlacement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLocalTime(IfcLocalTime *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLoop(IfcLoop *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMappedItem(IfcMappedItem *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMaterial(IfcMaterial *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMaterialClassificationRelationship(IfcMaterialClassificationRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMaterialDefinitionRepresentation(IfcMaterialDefinitionRepresentation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMaterialLayer(IfcMaterialLayer *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMaterialLayerSet(IfcMaterialLayerSet *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMaterialList(IfcMaterialList *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMeasureWithUnit(IfcMeasureWithUnit *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMechanicalConcreteMaterialProperties(IfcMechanicalConcreteMaterialProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMechanicalFastener(IfcMechanicalFastener *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMechanicalFastenerType(IfcMechanicalFastenerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMechanicalMaterialProperties(IfcMechanicalMaterialProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMechanicalSteelMaterialProperties(IfcMechanicalSteelMaterialProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMember(IfcMember *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMemberType(IfcMemberType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMetric(IfcMetric *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMonetaryUnit(IfcMonetaryUnit *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMotorConnectionType(IfcMotorConnectionType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMove(IfcMove *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcObjective(IfcObjective *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOccupant(IfcOccupant *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOffsetCurve2D(IfcOffsetCurve2D *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOffsetCurve3D(IfcOffsetCurve3D *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOpenShell(IfcOpenShell *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOpeningElement(IfcOpeningElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOpticalMaterialProperties(IfcOpticalMaterialProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOrderAction(IfcOrderAction *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOrganization(IfcOrganization *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOrganizationRelationship(IfcOrganizationRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOrientedEdge(IfcOrientedEdge *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOutletType(IfcOutletType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOwnerHistory(IfcOwnerHistory *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPath(IfcPath *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPerformanceHistory(IfcPerformanceHistory *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPermeableCoveringProperties(IfcPermeableCoveringProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPermit(IfcPermit *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPerson(IfcPerson *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPersonAndOrganization(IfcPersonAndOrganization *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPhysicalComplexQuantity(IfcPhysicalComplexQuantity *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPile(IfcPile *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPipeFittingType(IfcPipeFittingType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPipeSegmentType(IfcPipeSegmentType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPixelTexture(IfcPixelTexture *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPlanarBox(IfcPlanarBox *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPlanarExtent(IfcPlanarExtent *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPlane(IfcPlane *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPlate(IfcPlate *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPlateType(IfcPlateType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPointOnCurve(IfcPointOnCurve *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPointOnSurface(IfcPointOnSurface *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPolyLoop(IfcPolyLoop *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPolygonalBoundedHalfSpace(IfcPolygonalBoundedHalfSpace *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPolyline(IfcPolyline *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPostalAddress(IfcPostalAddress *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPreDefinedDimensionSymbol(IfcPreDefinedDimensionSymbol *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPreDefinedPointMarkerSymbol(IfcPreDefinedPointMarkerSymbol *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPreDefinedTerminatorSymbol(IfcPreDefinedTerminatorSymbol *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPresentationLayerAssignment(IfcPresentationLayerAssignment *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPresentationLayerWithStyle(IfcPresentationLayerWithStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPresentationStyleAssignment(IfcPresentationStyleAssignment *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProcedure(IfcProcedure *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProductDefinitionShape(IfcProductDefinitionShape *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProductRepresentation(IfcProductRepresentation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProductsOfCombustionProperties(IfcProductsOfCombustionProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProject(IfcProject *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProjectOrder(IfcProjectOrder *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProjectOrderRecord(IfcProjectOrderRecord *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProjectionCurve(IfcProjectionCurve *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProjectionElement(IfcProjectionElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyBoundedValue(IfcPropertyBoundedValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyConstraintRelationship(IfcPropertyConstraintRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyDependencyRelationship(IfcPropertyDependencyRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyEnumeratedValue(IfcPropertyEnumeratedValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyEnumeration(IfcPropertyEnumeration *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyListValue(IfcPropertyListValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyReferenceValue(IfcPropertyReferenceValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertySet(IfcPropertySet *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertySingleValue(IfcPropertySingleValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyTableValue(IfcPropertyTableValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProtectiveDeviceType(IfcProtectiveDeviceType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProxy(IfcProxy *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPumpType(IfcPumpType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcQuantityArea(IfcQuantityArea *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcQuantityCount(IfcQuantityCount *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcQuantityLength(IfcQuantityLength *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcQuantityTime(IfcQuantityTime *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcQuantityVolume(IfcQuantityVolume *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcQuantityWeight(IfcQuantityWeight *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRadiusDimension(IfcRadiusDimension *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRailing(IfcRailing *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRailingType(IfcRailingType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRamp(IfcRamp *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRampFlight(IfcRampFlight *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRampFlightType(IfcRampFlightType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRationalBezierCurve(IfcRationalBezierCurve *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRectangleHollowProfileDef(IfcRectangleHollowProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRectangleProfileDef(IfcRectangleProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRectangularPyramid(IfcRectangularPyramid *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRectangularTrimmedSurface(IfcRectangularTrimmedSurface *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcReferencesValueDocument(IfcReferencesValueDocument *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRegularTimeSeries(IfcRegularTimeSeries *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcReinforcementBarProperties(IfcReinforcementBarProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcReinforcementDefinitionProperties(IfcReinforcementDefinitionProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcReinforcingBar(IfcReinforcingBar *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcReinforcingMesh(IfcReinforcingMesh *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAggregates(IfcRelAggregates *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsTasks(IfcRelAssignsTasks *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToActor(IfcRelAssignsToActor *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToControl(IfcRelAssignsToControl *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToGroup(IfcRelAssignsToGroup *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToProcess(IfcRelAssignsToProcess *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToProduct(IfcRelAssignsToProduct *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToProjectOrder(IfcRelAssignsToProjectOrder *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToResource(IfcRelAssignsToResource *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociates(IfcRelAssociates *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesAppliedValue(IfcRelAssociatesAppliedValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesApproval(IfcRelAssociatesApproval *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesClassification(IfcRelAssociatesClassification *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesConstraint(IfcRelAssociatesConstraint *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesDocument(IfcRelAssociatesDocument *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesLibrary(IfcRelAssociatesLibrary *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesMaterial(IfcRelAssociatesMaterial *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesProfileProperties(IfcRelAssociatesProfileProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsElements(IfcRelConnectsElements *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsPathElements(IfcRelConnectsPathElements *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsPortToElement(IfcRelConnectsPortToElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsPorts(IfcRelConnectsPorts *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsStructuralActivity(IfcRelConnectsStructuralActivity *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsStructuralElement(IfcRelConnectsStructuralElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsStructuralMember(IfcRelConnectsStructuralMember *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsWithEccentricity(IfcRelConnectsWithEccentricity *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsWithRealizingElements(IfcRelConnectsWithRealizingElements *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelContainedInSpatialStructure(IfcRelContainedInSpatialStructure *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelCoversBldgElements(IfcRelCoversBldgElements *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelCoversSpaces(IfcRelCoversSpaces *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelDefinesByProperties(IfcRelDefinesByProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelDefinesByType(IfcRelDefinesByType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelFillsElement(IfcRelFillsElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelFlowControlElements(IfcRelFlowControlElements *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelInteractionRequirements(IfcRelInteractionRequirements *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelNests(IfcRelNests *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelOccupiesSpaces(IfcRelOccupiesSpaces *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelOverridesProperties(IfcRelOverridesProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelProjectsElement(IfcRelProjectsElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelReferencedInSpatialStructure(IfcRelReferencedInSpatialStructure *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelSchedulesCostItems(IfcRelSchedulesCostItems *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelSequence(IfcRelSequence *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelServicesBuildings(IfcRelServicesBuildings *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelSpaceBoundary(IfcRelSpaceBoundary *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelVoidsElement(IfcRelVoidsElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelaxation(IfcRelaxation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRepresentation(IfcRepresentation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRepresentationContext(IfcRepresentationContext *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRepresentationMap(IfcRepresentationMap *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRevolvedAreaSolid(IfcRevolvedAreaSolid *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRibPlateProfileProperties(IfcRibPlateProfileProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRightCircularCone(IfcRightCircularCone *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRightCircularCylinder(IfcRightCircularCylinder *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRoof(IfcRoof *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRoundedEdgeFeature(IfcRoundedEdgeFeature *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRoundedRectangleProfileDef(IfcRoundedRectangleProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSIUnit(IfcSIUnit *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSanitaryTerminalType(IfcSanitaryTerminalType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcScheduleTimeControl(IfcScheduleTimeControl *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSectionProperties(IfcSectionProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSectionReinforcementProperties(IfcSectionReinforcementProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSectionedSpine(IfcSectionedSpine *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSensorType(IfcSensorType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcServiceLife(IfcServiceLife *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcServiceLifeFactor(IfcServiceLifeFactor *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcShapeAspect(IfcShapeAspect *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcShapeRepresentation(IfcShapeRepresentation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcShellBasedSurfaceModel(IfcShellBasedSurfaceModel *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSite(IfcSite *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSlab(IfcSlab *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSlabType(IfcSlabType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSlippageConnectionCondition(IfcSlippageConnectionCondition *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSoundProperties(IfcSoundProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSoundValue(IfcSoundValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSpace(IfcSpace *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSpaceHeaterType(IfcSpaceHeaterType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSpaceProgram(IfcSpaceProgram *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSpaceThermalLoadProperties(IfcSpaceThermalLoadProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSpaceType(IfcSpaceType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSphere(IfcSphere *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStackTerminalType(IfcStackTerminalType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStair(IfcStair *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStairFlight(IfcStairFlight *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStairFlightType(IfcStairFlightType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralAnalysisModel(IfcStructuralAnalysisModel *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralCurveConnection(IfcStructuralCurveConnection *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralCurveMember(IfcStructuralCurveMember *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralCurveMemberVarying(IfcStructuralCurveMemberVarying *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLinearAction(IfcStructuralLinearAction *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLinearActionVarying(IfcStructuralLinearActionVarying *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadGroup(IfcStructuralLoadGroup *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadLinearForce(IfcStructuralLoadLinearForce *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadPlanarForce(IfcStructuralLoadPlanarForce *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadSingleDisplacement(IfcStructuralLoadSingleDisplacement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadSingleDisplacementDistortion(IfcStructuralLoadSingleDisplacementDistortion *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadSingleForce(IfcStructuralLoadSingleForce *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadSingleForceWarping(IfcStructuralLoadSingleForceWarping *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadTemperature(IfcStructuralLoadTemperature *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralPlanarAction(IfcStructuralPlanarAction *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralPlanarActionVarying(IfcStructuralPlanarActionVarying *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralPointAction(IfcStructuralPointAction *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralPointConnection(IfcStructuralPointConnection *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralPointReaction(IfcStructuralPointReaction *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralProfileProperties(IfcStructuralProfileProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralResultGroup(IfcStructuralResultGroup *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralSteelProfileProperties(IfcStructuralSteelProfileProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralSurfaceConnection(IfcStructuralSurfaceConnection *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralSurfaceMember(IfcStructuralSurfaceMember *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralSurfaceMemberVarying(IfcStructuralSurfaceMemberVarying *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuredDimensionCallout(IfcStructuredDimensionCallout *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStyledItem(IfcStyledItem *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStyledRepresentation(IfcStyledRepresentation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSubContractResource(IfcSubContractResource *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSubedge(IfcSubedge *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceCurveSweptAreaSolid(IfcSurfaceCurveSweptAreaSolid *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceOfLinearExtrusion(IfcSurfaceOfLinearExtrusion *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceOfRevolution(IfcSurfaceOfRevolution *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceStyle(IfcSurfaceStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceStyleLighting(IfcSurfaceStyleLighting *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceStyleRefraction(IfcSurfaceStyleRefraction *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceStyleRendering(IfcSurfaceStyleRendering *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceStyleShading(IfcSurfaceStyleShading *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceStyleWithTextures(IfcSurfaceStyleWithTextures *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSweptDiskSolid(IfcSweptDiskSolid *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSwitchingDeviceType(IfcSwitchingDeviceType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSymbolStyle(IfcSymbolStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSystem(IfcSystem *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSystemFurnitureElementType(IfcSystemFurnitureElementType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTShapeProfileDef(IfcTShapeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTable(IfcTable *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTableRow(IfcTableRow *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTankType(IfcTankType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTask(IfcTask *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTelecomAddress(IfcTelecomAddress *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTendon(IfcTendon *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTendonAnchor(IfcTendonAnchor *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTerminatorSymbol(IfcTerminatorSymbol *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextLiteral(IfcTextLiteral *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextLiteralWithExtent(IfcTextLiteralWithExtent *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextStyle(IfcTextStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextStyleFontModel(IfcTextStyleFontModel *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextStyleForDefinedFont(IfcTextStyleForDefinedFont *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextStyleTextModel(IfcTextStyleTextModel *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextureCoordinateGenerator(IfcTextureCoordinateGenerator *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextureMap(IfcTextureMap *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextureVertex(IfcTextureVertex *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcThermalMaterialProperties(IfcThermalMaterialProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTimeSeriesReferenceRelationship(IfcTimeSeriesReferenceRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTimeSeriesSchedule(IfcTimeSeriesSchedule *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTimeSeriesValue(IfcTimeSeriesValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTopologyRepresentation(IfcTopologyRepresentation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTransformerType(IfcTransformerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTransportElement(IfcTransportElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTransportElementType(IfcTransportElementType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTrapeziumProfileDef(IfcTrapeziumProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTrimmedCurve(IfcTrimmedCurve *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTubeBundleType(IfcTubeBundleType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTwoDirectionRepeatFactor(IfcTwoDirectionRepeatFactor *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTypeObject(IfcTypeObject *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTypeProduct(IfcTypeProduct *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcUShapeProfileDef(IfcUShapeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcUnitAssignment(IfcUnitAssignment *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcUnitaryEquipmentType(IfcUnitaryEquipmentType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcValveType(IfcValveType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcVector(IfcVector *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcVertex(IfcVertex *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcVertexBasedTextureMap(IfcVertexBasedTextureMap *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcVertexLoop(IfcVertexLoop *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcVertexPoint(IfcVertexPoint *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcVibrationIsolatorType(IfcVibrationIsolatorType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcVirtualElement(IfcVirtualElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcVirtualGridIntersection(IfcVirtualGridIntersection *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWall(IfcWall *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWallStandardCase(IfcWallStandardCase *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWallType(IfcWallType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWasteTerminalType(IfcWasteTerminalType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWaterProperties(IfcWaterProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWindow(IfcWindow *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWindowLiningProperties(IfcWindowLiningProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWindowPanelProperties(IfcWindowPanelProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWindowStyle(IfcWindowStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWorkPlan(IfcWorkPlan *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWorkSchedule(IfcWorkSchedule *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcZShapeProfileDef(IfcZShapeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcZone(IfcZone *obj);

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
        virtual ~ReparentCopyOp();
        /**
         * @param obj
         */
        virtual bool visitIfc2DCompositeCurve(Ifc2DCompositeCurve *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcActionRequest(IfcActionRequest *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcActor(IfcActor *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcActorRole(IfcActorRole *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcActuatorType(IfcActuatorType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAirTerminalBoxType(IfcAirTerminalBoxType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAirTerminalType(IfcAirTerminalType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAirToAirHeatRecoveryType(IfcAirToAirHeatRecoveryType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAlarmType(IfcAlarmType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAngularDimension(IfcAngularDimension *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotation(IfcAnnotation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationFillArea(IfcAnnotationFillArea *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationFillAreaOccurrence(IfcAnnotationFillAreaOccurrence *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationSurface(IfcAnnotationSurface *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationSurfaceOccurrence(IfcAnnotationSurfaceOccurrence *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcApplication(IfcApplication *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAppliedValueRelationship(IfcAppliedValueRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcApproval(IfcApproval *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcApprovalActorRelationship(IfcApprovalActorRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcApprovalPropertyRelationship(IfcApprovalPropertyRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcApprovalRelationship(IfcApprovalRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcArbitraryClosedProfileDef(IfcArbitraryClosedProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcArbitraryOpenProfileDef(IfcArbitraryOpenProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcArbitraryProfileDefWithVoids(IfcArbitraryProfileDefWithVoids *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAsset(IfcAsset *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAsymmetricIShapeProfileDef(IfcAsymmetricIShapeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAxis1Placement(IfcAxis1Placement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAxis2Placement2D(IfcAxis2Placement2D *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcAxis2Placement3D(IfcAxis2Placement3D *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBeam(IfcBeam *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBeamType(IfcBeamType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBezierCurve(IfcBezierCurve *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBlobTexture(IfcBlobTexture *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBlock(IfcBlock *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBoilerType(IfcBoilerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBooleanClippingResult(IfcBooleanClippingResult *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBooleanResult(IfcBooleanResult *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBoundaryEdgeCondition(IfcBoundaryEdgeCondition *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBoundaryFaceCondition(IfcBoundaryFaceCondition *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBoundaryNodeCondition(IfcBoundaryNodeCondition *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBoundaryNodeConditionWarping(IfcBoundaryNodeConditionWarping *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBoundedSurface(IfcBoundedSurface *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBoundingBox(IfcBoundingBox *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBoxedHalfSpace(IfcBoxedHalfSpace *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBuilding(IfcBuilding *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBuildingElementPart(IfcBuildingElementPart *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBuildingElementProxy(IfcBuildingElementProxy *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBuildingElementProxyType(IfcBuildingElementProxyType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcBuildingStorey(IfcBuildingStorey *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCShapeProfileDef(IfcCShapeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCableCarrierFittingType(IfcCableCarrierFittingType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCableCarrierSegmentType(IfcCableCarrierSegmentType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCableSegmentType(IfcCableSegmentType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCalendarDate(IfcCalendarDate *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCartesianPoint(IfcCartesianPoint *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCartesianTransformationOperator2D(IfcCartesianTransformationOperator2D *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCartesianTransformationOperator2DnonUniform(IfcCartesianTransformationOperator2DnonUniform *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCartesianTransformationOperator3D(IfcCartesianTransformationOperator3D *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCartesianTransformationOperator3DnonUniform(IfcCartesianTransformationOperator3DnonUniform *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCenterLineProfileDef(IfcCenterLineProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcChamferEdgeFeature(IfcChamferEdgeFeature *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcChillerType(IfcChillerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCircle(IfcCircle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCircleHollowProfileDef(IfcCircleHollowProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCircleProfileDef(IfcCircleProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcClassification(IfcClassification *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcClassificationItem(IfcClassificationItem *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcClassificationItemRelationship(IfcClassificationItemRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcClassificationNotation(IfcClassificationNotation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcClassificationNotationFacet(IfcClassificationNotationFacet *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcClassificationReference(IfcClassificationReference *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcClosedShell(IfcClosedShell *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCoilType(IfcCoilType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcColourRgb(IfcColourRgb *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcColumn(IfcColumn *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcColumnType(IfcColumnType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcComplexProperty(IfcComplexProperty *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCompositeCurve(IfcCompositeCurve *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCompositeCurveSegment(IfcCompositeCurveSegment *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCompositeProfileDef(IfcCompositeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCompressorType(IfcCompressorType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCondenserType(IfcCondenserType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCondition(IfcCondition *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConditionCriterion(IfcConditionCriterion *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConnectedFaceSet(IfcConnectedFaceSet *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConnectionCurveGeometry(IfcConnectionCurveGeometry *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConnectionPointEccentricity(IfcConnectionPointEccentricity *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConnectionPointGeometry(IfcConnectionPointGeometry *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConnectionPortGeometry(IfcConnectionPortGeometry *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConnectionSurfaceGeometry(IfcConnectionSurfaceGeometry *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConstraintAggregationRelationship(IfcConstraintAggregationRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConstraintClassificationRelationship(IfcConstraintClassificationRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConstraintRelationship(IfcConstraintRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConstructionEquipmentResource(IfcConstructionEquipmentResource *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConstructionMaterialResource(IfcConstructionMaterialResource *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConstructionProductResource(IfcConstructionProductResource *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcContextDependentUnit(IfcContextDependentUnit *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcControllerType(IfcControllerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcConversionBasedUnit(IfcConversionBasedUnit *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCooledBeamType(IfcCooledBeamType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCoolingTowerType(IfcCoolingTowerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCoordinatedUniversalTimeOffset(IfcCoordinatedUniversalTimeOffset *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCostItem(IfcCostItem *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCostSchedule(IfcCostSchedule *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCostValue(IfcCostValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCovering(IfcCovering *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCoveringType(IfcCoveringType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCraneRailAShapeProfileDef(IfcCraneRailAShapeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCraneRailFShapeProfileDef(IfcCraneRailFShapeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCrewResource(IfcCrewResource *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCsgSolid(IfcCsgSolid *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCurrencyRelationship(IfcCurrencyRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCurtainWall(IfcCurtainWall *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCurtainWallType(IfcCurtainWallType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCurveBoundedPlane(IfcCurveBoundedPlane *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCurveStyle(IfcCurveStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCurveStyleFont(IfcCurveStyleFont *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCurveStyleFontAndScaling(IfcCurveStyleFontAndScaling *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcCurveStyleFontPattern(IfcCurveStyleFontPattern *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDamperType(IfcDamperType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDateAndTime(IfcDateAndTime *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDefinedSymbol(IfcDefinedSymbol *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDerivedProfileDef(IfcDerivedProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDerivedUnit(IfcDerivedUnit *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDerivedUnitElement(IfcDerivedUnitElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDiameterDimension(IfcDiameterDimension *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDimensionCalloutRelationship(IfcDimensionCalloutRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDimensionCurve(IfcDimensionCurve *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDimensionCurveDirectedCallout(IfcDimensionCurveDirectedCallout *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDimensionCurveTerminator(IfcDimensionCurveTerminator *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDimensionPair(IfcDimensionPair *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDimensionalExponents(IfcDimensionalExponents *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDirection(IfcDirection *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDiscreteAccessory(IfcDiscreteAccessory *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDiscreteAccessoryType(IfcDiscreteAccessoryType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionChamberElement(IfcDistributionChamberElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionChamberElementType(IfcDistributionChamberElementType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionControlElement(IfcDistributionControlElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionElement(IfcDistributionElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionElementType(IfcDistributionElementType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionFlowElement(IfcDistributionFlowElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDistributionPort(IfcDistributionPort *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDocumentElectronicFormat(IfcDocumentElectronicFormat *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDocumentInformation(IfcDocumentInformation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDocumentInformationRelationship(IfcDocumentInformationRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDocumentReference(IfcDocumentReference *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDoor(IfcDoor *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDoorLiningProperties(IfcDoorLiningProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDoorPanelProperties(IfcDoorPanelProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDoorStyle(IfcDoorStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDraughtingCallout(IfcDraughtingCallout *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDraughtingCalloutRelationship(IfcDraughtingCalloutRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDraughtingPreDefinedColour(IfcDraughtingPreDefinedColour *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDraughtingPreDefinedCurveFont(IfcDraughtingPreDefinedCurveFont *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDraughtingPreDefinedTextFont(IfcDraughtingPreDefinedTextFont *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDuctFittingType(IfcDuctFittingType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDuctSegmentType(IfcDuctSegmentType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcDuctSilencerType(IfcDuctSilencerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEdge(IfcEdge *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEdgeCurve(IfcEdgeCurve *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEdgeLoop(IfcEdgeLoop *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricApplianceType(IfcElectricApplianceType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricDistributionPoint(IfcElectricDistributionPoint *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricFlowStorageDeviceType(IfcElectricFlowStorageDeviceType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricGeneratorType(IfcElectricGeneratorType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricHeaterType(IfcElectricHeaterType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricMotorType(IfcElectricMotorType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricTimeControlType(IfcElectricTimeControlType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricalBaseProperties(IfcElectricalBaseProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricalCircuit(IfcElectricalCircuit *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElectricalElement(IfcElectricalElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElementAssembly(IfcElementAssembly *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcElementQuantity(IfcElementQuantity *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEllipse(IfcEllipse *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEllipseProfileDef(IfcEllipseProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEnergyConversionDevice(IfcEnergyConversionDevice *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEnergyProperties(IfcEnergyProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEnvironmentalImpactValue(IfcEnvironmentalImpactValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEquipmentElement(IfcEquipmentElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEquipmentStandard(IfcEquipmentStandard *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEvaporativeCoolerType(IfcEvaporativeCoolerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcEvaporatorType(IfcEvaporatorType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcExtendedMaterialProperties(IfcExtendedMaterialProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcExternallyDefinedHatchStyle(IfcExternallyDefinedHatchStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcExternallyDefinedSurfaceStyle(IfcExternallyDefinedSurfaceStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcExternallyDefinedSymbol(IfcExternallyDefinedSymbol *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcExternallyDefinedTextFont(IfcExternallyDefinedTextFont *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcExtrudedAreaSolid(IfcExtrudedAreaSolid *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFace(IfcFace *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFaceBound(IfcFaceBound *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFaceOuterBound(IfcFaceOuterBound *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFaceSurface(IfcFaceSurface *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFacetedBrep(IfcFacetedBrep *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFacetedBrepWithVoids(IfcFacetedBrepWithVoids *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFailureConnectionCondition(IfcFailureConnectionCondition *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFanType(IfcFanType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFastener(IfcFastener *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFastenerType(IfcFastenerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFillAreaStyle(IfcFillAreaStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFillAreaStyleHatching(IfcFillAreaStyleHatching *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFillAreaStyleTileSymbolWithStyle(IfcFillAreaStyleTileSymbolWithStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFillAreaStyleTiles(IfcFillAreaStyleTiles *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFilterType(IfcFilterType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFireSuppressionTerminalType(IfcFireSuppressionTerminalType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFlowController(IfcFlowController *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFlowFitting(IfcFlowFitting *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFlowInstrumentType(IfcFlowInstrumentType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFlowMeterType(IfcFlowMeterType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFlowMovingDevice(IfcFlowMovingDevice *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFlowSegment(IfcFlowSegment *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFlowStorageDevice(IfcFlowStorageDevice *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFlowTerminal(IfcFlowTerminal *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFlowTreatmentDevice(IfcFlowTreatmentDevice *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFluidFlowProperties(IfcFluidFlowProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFooting(IfcFooting *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFuelProperties(IfcFuelProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFurnishingElement(IfcFurnishingElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFurnishingElementType(IfcFurnishingElementType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFurnitureStandard(IfcFurnitureStandard *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcFurnitureType(IfcFurnitureType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGasTerminalType(IfcGasTerminalType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGeneralMaterialProperties(IfcGeneralMaterialProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGeneralProfileProperties(IfcGeneralProfileProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGeometricCurveSet(IfcGeometricCurveSet *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGeometricRepresentationContext(IfcGeometricRepresentationContext *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGeometricRepresentationSubContext(IfcGeometricRepresentationSubContext *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGeometricSet(IfcGeometricSet *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGrid(IfcGrid *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGridAxis(IfcGridAxis *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGridPlacement(IfcGridPlacement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcGroup(IfcGroup *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcHalfSpaceSolid(IfcHalfSpaceSolid *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcHeatExchangerType(IfcHeatExchangerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcHumidifierType(IfcHumidifierType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcHygroscopicMaterialProperties(IfcHygroscopicMaterialProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcIShapeProfileDef(IfcIShapeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcImageTexture(IfcImageTexture *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcInventory(IfcInventory *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcIrregularTimeSeries(IfcIrregularTimeSeries *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcIrregularTimeSeriesValue(IfcIrregularTimeSeriesValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcJunctionBoxType(IfcJunctionBoxType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLShapeProfileDef(IfcLShapeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLaborResource(IfcLaborResource *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLampType(IfcLampType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLibraryInformation(IfcLibraryInformation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLibraryReference(IfcLibraryReference *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLightDistributionData(IfcLightDistributionData *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLightFixtureType(IfcLightFixtureType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLightIntensityDistribution(IfcLightIntensityDistribution *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLightSourceAmbient(IfcLightSourceAmbient *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLightSourceDirectional(IfcLightSourceDirectional *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLightSourceGoniometric(IfcLightSourceGoniometric *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLightSourcePositional(IfcLightSourcePositional *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLightSourceSpot(IfcLightSourceSpot *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLine(IfcLine *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLinearDimension(IfcLinearDimension *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLocalPlacement(IfcLocalPlacement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLocalTime(IfcLocalTime *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcLoop(IfcLoop *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMappedItem(IfcMappedItem *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMaterial(IfcMaterial *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMaterialClassificationRelationship(IfcMaterialClassificationRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMaterialDefinitionRepresentation(IfcMaterialDefinitionRepresentation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMaterialLayer(IfcMaterialLayer *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMaterialLayerSet(IfcMaterialLayerSet *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMaterialList(IfcMaterialList *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMeasureWithUnit(IfcMeasureWithUnit *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMechanicalConcreteMaterialProperties(IfcMechanicalConcreteMaterialProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMechanicalFastener(IfcMechanicalFastener *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMechanicalFastenerType(IfcMechanicalFastenerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMechanicalMaterialProperties(IfcMechanicalMaterialProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMechanicalSteelMaterialProperties(IfcMechanicalSteelMaterialProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMember(IfcMember *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMemberType(IfcMemberType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMetric(IfcMetric *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMonetaryUnit(IfcMonetaryUnit *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMotorConnectionType(IfcMotorConnectionType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcMove(IfcMove *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcObjective(IfcObjective *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOccupant(IfcOccupant *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOffsetCurve2D(IfcOffsetCurve2D *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOffsetCurve3D(IfcOffsetCurve3D *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOpenShell(IfcOpenShell *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOpeningElement(IfcOpeningElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOpticalMaterialProperties(IfcOpticalMaterialProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOrderAction(IfcOrderAction *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOrganization(IfcOrganization *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOrganizationRelationship(IfcOrganizationRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOrientedEdge(IfcOrientedEdge *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOutletType(IfcOutletType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcOwnerHistory(IfcOwnerHistory *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPath(IfcPath *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPerformanceHistory(IfcPerformanceHistory *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPermeableCoveringProperties(IfcPermeableCoveringProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPermit(IfcPermit *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPerson(IfcPerson *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPersonAndOrganization(IfcPersonAndOrganization *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPhysicalComplexQuantity(IfcPhysicalComplexQuantity *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPile(IfcPile *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPipeFittingType(IfcPipeFittingType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPipeSegmentType(IfcPipeSegmentType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPixelTexture(IfcPixelTexture *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPlanarBox(IfcPlanarBox *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPlanarExtent(IfcPlanarExtent *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPlane(IfcPlane *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPlate(IfcPlate *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPlateType(IfcPlateType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPointOnCurve(IfcPointOnCurve *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPointOnSurface(IfcPointOnSurface *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPolyLoop(IfcPolyLoop *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPolygonalBoundedHalfSpace(IfcPolygonalBoundedHalfSpace *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPolyline(IfcPolyline *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPostalAddress(IfcPostalAddress *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPreDefinedDimensionSymbol(IfcPreDefinedDimensionSymbol *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPreDefinedPointMarkerSymbol(IfcPreDefinedPointMarkerSymbol *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPreDefinedTerminatorSymbol(IfcPreDefinedTerminatorSymbol *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPresentationLayerAssignment(IfcPresentationLayerAssignment *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPresentationLayerWithStyle(IfcPresentationLayerWithStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPresentationStyleAssignment(IfcPresentationStyleAssignment *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProcedure(IfcProcedure *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProductDefinitionShape(IfcProductDefinitionShape *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProductRepresentation(IfcProductRepresentation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProductsOfCombustionProperties(IfcProductsOfCombustionProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProject(IfcProject *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProjectOrder(IfcProjectOrder *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProjectOrderRecord(IfcProjectOrderRecord *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProjectionCurve(IfcProjectionCurve *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProjectionElement(IfcProjectionElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyBoundedValue(IfcPropertyBoundedValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyConstraintRelationship(IfcPropertyConstraintRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyDependencyRelationship(IfcPropertyDependencyRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyEnumeratedValue(IfcPropertyEnumeratedValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyEnumeration(IfcPropertyEnumeration *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyListValue(IfcPropertyListValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyReferenceValue(IfcPropertyReferenceValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertySet(IfcPropertySet *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertySingleValue(IfcPropertySingleValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPropertyTableValue(IfcPropertyTableValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProtectiveDeviceType(IfcProtectiveDeviceType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcProxy(IfcProxy *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcPumpType(IfcPumpType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcQuantityArea(IfcQuantityArea *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcQuantityCount(IfcQuantityCount *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcQuantityLength(IfcQuantityLength *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcQuantityTime(IfcQuantityTime *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcQuantityVolume(IfcQuantityVolume *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcQuantityWeight(IfcQuantityWeight *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRadiusDimension(IfcRadiusDimension *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRailing(IfcRailing *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRailingType(IfcRailingType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRamp(IfcRamp *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRampFlight(IfcRampFlight *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRampFlightType(IfcRampFlightType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRationalBezierCurve(IfcRationalBezierCurve *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRectangleHollowProfileDef(IfcRectangleHollowProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRectangleProfileDef(IfcRectangleProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRectangularPyramid(IfcRectangularPyramid *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRectangularTrimmedSurface(IfcRectangularTrimmedSurface *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcReferencesValueDocument(IfcReferencesValueDocument *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRegularTimeSeries(IfcRegularTimeSeries *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcReinforcementBarProperties(IfcReinforcementBarProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcReinforcementDefinitionProperties(IfcReinforcementDefinitionProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcReinforcingBar(IfcReinforcingBar *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcReinforcingMesh(IfcReinforcingMesh *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAggregates(IfcRelAggregates *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsTasks(IfcRelAssignsTasks *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToActor(IfcRelAssignsToActor *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToControl(IfcRelAssignsToControl *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToGroup(IfcRelAssignsToGroup *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToProcess(IfcRelAssignsToProcess *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToProduct(IfcRelAssignsToProduct *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToProjectOrder(IfcRelAssignsToProjectOrder *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssignsToResource(IfcRelAssignsToResource *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociates(IfcRelAssociates *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesAppliedValue(IfcRelAssociatesAppliedValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesApproval(IfcRelAssociatesApproval *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesClassification(IfcRelAssociatesClassification *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesConstraint(IfcRelAssociatesConstraint *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesDocument(IfcRelAssociatesDocument *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesLibrary(IfcRelAssociatesLibrary *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesMaterial(IfcRelAssociatesMaterial *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelAssociatesProfileProperties(IfcRelAssociatesProfileProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsElements(IfcRelConnectsElements *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsPathElements(IfcRelConnectsPathElements *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsPortToElement(IfcRelConnectsPortToElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsPorts(IfcRelConnectsPorts *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsStructuralActivity(IfcRelConnectsStructuralActivity *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsStructuralElement(IfcRelConnectsStructuralElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsStructuralMember(IfcRelConnectsStructuralMember *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsWithEccentricity(IfcRelConnectsWithEccentricity *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelConnectsWithRealizingElements(IfcRelConnectsWithRealizingElements *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelContainedInSpatialStructure(IfcRelContainedInSpatialStructure *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelCoversBldgElements(IfcRelCoversBldgElements *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelCoversSpaces(IfcRelCoversSpaces *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelDefinesByProperties(IfcRelDefinesByProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelDefinesByType(IfcRelDefinesByType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelFillsElement(IfcRelFillsElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelFlowControlElements(IfcRelFlowControlElements *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelInteractionRequirements(IfcRelInteractionRequirements *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelNests(IfcRelNests *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelOccupiesSpaces(IfcRelOccupiesSpaces *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelOverridesProperties(IfcRelOverridesProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelProjectsElement(IfcRelProjectsElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelReferencedInSpatialStructure(IfcRelReferencedInSpatialStructure *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelSchedulesCostItems(IfcRelSchedulesCostItems *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelSequence(IfcRelSequence *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelServicesBuildings(IfcRelServicesBuildings *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelSpaceBoundary(IfcRelSpaceBoundary *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelVoidsElement(IfcRelVoidsElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRelaxation(IfcRelaxation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRepresentation(IfcRepresentation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRepresentationContext(IfcRepresentationContext *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRepresentationMap(IfcRepresentationMap *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRevolvedAreaSolid(IfcRevolvedAreaSolid *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRibPlateProfileProperties(IfcRibPlateProfileProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRightCircularCone(IfcRightCircularCone *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRightCircularCylinder(IfcRightCircularCylinder *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRoof(IfcRoof *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRoundedEdgeFeature(IfcRoundedEdgeFeature *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcRoundedRectangleProfileDef(IfcRoundedRectangleProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSIUnit(IfcSIUnit *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSanitaryTerminalType(IfcSanitaryTerminalType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcScheduleTimeControl(IfcScheduleTimeControl *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSectionProperties(IfcSectionProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSectionReinforcementProperties(IfcSectionReinforcementProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSectionedSpine(IfcSectionedSpine *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSensorType(IfcSensorType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcServiceLife(IfcServiceLife *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcServiceLifeFactor(IfcServiceLifeFactor *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcShapeAspect(IfcShapeAspect *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcShapeRepresentation(IfcShapeRepresentation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcShellBasedSurfaceModel(IfcShellBasedSurfaceModel *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSite(IfcSite *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSlab(IfcSlab *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSlabType(IfcSlabType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSlippageConnectionCondition(IfcSlippageConnectionCondition *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSoundProperties(IfcSoundProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSoundValue(IfcSoundValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSpace(IfcSpace *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSpaceHeaterType(IfcSpaceHeaterType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSpaceProgram(IfcSpaceProgram *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSpaceThermalLoadProperties(IfcSpaceThermalLoadProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSpaceType(IfcSpaceType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSphere(IfcSphere *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStackTerminalType(IfcStackTerminalType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStair(IfcStair *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStairFlight(IfcStairFlight *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStairFlightType(IfcStairFlightType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralAnalysisModel(IfcStructuralAnalysisModel *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralCurveConnection(IfcStructuralCurveConnection *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralCurveMember(IfcStructuralCurveMember *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralCurveMemberVarying(IfcStructuralCurveMemberVarying *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLinearAction(IfcStructuralLinearAction *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLinearActionVarying(IfcStructuralLinearActionVarying *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadGroup(IfcStructuralLoadGroup *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadLinearForce(IfcStructuralLoadLinearForce *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadPlanarForce(IfcStructuralLoadPlanarForce *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadSingleDisplacement(IfcStructuralLoadSingleDisplacement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadSingleDisplacementDistortion(IfcStructuralLoadSingleDisplacementDistortion *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadSingleForce(IfcStructuralLoadSingleForce *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadSingleForceWarping(IfcStructuralLoadSingleForceWarping *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralLoadTemperature(IfcStructuralLoadTemperature *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralPlanarAction(IfcStructuralPlanarAction *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralPlanarActionVarying(IfcStructuralPlanarActionVarying *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralPointAction(IfcStructuralPointAction *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralPointConnection(IfcStructuralPointConnection *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralPointReaction(IfcStructuralPointReaction *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralProfileProperties(IfcStructuralProfileProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralResultGroup(IfcStructuralResultGroup *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralSteelProfileProperties(IfcStructuralSteelProfileProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralSurfaceConnection(IfcStructuralSurfaceConnection *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralSurfaceMember(IfcStructuralSurfaceMember *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuralSurfaceMemberVarying(IfcStructuralSurfaceMemberVarying *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStructuredDimensionCallout(IfcStructuredDimensionCallout *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStyledItem(IfcStyledItem *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcStyledRepresentation(IfcStyledRepresentation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSubContractResource(IfcSubContractResource *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSubedge(IfcSubedge *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceCurveSweptAreaSolid(IfcSurfaceCurveSweptAreaSolid *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceOfLinearExtrusion(IfcSurfaceOfLinearExtrusion *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceOfRevolution(IfcSurfaceOfRevolution *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceStyle(IfcSurfaceStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceStyleLighting(IfcSurfaceStyleLighting *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceStyleRefraction(IfcSurfaceStyleRefraction *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceStyleRendering(IfcSurfaceStyleRendering *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceStyleShading(IfcSurfaceStyleShading *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSurfaceStyleWithTextures(IfcSurfaceStyleWithTextures *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSweptDiskSolid(IfcSweptDiskSolid *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSwitchingDeviceType(IfcSwitchingDeviceType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSymbolStyle(IfcSymbolStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSystem(IfcSystem *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcSystemFurnitureElementType(IfcSystemFurnitureElementType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTShapeProfileDef(IfcTShapeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTable(IfcTable *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTableRow(IfcTableRow *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTankType(IfcTankType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTask(IfcTask *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTelecomAddress(IfcTelecomAddress *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTendon(IfcTendon *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTendonAnchor(IfcTendonAnchor *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTerminatorSymbol(IfcTerminatorSymbol *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextLiteral(IfcTextLiteral *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextLiteralWithExtent(IfcTextLiteralWithExtent *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextStyle(IfcTextStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextStyleFontModel(IfcTextStyleFontModel *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextStyleForDefinedFont(IfcTextStyleForDefinedFont *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextStyleTextModel(IfcTextStyleTextModel *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextureCoordinateGenerator(IfcTextureCoordinateGenerator *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextureMap(IfcTextureMap *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTextureVertex(IfcTextureVertex *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcThermalMaterialProperties(IfcThermalMaterialProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTimeSeriesReferenceRelationship(IfcTimeSeriesReferenceRelationship *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTimeSeriesSchedule(IfcTimeSeriesSchedule *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTimeSeriesValue(IfcTimeSeriesValue *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTopologyRepresentation(IfcTopologyRepresentation *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTransformerType(IfcTransformerType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTransportElement(IfcTransportElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTransportElementType(IfcTransportElementType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTrapeziumProfileDef(IfcTrapeziumProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTrimmedCurve(IfcTrimmedCurve *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTubeBundleType(IfcTubeBundleType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTwoDirectionRepeatFactor(IfcTwoDirectionRepeatFactor *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTypeObject(IfcTypeObject *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcTypeProduct(IfcTypeProduct *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcUShapeProfileDef(IfcUShapeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcUnitAssignment(IfcUnitAssignment *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcUnitaryEquipmentType(IfcUnitaryEquipmentType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcValveType(IfcValveType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcVector(IfcVector *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcVertex(IfcVertex *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcVertexBasedTextureMap(IfcVertexBasedTextureMap *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcVertexLoop(IfcVertexLoop *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcVertexPoint(IfcVertexPoint *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcVibrationIsolatorType(IfcVibrationIsolatorType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcVirtualElement(IfcVirtualElement *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcVirtualGridIntersection(IfcVirtualGridIntersection *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWall(IfcWall *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWallStandardCase(IfcWallStandardCase *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWallType(IfcWallType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWasteTerminalType(IfcWasteTerminalType *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWaterProperties(IfcWaterProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWindow(IfcWindow *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWindowLiningProperties(IfcWindowLiningProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWindowPanelProperties(IfcWindowPanelProperties *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWindowStyle(IfcWindowStyle *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWorkPlan(IfcWorkPlan *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcWorkSchedule(IfcWorkSchedule *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcZShapeProfileDef(IfcZShapeProfileDef *obj);
        /**
         * @param obj
         */
        virtual bool visitIfcZone(IfcZone *obj);

    protected:
        /**
         * A pointer to the ExpressDataSet to reparetn to.
         * 
         */
        ExpressDataSet *_dataset;
        /**
         */
        virtual ExpressDataSet *getExpressDataSet() const;

    };

}

#endif // IFC2X3_COPYOP_H
