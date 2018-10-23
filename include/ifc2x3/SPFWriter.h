#pragma once

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


#include <ifc2x3/Export.h>

#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/InheritVisitor.h>

#include <Step/BaseSPFWriter.h>

#include <string>

namespace ifc2x3
{
    class ExpressDataSet;

    class IFC2X3_EXPORT SPFWriter : public Step::BaseSPFWriter, public InheritVisitor
    {
    public:
        /**
         * Default Constructor, needs a valid ExpressDataSet.
         *
         * @param expressDataSet The instance content to be written
         */
        SPFWriter(ExpressDataSet *expressDataSet);
        virtual ~SPFWriter();

        /**
         * Call this method to write the content of the ExpressDataSet instance to a stream.
         *
         * @param filestream Stream to write to.
         */
        virtual bool write(std::ostream& filestream);

        /**
         * write the Ifc2DCompositeCurve datatype to m_out.
         *
         * @param value the Ifc2DCompositeCurve datatype to write
         */
        virtual bool visitIfc2DCompositeCurve(Ifc2DCompositeCurve *value);
        /**
         * write the IfcActionRequest datatype to m_out.
         *
         * @param value the IfcActionRequest datatype to write
         */
        virtual bool visitIfcActionRequest(IfcActionRequest *value);
        /**
         * write the IfcActor datatype to m_out.
         *
         * @param value the IfcActor datatype to write
         */
        virtual bool visitIfcActor(IfcActor *value);
        /**
         * write the IfcActorRole datatype to m_out.
         *
         * @param value the IfcActorRole datatype to write
         */
        virtual bool visitIfcActorRole(IfcActorRole *value);
        /**
         * write the IfcActuatorType datatype to m_out.
         *
         * @param value the IfcActuatorType datatype to write
         */
        virtual bool visitIfcActuatorType(IfcActuatorType *value);
        /**
         * write the IfcAddress datatype to m_out.
         *
         * @param value the IfcAddress datatype to write
         */
        virtual bool visitIfcAddress(IfcAddress *value);
        /**
         * write the IfcAirTerminalBoxType datatype to m_out.
         *
         * @param value the IfcAirTerminalBoxType datatype to write
         */
        virtual bool visitIfcAirTerminalBoxType(IfcAirTerminalBoxType *value);
        /**
         * write the IfcAirTerminalType datatype to m_out.
         *
         * @param value the IfcAirTerminalType datatype to write
         */
        virtual bool visitIfcAirTerminalType(IfcAirTerminalType *value);
        /**
         * write the IfcAirToAirHeatRecoveryType datatype to m_out.
         *
         * @param value the IfcAirToAirHeatRecoveryType datatype to write
         */
        virtual bool visitIfcAirToAirHeatRecoveryType(IfcAirToAirHeatRecoveryType *value);
        /**
         * write the IfcAlarmType datatype to m_out.
         *
         * @param value the IfcAlarmType datatype to write
         */
        virtual bool visitIfcAlarmType(IfcAlarmType *value);
        /**
         * write the IfcAngularDimension datatype to m_out.
         *
         * @param value the IfcAngularDimension datatype to write
         */
        virtual bool visitIfcAngularDimension(IfcAngularDimension *value);
        /**
         * write the IfcAnnotation datatype to m_out.
         *
         * @param value the IfcAnnotation datatype to write
         */
        virtual bool visitIfcAnnotation(IfcAnnotation *value);
        /**
         * write the IfcAnnotationCurveOccurrence datatype to m_out.
         *
         * @param value the IfcAnnotationCurveOccurrence datatype to write
         */
        virtual bool visitIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *value);
        /**
         * write the IfcAnnotationFillArea datatype to m_out.
         *
         * @param value the IfcAnnotationFillArea datatype to write
         */
        virtual bool visitIfcAnnotationFillArea(IfcAnnotationFillArea *value);
        /**
         * write the IfcAnnotationFillAreaOccurrence datatype to m_out.
         *
         * @param value the IfcAnnotationFillAreaOccurrence datatype to write
         */
        virtual bool visitIfcAnnotationFillAreaOccurrence(IfcAnnotationFillAreaOccurrence *value);
        /**
         * write the IfcAnnotationOccurrence datatype to m_out.
         *
         * @param value the IfcAnnotationOccurrence datatype to write
         */
        virtual bool visitIfcAnnotationOccurrence(IfcAnnotationOccurrence *value);
        /**
         * write the IfcAnnotationSurface datatype to m_out.
         *
         * @param value the IfcAnnotationSurface datatype to write
         */
        virtual bool visitIfcAnnotationSurface(IfcAnnotationSurface *value);
        /**
         * write the IfcAnnotationSurfaceOccurrence datatype to m_out.
         *
         * @param value the IfcAnnotationSurfaceOccurrence datatype to write
         */
        virtual bool visitIfcAnnotationSurfaceOccurrence(IfcAnnotationSurfaceOccurrence *value);
        /**
         * write the IfcAnnotationSymbolOccurrence datatype to m_out.
         *
         * @param value the IfcAnnotationSymbolOccurrence datatype to write
         */
        virtual bool visitIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *value);
        /**
         * write the IfcAnnotationTextOccurrence datatype to m_out.
         *
         * @param value the IfcAnnotationTextOccurrence datatype to write
         */
        virtual bool visitIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *value);
        /**
         * write the IfcApplication datatype to m_out.
         *
         * @param value the IfcApplication datatype to write
         */
        virtual bool visitIfcApplication(IfcApplication *value);
        /**
         * write the IfcAppliedValue datatype to m_out.
         *
         * @param value the IfcAppliedValue datatype to write
         */
        virtual bool visitIfcAppliedValue(IfcAppliedValue *value);
        /**
         * write the IfcAppliedValueRelationship datatype to m_out.
         *
         * @param value the IfcAppliedValueRelationship datatype to write
         */
        virtual bool visitIfcAppliedValueRelationship(IfcAppliedValueRelationship *value);
        /**
         * write the IfcApproval datatype to m_out.
         *
         * @param value the IfcApproval datatype to write
         */
        virtual bool visitIfcApproval(IfcApproval *value);
        /**
         * write the IfcApprovalActorRelationship datatype to m_out.
         *
         * @param value the IfcApprovalActorRelationship datatype to write
         */
        virtual bool visitIfcApprovalActorRelationship(IfcApprovalActorRelationship *value);
        /**
         * write the IfcApprovalPropertyRelationship datatype to m_out.
         *
         * @param value the IfcApprovalPropertyRelationship datatype to write
         */
        virtual bool visitIfcApprovalPropertyRelationship(IfcApprovalPropertyRelationship *value);
        /**
         * write the IfcApprovalRelationship datatype to m_out.
         *
         * @param value the IfcApprovalRelationship datatype to write
         */
        virtual bool visitIfcApprovalRelationship(IfcApprovalRelationship *value);
        /**
         * write the IfcArbitraryClosedProfileDef datatype to m_out.
         *
         * @param value the IfcArbitraryClosedProfileDef datatype to write
         */
        virtual bool visitIfcArbitraryClosedProfileDef(IfcArbitraryClosedProfileDef *value);
        /**
         * write the IfcArbitraryOpenProfileDef datatype to m_out.
         *
         * @param value the IfcArbitraryOpenProfileDef datatype to write
         */
        virtual bool visitIfcArbitraryOpenProfileDef(IfcArbitraryOpenProfileDef *value);
        /**
         * write the IfcArbitraryProfileDefWithVoids datatype to m_out.
         *
         * @param value the IfcArbitraryProfileDefWithVoids datatype to write
         */
        virtual bool visitIfcArbitraryProfileDefWithVoids(IfcArbitraryProfileDefWithVoids *value);
        /**
         * write the IfcAsset datatype to m_out.
         *
         * @param value the IfcAsset datatype to write
         */
        virtual bool visitIfcAsset(IfcAsset *value);
        /**
         * write the IfcAsymmetricIShapeProfileDef datatype to m_out.
         *
         * @param value the IfcAsymmetricIShapeProfileDef datatype to write
         */
        virtual bool visitIfcAsymmetricIShapeProfileDef(IfcAsymmetricIShapeProfileDef *value);
        /**
         * write the IfcAxis1Placement datatype to m_out.
         *
         * @param value the IfcAxis1Placement datatype to write
         */
        virtual bool visitIfcAxis1Placement(IfcAxis1Placement *value);
        /**
         * write the IfcAxis2Placement2D datatype to m_out.
         *
         * @param value the IfcAxis2Placement2D datatype to write
         */
        virtual bool visitIfcAxis2Placement2D(IfcAxis2Placement2D *value);
        /**
         * write the IfcAxis2Placement3D datatype to m_out.
         *
         * @param value the IfcAxis2Placement3D datatype to write
         */
        virtual bool visitIfcAxis2Placement3D(IfcAxis2Placement3D *value);
        /**
         * write the IfcBeam datatype to m_out.
         *
         * @param value the IfcBeam datatype to write
         */
        virtual bool visitIfcBeam(IfcBeam *value);
        /**
         * write the IfcBeamType datatype to m_out.
         *
         * @param value the IfcBeamType datatype to write
         */
        virtual bool visitIfcBeamType(IfcBeamType *value);
        /**
         * write the IfcBezierCurve datatype to m_out.
         *
         * @param value the IfcBezierCurve datatype to write
         */
        virtual bool visitIfcBezierCurve(IfcBezierCurve *value);
        /**
         * write the IfcBlobTexture datatype to m_out.
         *
         * @param value the IfcBlobTexture datatype to write
         */
        virtual bool visitIfcBlobTexture(IfcBlobTexture *value);
        /**
         * write the IfcBlock datatype to m_out.
         *
         * @param value the IfcBlock datatype to write
         */
        virtual bool visitIfcBlock(IfcBlock *value);
        /**
         * write the IfcBoilerType datatype to m_out.
         *
         * @param value the IfcBoilerType datatype to write
         */
        virtual bool visitIfcBoilerType(IfcBoilerType *value);
        /**
         * write the IfcBooleanClippingResult datatype to m_out.
         *
         * @param value the IfcBooleanClippingResult datatype to write
         */
        virtual bool visitIfcBooleanClippingResult(IfcBooleanClippingResult *value);
        /**
         * write the IfcBooleanResult datatype to m_out.
         *
         * @param value the IfcBooleanResult datatype to write
         */
        virtual bool visitIfcBooleanResult(IfcBooleanResult *value);
        /**
         * write the IfcBoundaryCondition datatype to m_out.
         *
         * @param value the IfcBoundaryCondition datatype to write
         */
        virtual bool visitIfcBoundaryCondition(IfcBoundaryCondition *value);
        /**
         * write the IfcBoundaryEdgeCondition datatype to m_out.
         *
         * @param value the IfcBoundaryEdgeCondition datatype to write
         */
        virtual bool visitIfcBoundaryEdgeCondition(IfcBoundaryEdgeCondition *value);
        /**
         * write the IfcBoundaryFaceCondition datatype to m_out.
         *
         * @param value the IfcBoundaryFaceCondition datatype to write
         */
        virtual bool visitIfcBoundaryFaceCondition(IfcBoundaryFaceCondition *value);
        /**
         * write the IfcBoundaryNodeCondition datatype to m_out.
         *
         * @param value the IfcBoundaryNodeCondition datatype to write
         */
        virtual bool visitIfcBoundaryNodeCondition(IfcBoundaryNodeCondition *value);
        /**
         * write the IfcBoundaryNodeConditionWarping datatype to m_out.
         *
         * @param value the IfcBoundaryNodeConditionWarping datatype to write
         */
        virtual bool visitIfcBoundaryNodeConditionWarping(IfcBoundaryNodeConditionWarping *value);
        /**
         * write the IfcBoundedCurve datatype to m_out.
         *
         * @param value the IfcBoundedCurve datatype to write
         */
        virtual bool visitIfcBoundedCurve(IfcBoundedCurve *value);
        /**
         * write the IfcBoundedSurface datatype to m_out.
         *
         * @param value the IfcBoundedSurface datatype to write
         */
        virtual bool visitIfcBoundedSurface(IfcBoundedSurface *value);
        /**
         * write the IfcBoundingBox datatype to m_out.
         *
         * @param value the IfcBoundingBox datatype to write
         */
        virtual bool visitIfcBoundingBox(IfcBoundingBox *value);
        /**
         * write the IfcBoxedHalfSpace datatype to m_out.
         *
         * @param value the IfcBoxedHalfSpace datatype to write
         */
        virtual bool visitIfcBoxedHalfSpace(IfcBoxedHalfSpace *value);
        /**
         * write the IfcBSplineCurve datatype to m_out.
         *
         * @param value the IfcBSplineCurve datatype to write
         */
        virtual bool visitIfcBSplineCurve(IfcBSplineCurve *value);
        /**
         * write the IfcBuilding datatype to m_out.
         *
         * @param value the IfcBuilding datatype to write
         */
        virtual bool visitIfcBuilding(IfcBuilding *value);
        /**
         * write the IfcBuildingElement datatype to m_out.
         *
         * @param value the IfcBuildingElement datatype to write
         */
        virtual bool visitIfcBuildingElement(IfcBuildingElement *value);
        /**
         * write the IfcBuildingElementComponent datatype to m_out.
         *
         * @param value the IfcBuildingElementComponent datatype to write
         */
        virtual bool visitIfcBuildingElementComponent(IfcBuildingElementComponent *value);
        /**
         * write the IfcBuildingElementPart datatype to m_out.
         *
         * @param value the IfcBuildingElementPart datatype to write
         */
        virtual bool visitIfcBuildingElementPart(IfcBuildingElementPart *value);
        /**
         * write the IfcBuildingElementProxy datatype to m_out.
         *
         * @param value the IfcBuildingElementProxy datatype to write
         */
        virtual bool visitIfcBuildingElementProxy(IfcBuildingElementProxy *value);
        /**
         * write the IfcBuildingElementProxyType datatype to m_out.
         *
         * @param value the IfcBuildingElementProxyType datatype to write
         */
        virtual bool visitIfcBuildingElementProxyType(IfcBuildingElementProxyType *value);
        /**
         * write the IfcBuildingElementType datatype to m_out.
         *
         * @param value the IfcBuildingElementType datatype to write
         */
        virtual bool visitIfcBuildingElementType(IfcBuildingElementType *value);
        /**
         * write the IfcBuildingStorey datatype to m_out.
         *
         * @param value the IfcBuildingStorey datatype to write
         */
        virtual bool visitIfcBuildingStorey(IfcBuildingStorey *value);
        /**
         * write the IfcCableCarrierFittingType datatype to m_out.
         *
         * @param value the IfcCableCarrierFittingType datatype to write
         */
        virtual bool visitIfcCableCarrierFittingType(IfcCableCarrierFittingType *value);
        /**
         * write the IfcCableCarrierSegmentType datatype to m_out.
         *
         * @param value the IfcCableCarrierSegmentType datatype to write
         */
        virtual bool visitIfcCableCarrierSegmentType(IfcCableCarrierSegmentType *value);
        /**
         * write the IfcCableSegmentType datatype to m_out.
         *
         * @param value the IfcCableSegmentType datatype to write
         */
        virtual bool visitIfcCableSegmentType(IfcCableSegmentType *value);
        /**
         * write the IfcCalendarDate datatype to m_out.
         *
         * @param value the IfcCalendarDate datatype to write
         */
        virtual bool visitIfcCalendarDate(IfcCalendarDate *value);
        /**
         * write the IfcCartesianPoint datatype to m_out.
         *
         * @param value the IfcCartesianPoint datatype to write
         */
        virtual bool visitIfcCartesianPoint(IfcCartesianPoint *value);
        /**
         * write the IfcCartesianTransformationOperator datatype to m_out.
         *
         * @param value the IfcCartesianTransformationOperator datatype to write
         */
        virtual bool visitIfcCartesianTransformationOperator(IfcCartesianTransformationOperator *value);
        /**
         * write the IfcCartesianTransformationOperator2D datatype to m_out.
         *
         * @param value the IfcCartesianTransformationOperator2D datatype to write
         */
        virtual bool visitIfcCartesianTransformationOperator2D(IfcCartesianTransformationOperator2D *value);
        /**
         * write the IfcCartesianTransformationOperator2DnonUniform datatype to m_out.
         *
         * @param value the IfcCartesianTransformationOperator2DnonUniform datatype to write
         */
        virtual bool visitIfcCartesianTransformationOperator2DnonUniform(IfcCartesianTransformationOperator2DnonUniform *value);
        /**
         * write the IfcCartesianTransformationOperator3D datatype to m_out.
         *
         * @param value the IfcCartesianTransformationOperator3D datatype to write
         */
        virtual bool visitIfcCartesianTransformationOperator3D(IfcCartesianTransformationOperator3D *value);
        /**
         * write the IfcCartesianTransformationOperator3DnonUniform datatype to m_out.
         *
         * @param value the IfcCartesianTransformationOperator3DnonUniform datatype to write
         */
        virtual bool visitIfcCartesianTransformationOperator3DnonUniform(IfcCartesianTransformationOperator3DnonUniform *value);
        /**
         * write the IfcCenterLineProfileDef datatype to m_out.
         *
         * @param value the IfcCenterLineProfileDef datatype to write
         */
        virtual bool visitIfcCenterLineProfileDef(IfcCenterLineProfileDef *value);
        /**
         * write the IfcChamferEdgeFeature datatype to m_out.
         *
         * @param value the IfcChamferEdgeFeature datatype to write
         */
        virtual bool visitIfcChamferEdgeFeature(IfcChamferEdgeFeature *value);
        /**
         * write the IfcChillerType datatype to m_out.
         *
         * @param value the IfcChillerType datatype to write
         */
        virtual bool visitIfcChillerType(IfcChillerType *value);
        /**
         * write the IfcCircle datatype to m_out.
         *
         * @param value the IfcCircle datatype to write
         */
        virtual bool visitIfcCircle(IfcCircle *value);
        /**
         * write the IfcCircleHollowProfileDef datatype to m_out.
         *
         * @param value the IfcCircleHollowProfileDef datatype to write
         */
        virtual bool visitIfcCircleHollowProfileDef(IfcCircleHollowProfileDef *value);
        /**
         * write the IfcCircleProfileDef datatype to m_out.
         *
         * @param value the IfcCircleProfileDef datatype to write
         */
        virtual bool visitIfcCircleProfileDef(IfcCircleProfileDef *value);
        /**
         * write the IfcClassification datatype to m_out.
         *
         * @param value the IfcClassification datatype to write
         */
        virtual bool visitIfcClassification(IfcClassification *value);
        /**
         * write the IfcClassificationItem datatype to m_out.
         *
         * @param value the IfcClassificationItem datatype to write
         */
        virtual bool visitIfcClassificationItem(IfcClassificationItem *value);
        /**
         * write the IfcClassificationItemRelationship datatype to m_out.
         *
         * @param value the IfcClassificationItemRelationship datatype to write
         */
        virtual bool visitIfcClassificationItemRelationship(IfcClassificationItemRelationship *value);
        /**
         * write the IfcClassificationNotation datatype to m_out.
         *
         * @param value the IfcClassificationNotation datatype to write
         */
        virtual bool visitIfcClassificationNotation(IfcClassificationNotation *value);
        /**
         * write the IfcClassificationNotationFacet datatype to m_out.
         *
         * @param value the IfcClassificationNotationFacet datatype to write
         */
        virtual bool visitIfcClassificationNotationFacet(IfcClassificationNotationFacet *value);
        /**
         * write the IfcClassificationReference datatype to m_out.
         *
         * @param value the IfcClassificationReference datatype to write
         */
        virtual bool visitIfcClassificationReference(IfcClassificationReference *value);
        /**
         * write the IfcClosedShell datatype to m_out.
         *
         * @param value the IfcClosedShell datatype to write
         */
        virtual bool visitIfcClosedShell(IfcClosedShell *value);
        /**
         * write the IfcCoilType datatype to m_out.
         *
         * @param value the IfcCoilType datatype to write
         */
        virtual bool visitIfcCoilType(IfcCoilType *value);
        /**
         * write the IfcColourRgb datatype to m_out.
         *
         * @param value the IfcColourRgb datatype to write
         */
        virtual bool visitIfcColourRgb(IfcColourRgb *value);
        /**
         * write the IfcColourSpecification datatype to m_out.
         *
         * @param value the IfcColourSpecification datatype to write
         */
        virtual bool visitIfcColourSpecification(IfcColourSpecification *value);
        /**
         * write the IfcColumn datatype to m_out.
         *
         * @param value the IfcColumn datatype to write
         */
        virtual bool visitIfcColumn(IfcColumn *value);
        /**
         * write the IfcColumnType datatype to m_out.
         *
         * @param value the IfcColumnType datatype to write
         */
        virtual bool visitIfcColumnType(IfcColumnType *value);
        /**
         * write the IfcComplexProperty datatype to m_out.
         *
         * @param value the IfcComplexProperty datatype to write
         */
        virtual bool visitIfcComplexProperty(IfcComplexProperty *value);
        /**
         * write the IfcCompositeCurve datatype to m_out.
         *
         * @param value the IfcCompositeCurve datatype to write
         */
        virtual bool visitIfcCompositeCurve(IfcCompositeCurve *value);
        /**
         * write the IfcCompositeCurveSegment datatype to m_out.
         *
         * @param value the IfcCompositeCurveSegment datatype to write
         */
        virtual bool visitIfcCompositeCurveSegment(IfcCompositeCurveSegment *value);
        /**
         * write the IfcCompositeProfileDef datatype to m_out.
         *
         * @param value the IfcCompositeProfileDef datatype to write
         */
        virtual bool visitIfcCompositeProfileDef(IfcCompositeProfileDef *value);
        /**
         * write the IfcCompressorType datatype to m_out.
         *
         * @param value the IfcCompressorType datatype to write
         */
        virtual bool visitIfcCompressorType(IfcCompressorType *value);
        /**
         * write the IfcCondenserType datatype to m_out.
         *
         * @param value the IfcCondenserType datatype to write
         */
        virtual bool visitIfcCondenserType(IfcCondenserType *value);
        /**
         * write the IfcCondition datatype to m_out.
         *
         * @param value the IfcCondition datatype to write
         */
        virtual bool visitIfcCondition(IfcCondition *value);
        /**
         * write the IfcConditionCriterion datatype to m_out.
         *
         * @param value the IfcConditionCriterion datatype to write
         */
        virtual bool visitIfcConditionCriterion(IfcConditionCriterion *value);
        /**
         * write the IfcConic datatype to m_out.
         *
         * @param value the IfcConic datatype to write
         */
        virtual bool visitIfcConic(IfcConic *value);
        /**
         * write the IfcConnectedFaceSet datatype to m_out.
         *
         * @param value the IfcConnectedFaceSet datatype to write
         */
        virtual bool visitIfcConnectedFaceSet(IfcConnectedFaceSet *value);
        /**
         * write the IfcConnectionCurveGeometry datatype to m_out.
         *
         * @param value the IfcConnectionCurveGeometry datatype to write
         */
        virtual bool visitIfcConnectionCurveGeometry(IfcConnectionCurveGeometry *value);
        /**
         * write the IfcConnectionGeometry datatype to m_out.
         *
         * @param value the IfcConnectionGeometry datatype to write
         */
        virtual bool visitIfcConnectionGeometry(IfcConnectionGeometry *value);
        /**
         * write the IfcConnectionPointEccentricity datatype to m_out.
         *
         * @param value the IfcConnectionPointEccentricity datatype to write
         */
        virtual bool visitIfcConnectionPointEccentricity(IfcConnectionPointEccentricity *value);
        /**
         * write the IfcConnectionPointGeometry datatype to m_out.
         *
         * @param value the IfcConnectionPointGeometry datatype to write
         */
        virtual bool visitIfcConnectionPointGeometry(IfcConnectionPointGeometry *value);
        /**
         * write the IfcConnectionPortGeometry datatype to m_out.
         *
         * @param value the IfcConnectionPortGeometry datatype to write
         */
        virtual bool visitIfcConnectionPortGeometry(IfcConnectionPortGeometry *value);
        /**
         * write the IfcConnectionSurfaceGeometry datatype to m_out.
         *
         * @param value the IfcConnectionSurfaceGeometry datatype to write
         */
        virtual bool visitIfcConnectionSurfaceGeometry(IfcConnectionSurfaceGeometry *value);
        /**
         * write the IfcConstraint datatype to m_out.
         *
         * @param value the IfcConstraint datatype to write
         */
        virtual bool visitIfcConstraint(IfcConstraint *value);
        /**
         * write the IfcConstraintAggregationRelationship datatype to m_out.
         *
         * @param value the IfcConstraintAggregationRelationship datatype to write
         */
        virtual bool visitIfcConstraintAggregationRelationship(IfcConstraintAggregationRelationship *value);
        /**
         * write the IfcConstraintClassificationRelationship datatype to m_out.
         *
         * @param value the IfcConstraintClassificationRelationship datatype to write
         */
        virtual bool visitIfcConstraintClassificationRelationship(IfcConstraintClassificationRelationship *value);
        /**
         * write the IfcConstraintRelationship datatype to m_out.
         *
         * @param value the IfcConstraintRelationship datatype to write
         */
        virtual bool visitIfcConstraintRelationship(IfcConstraintRelationship *value);
        /**
         * write the IfcConstructionEquipmentResource datatype to m_out.
         *
         * @param value the IfcConstructionEquipmentResource datatype to write
         */
        virtual bool visitIfcConstructionEquipmentResource(IfcConstructionEquipmentResource *value);
        /**
         * write the IfcConstructionMaterialResource datatype to m_out.
         *
         * @param value the IfcConstructionMaterialResource datatype to write
         */
        virtual bool visitIfcConstructionMaterialResource(IfcConstructionMaterialResource *value);
        /**
         * write the IfcConstructionProductResource datatype to m_out.
         *
         * @param value the IfcConstructionProductResource datatype to write
         */
        virtual bool visitIfcConstructionProductResource(IfcConstructionProductResource *value);
        /**
         * write the IfcConstructionResource datatype to m_out.
         *
         * @param value the IfcConstructionResource datatype to write
         */
        virtual bool visitIfcConstructionResource(IfcConstructionResource *value);
        /**
         * write the IfcContextDependentUnit datatype to m_out.
         *
         * @param value the IfcContextDependentUnit datatype to write
         */
        virtual bool visitIfcContextDependentUnit(IfcContextDependentUnit *value);
        /**
         * write the IfcControl datatype to m_out.
         *
         * @param value the IfcControl datatype to write
         */
        virtual bool visitIfcControl(IfcControl *value);
        /**
         * write the IfcControllerType datatype to m_out.
         *
         * @param value the IfcControllerType datatype to write
         */
        virtual bool visitIfcControllerType(IfcControllerType *value);
        /**
         * write the IfcConversionBasedUnit datatype to m_out.
         *
         * @param value the IfcConversionBasedUnit datatype to write
         */
        virtual bool visitIfcConversionBasedUnit(IfcConversionBasedUnit *value);
        /**
         * write the IfcCooledBeamType datatype to m_out.
         *
         * @param value the IfcCooledBeamType datatype to write
         */
        virtual bool visitIfcCooledBeamType(IfcCooledBeamType *value);
        /**
         * write the IfcCoolingTowerType datatype to m_out.
         *
         * @param value the IfcCoolingTowerType datatype to write
         */
        virtual bool visitIfcCoolingTowerType(IfcCoolingTowerType *value);
        /**
         * write the IfcCoordinatedUniversalTimeOffset datatype to m_out.
         *
         * @param value the IfcCoordinatedUniversalTimeOffset datatype to write
         */
        virtual bool visitIfcCoordinatedUniversalTimeOffset(IfcCoordinatedUniversalTimeOffset *value);
        /**
         * write the IfcCostItem datatype to m_out.
         *
         * @param value the IfcCostItem datatype to write
         */
        virtual bool visitIfcCostItem(IfcCostItem *value);
        /**
         * write the IfcCostSchedule datatype to m_out.
         *
         * @param value the IfcCostSchedule datatype to write
         */
        virtual bool visitIfcCostSchedule(IfcCostSchedule *value);
        /**
         * write the IfcCostValue datatype to m_out.
         *
         * @param value the IfcCostValue datatype to write
         */
        virtual bool visitIfcCostValue(IfcCostValue *value);
        /**
         * write the IfcCovering datatype to m_out.
         *
         * @param value the IfcCovering datatype to write
         */
        virtual bool visitIfcCovering(IfcCovering *value);
        /**
         * write the IfcCoveringType datatype to m_out.
         *
         * @param value the IfcCoveringType datatype to write
         */
        virtual bool visitIfcCoveringType(IfcCoveringType *value);
        /**
         * write the IfcCraneRailAShapeProfileDef datatype to m_out.
         *
         * @param value the IfcCraneRailAShapeProfileDef datatype to write
         */
        virtual bool visitIfcCraneRailAShapeProfileDef(IfcCraneRailAShapeProfileDef *value);
        /**
         * write the IfcCraneRailFShapeProfileDef datatype to m_out.
         *
         * @param value the IfcCraneRailFShapeProfileDef datatype to write
         */
        virtual bool visitIfcCraneRailFShapeProfileDef(IfcCraneRailFShapeProfileDef *value);
        /**
         * write the IfcCrewResource datatype to m_out.
         *
         * @param value the IfcCrewResource datatype to write
         */
        virtual bool visitIfcCrewResource(IfcCrewResource *value);
        /**
         * write the IfcCsgPrimitive3D datatype to m_out.
         *
         * @param value the IfcCsgPrimitive3D datatype to write
         */
        virtual bool visitIfcCsgPrimitive3D(IfcCsgPrimitive3D *value);
        /**
         * write the IfcCsgSolid datatype to m_out.
         *
         * @param value the IfcCsgSolid datatype to write
         */
        virtual bool visitIfcCsgSolid(IfcCsgSolid *value);
        /**
         * write the IfcCShapeProfileDef datatype to m_out.
         *
         * @param value the IfcCShapeProfileDef datatype to write
         */
        virtual bool visitIfcCShapeProfileDef(IfcCShapeProfileDef *value);
        /**
         * write the IfcCurrencyRelationship datatype to m_out.
         *
         * @param value the IfcCurrencyRelationship datatype to write
         */
        virtual bool visitIfcCurrencyRelationship(IfcCurrencyRelationship *value);
        /**
         * write the IfcCurtainWall datatype to m_out.
         *
         * @param value the IfcCurtainWall datatype to write
         */
        virtual bool visitIfcCurtainWall(IfcCurtainWall *value);
        /**
         * write the IfcCurtainWallType datatype to m_out.
         *
         * @param value the IfcCurtainWallType datatype to write
         */
        virtual bool visitIfcCurtainWallType(IfcCurtainWallType *value);
        /**
         * write the IfcCurve datatype to m_out.
         *
         * @param value the IfcCurve datatype to write
         */
        virtual bool visitIfcCurve(IfcCurve *value);
        /**
         * write the IfcCurveBoundedPlane datatype to m_out.
         *
         * @param value the IfcCurveBoundedPlane datatype to write
         */
        virtual bool visitIfcCurveBoundedPlane(IfcCurveBoundedPlane *value);
        /**
         * write the IfcCurveStyle datatype to m_out.
         *
         * @param value the IfcCurveStyle datatype to write
         */
        virtual bool visitIfcCurveStyle(IfcCurveStyle *value);
        /**
         * write the IfcCurveStyleFont datatype to m_out.
         *
         * @param value the IfcCurveStyleFont datatype to write
         */
        virtual bool visitIfcCurveStyleFont(IfcCurveStyleFont *value);
        /**
         * write the IfcCurveStyleFontAndScaling datatype to m_out.
         *
         * @param value the IfcCurveStyleFontAndScaling datatype to write
         */
        virtual bool visitIfcCurveStyleFontAndScaling(IfcCurveStyleFontAndScaling *value);
        /**
         * write the IfcCurveStyleFontPattern datatype to m_out.
         *
         * @param value the IfcCurveStyleFontPattern datatype to write
         */
        virtual bool visitIfcCurveStyleFontPattern(IfcCurveStyleFontPattern *value);
        /**
         * write the IfcDamperType datatype to m_out.
         *
         * @param value the IfcDamperType datatype to write
         */
        virtual bool visitIfcDamperType(IfcDamperType *value);
        /**
         * write the IfcDateAndTime datatype to m_out.
         *
         * @param value the IfcDateAndTime datatype to write
         */
        virtual bool visitIfcDateAndTime(IfcDateAndTime *value);
        /**
         * write the IfcDefinedSymbol datatype to m_out.
         *
         * @param value the IfcDefinedSymbol datatype to write
         */
        virtual bool visitIfcDefinedSymbol(IfcDefinedSymbol *value);
        /**
         * write the IfcDerivedProfileDef datatype to m_out.
         *
         * @param value the IfcDerivedProfileDef datatype to write
         */
        virtual bool visitIfcDerivedProfileDef(IfcDerivedProfileDef *value);
        /**
         * write the IfcDerivedUnit datatype to m_out.
         *
         * @param value the IfcDerivedUnit datatype to write
         */
        virtual bool visitIfcDerivedUnit(IfcDerivedUnit *value);
        /**
         * write the IfcDerivedUnitElement datatype to m_out.
         *
         * @param value the IfcDerivedUnitElement datatype to write
         */
        virtual bool visitIfcDerivedUnitElement(IfcDerivedUnitElement *value);
        /**
         * write the IfcDiameterDimension datatype to m_out.
         *
         * @param value the IfcDiameterDimension datatype to write
         */
        virtual bool visitIfcDiameterDimension(IfcDiameterDimension *value);
        /**
         * write the IfcDimensionalExponents datatype to m_out.
         *
         * @param value the IfcDimensionalExponents datatype to write
         */
        virtual bool visitIfcDimensionalExponents(IfcDimensionalExponents *value);
        /**
         * write the IfcDimensionCalloutRelationship datatype to m_out.
         *
         * @param value the IfcDimensionCalloutRelationship datatype to write
         */
        virtual bool visitIfcDimensionCalloutRelationship(IfcDimensionCalloutRelationship *value);
        /**
         * write the IfcDimensionCurve datatype to m_out.
         *
         * @param value the IfcDimensionCurve datatype to write
         */
        virtual bool visitIfcDimensionCurve(IfcDimensionCurve *value);
        /**
         * write the IfcDimensionCurveDirectedCallout datatype to m_out.
         *
         * @param value the IfcDimensionCurveDirectedCallout datatype to write
         */
        virtual bool visitIfcDimensionCurveDirectedCallout(IfcDimensionCurveDirectedCallout *value);
        /**
         * write the IfcDimensionCurveTerminator datatype to m_out.
         *
         * @param value the IfcDimensionCurveTerminator datatype to write
         */
        virtual bool visitIfcDimensionCurveTerminator(IfcDimensionCurveTerminator *value);
        /**
         * write the IfcDimensionPair datatype to m_out.
         *
         * @param value the IfcDimensionPair datatype to write
         */
        virtual bool visitIfcDimensionPair(IfcDimensionPair *value);
        /**
         * write the IfcDirection datatype to m_out.
         *
         * @param value the IfcDirection datatype to write
         */
        virtual bool visitIfcDirection(IfcDirection *value);
        /**
         * write the IfcDiscreteAccessory datatype to m_out.
         *
         * @param value the IfcDiscreteAccessory datatype to write
         */
        virtual bool visitIfcDiscreteAccessory(IfcDiscreteAccessory *value);
        /**
         * write the IfcDiscreteAccessoryType datatype to m_out.
         *
         * @param value the IfcDiscreteAccessoryType datatype to write
         */
        virtual bool visitIfcDiscreteAccessoryType(IfcDiscreteAccessoryType *value);
        /**
         * write the IfcDistributionChamberElement datatype to m_out.
         *
         * @param value the IfcDistributionChamberElement datatype to write
         */
        virtual bool visitIfcDistributionChamberElement(IfcDistributionChamberElement *value);
        /**
         * write the IfcDistributionChamberElementType datatype to m_out.
         *
         * @param value the IfcDistributionChamberElementType datatype to write
         */
        virtual bool visitIfcDistributionChamberElementType(IfcDistributionChamberElementType *value);
        /**
         * write the IfcDistributionControlElement datatype to m_out.
         *
         * @param value the IfcDistributionControlElement datatype to write
         */
        virtual bool visitIfcDistributionControlElement(IfcDistributionControlElement *value);
        /**
         * write the IfcDistributionControlElementType datatype to m_out.
         *
         * @param value the IfcDistributionControlElementType datatype to write
         */
        virtual bool visitIfcDistributionControlElementType(IfcDistributionControlElementType *value);
        /**
         * write the IfcDistributionElement datatype to m_out.
         *
         * @param value the IfcDistributionElement datatype to write
         */
        virtual bool visitIfcDistributionElement(IfcDistributionElement *value);
        /**
         * write the IfcDistributionElementType datatype to m_out.
         *
         * @param value the IfcDistributionElementType datatype to write
         */
        virtual bool visitIfcDistributionElementType(IfcDistributionElementType *value);
        /**
         * write the IfcDistributionFlowElement datatype to m_out.
         *
         * @param value the IfcDistributionFlowElement datatype to write
         */
        virtual bool visitIfcDistributionFlowElement(IfcDistributionFlowElement *value);
        /**
         * write the IfcDistributionFlowElementType datatype to m_out.
         *
         * @param value the IfcDistributionFlowElementType datatype to write
         */
        virtual bool visitIfcDistributionFlowElementType(IfcDistributionFlowElementType *value);
        /**
         * write the IfcDistributionPort datatype to m_out.
         *
         * @param value the IfcDistributionPort datatype to write
         */
        virtual bool visitIfcDistributionPort(IfcDistributionPort *value);
        /**
         * write the IfcDocumentElectronicFormat datatype to m_out.
         *
         * @param value the IfcDocumentElectronicFormat datatype to write
         */
        virtual bool visitIfcDocumentElectronicFormat(IfcDocumentElectronicFormat *value);
        /**
         * write the IfcDocumentInformation datatype to m_out.
         *
         * @param value the IfcDocumentInformation datatype to write
         */
        virtual bool visitIfcDocumentInformation(IfcDocumentInformation *value);
        /**
         * write the IfcDocumentInformationRelationship datatype to m_out.
         *
         * @param value the IfcDocumentInformationRelationship datatype to write
         */
        virtual bool visitIfcDocumentInformationRelationship(IfcDocumentInformationRelationship *value);
        /**
         * write the IfcDocumentReference datatype to m_out.
         *
         * @param value the IfcDocumentReference datatype to write
         */
        virtual bool visitIfcDocumentReference(IfcDocumentReference *value);
        /**
         * write the IfcDoor datatype to m_out.
         *
         * @param value the IfcDoor datatype to write
         */
        virtual bool visitIfcDoor(IfcDoor *value);
        /**
         * write the IfcDoorLiningProperties datatype to m_out.
         *
         * @param value the IfcDoorLiningProperties datatype to write
         */
        virtual bool visitIfcDoorLiningProperties(IfcDoorLiningProperties *value);
        /**
         * write the IfcDoorPanelProperties datatype to m_out.
         *
         * @param value the IfcDoorPanelProperties datatype to write
         */
        virtual bool visitIfcDoorPanelProperties(IfcDoorPanelProperties *value);
        /**
         * write the IfcDoorStyle datatype to m_out.
         *
         * @param value the IfcDoorStyle datatype to write
         */
        virtual bool visitIfcDoorStyle(IfcDoorStyle *value);
        /**
         * write the IfcDraughtingCallout datatype to m_out.
         *
         * @param value the IfcDraughtingCallout datatype to write
         */
        virtual bool visitIfcDraughtingCallout(IfcDraughtingCallout *value);
        /**
         * write the IfcDraughtingCalloutRelationship datatype to m_out.
         *
         * @param value the IfcDraughtingCalloutRelationship datatype to write
         */
        virtual bool visitIfcDraughtingCalloutRelationship(IfcDraughtingCalloutRelationship *value);
        /**
         * write the IfcDraughtingPreDefinedColour datatype to m_out.
         *
         * @param value the IfcDraughtingPreDefinedColour datatype to write
         */
        virtual bool visitIfcDraughtingPreDefinedColour(IfcDraughtingPreDefinedColour *value);
        /**
         * write the IfcDraughtingPreDefinedCurveFont datatype to m_out.
         *
         * @param value the IfcDraughtingPreDefinedCurveFont datatype to write
         */
        virtual bool visitIfcDraughtingPreDefinedCurveFont(IfcDraughtingPreDefinedCurveFont *value);
        /**
         * write the IfcDraughtingPreDefinedTextFont datatype to m_out.
         *
         * @param value the IfcDraughtingPreDefinedTextFont datatype to write
         */
        virtual bool visitIfcDraughtingPreDefinedTextFont(IfcDraughtingPreDefinedTextFont *value);
        /**
         * write the IfcDuctFittingType datatype to m_out.
         *
         * @param value the IfcDuctFittingType datatype to write
         */
        virtual bool visitIfcDuctFittingType(IfcDuctFittingType *value);
        /**
         * write the IfcDuctSegmentType datatype to m_out.
         *
         * @param value the IfcDuctSegmentType datatype to write
         */
        virtual bool visitIfcDuctSegmentType(IfcDuctSegmentType *value);
        /**
         * write the IfcDuctSilencerType datatype to m_out.
         *
         * @param value the IfcDuctSilencerType datatype to write
         */
        virtual bool visitIfcDuctSilencerType(IfcDuctSilencerType *value);
        /**
         * write the IfcEdge datatype to m_out.
         *
         * @param value the IfcEdge datatype to write
         */
        virtual bool visitIfcEdge(IfcEdge *value);
        /**
         * write the IfcEdgeCurve datatype to m_out.
         *
         * @param value the IfcEdgeCurve datatype to write
         */
        virtual bool visitIfcEdgeCurve(IfcEdgeCurve *value);
        /**
         * write the IfcEdgeFeature datatype to m_out.
         *
         * @param value the IfcEdgeFeature datatype to write
         */
        virtual bool visitIfcEdgeFeature(IfcEdgeFeature *value);
        /**
         * write the IfcEdgeLoop datatype to m_out.
         *
         * @param value the IfcEdgeLoop datatype to write
         */
        virtual bool visitIfcEdgeLoop(IfcEdgeLoop *value);
        /**
         * write the IfcElectricalBaseProperties datatype to m_out.
         *
         * @param value the IfcElectricalBaseProperties datatype to write
         */
        virtual bool visitIfcElectricalBaseProperties(IfcElectricalBaseProperties *value);
        /**
         * write the IfcElectricalCircuit datatype to m_out.
         *
         * @param value the IfcElectricalCircuit datatype to write
         */
        virtual bool visitIfcElectricalCircuit(IfcElectricalCircuit *value);
        /**
         * write the IfcElectricalElement datatype to m_out.
         *
         * @param value the IfcElectricalElement datatype to write
         */
        virtual bool visitIfcElectricalElement(IfcElectricalElement *value);
        /**
         * write the IfcElectricApplianceType datatype to m_out.
         *
         * @param value the IfcElectricApplianceType datatype to write
         */
        virtual bool visitIfcElectricApplianceType(IfcElectricApplianceType *value);
        /**
         * write the IfcElectricDistributionPoint datatype to m_out.
         *
         * @param value the IfcElectricDistributionPoint datatype to write
         */
        virtual bool visitIfcElectricDistributionPoint(IfcElectricDistributionPoint *value);
        /**
         * write the IfcElectricFlowStorageDeviceType datatype to m_out.
         *
         * @param value the IfcElectricFlowStorageDeviceType datatype to write
         */
        virtual bool visitIfcElectricFlowStorageDeviceType(IfcElectricFlowStorageDeviceType *value);
        /**
         * write the IfcElectricGeneratorType datatype to m_out.
         *
         * @param value the IfcElectricGeneratorType datatype to write
         */
        virtual bool visitIfcElectricGeneratorType(IfcElectricGeneratorType *value);
        /**
         * write the IfcElectricHeaterType datatype to m_out.
         *
         * @param value the IfcElectricHeaterType datatype to write
         */
        virtual bool visitIfcElectricHeaterType(IfcElectricHeaterType *value);
        /**
         * write the IfcElectricMotorType datatype to m_out.
         *
         * @param value the IfcElectricMotorType datatype to write
         */
        virtual bool visitIfcElectricMotorType(IfcElectricMotorType *value);
        /**
         * write the IfcElectricTimeControlType datatype to m_out.
         *
         * @param value the IfcElectricTimeControlType datatype to write
         */
        virtual bool visitIfcElectricTimeControlType(IfcElectricTimeControlType *value);
        /**
         * write the IfcElement datatype to m_out.
         *
         * @param value the IfcElement datatype to write
         */
        virtual bool visitIfcElement(IfcElement *value);
        /**
         * write the IfcElementarySurface datatype to m_out.
         *
         * @param value the IfcElementarySurface datatype to write
         */
        virtual bool visitIfcElementarySurface(IfcElementarySurface *value);
        /**
         * write the IfcElementAssembly datatype to m_out.
         *
         * @param value the IfcElementAssembly datatype to write
         */
        virtual bool visitIfcElementAssembly(IfcElementAssembly *value);
        /**
         * write the IfcElementComponent datatype to m_out.
         *
         * @param value the IfcElementComponent datatype to write
         */
        virtual bool visitIfcElementComponent(IfcElementComponent *value);
        /**
         * write the IfcElementComponentType datatype to m_out.
         *
         * @param value the IfcElementComponentType datatype to write
         */
        virtual bool visitIfcElementComponentType(IfcElementComponentType *value);
        /**
         * write the IfcElementQuantity datatype to m_out.
         *
         * @param value the IfcElementQuantity datatype to write
         */
        virtual bool visitIfcElementQuantity(IfcElementQuantity *value);
        /**
         * write the IfcElementType datatype to m_out.
         *
         * @param value the IfcElementType datatype to write
         */
        virtual bool visitIfcElementType(IfcElementType *value);
        /**
         * write the IfcEllipse datatype to m_out.
         *
         * @param value the IfcEllipse datatype to write
         */
        virtual bool visitIfcEllipse(IfcEllipse *value);
        /**
         * write the IfcEllipseProfileDef datatype to m_out.
         *
         * @param value the IfcEllipseProfileDef datatype to write
         */
        virtual bool visitIfcEllipseProfileDef(IfcEllipseProfileDef *value);
        /**
         * write the IfcEnergyConversionDevice datatype to m_out.
         *
         * @param value the IfcEnergyConversionDevice datatype to write
         */
        virtual bool visitIfcEnergyConversionDevice(IfcEnergyConversionDevice *value);
        /**
         * write the IfcEnergyConversionDeviceType datatype to m_out.
         *
         * @param value the IfcEnergyConversionDeviceType datatype to write
         */
        virtual bool visitIfcEnergyConversionDeviceType(IfcEnergyConversionDeviceType *value);
        /**
         * write the IfcEnergyProperties datatype to m_out.
         *
         * @param value the IfcEnergyProperties datatype to write
         */
        virtual bool visitIfcEnergyProperties(IfcEnergyProperties *value);
        /**
         * write the IfcEnvironmentalImpactValue datatype to m_out.
         *
         * @param value the IfcEnvironmentalImpactValue datatype to write
         */
        virtual bool visitIfcEnvironmentalImpactValue(IfcEnvironmentalImpactValue *value);
        /**
         * write the IfcEquipmentElement datatype to m_out.
         *
         * @param value the IfcEquipmentElement datatype to write
         */
        virtual bool visitIfcEquipmentElement(IfcEquipmentElement *value);
        /**
         * write the IfcEquipmentStandard datatype to m_out.
         *
         * @param value the IfcEquipmentStandard datatype to write
         */
        virtual bool visitIfcEquipmentStandard(IfcEquipmentStandard *value);
        /**
         * write the IfcEvaporativeCoolerType datatype to m_out.
         *
         * @param value the IfcEvaporativeCoolerType datatype to write
         */
        virtual bool visitIfcEvaporativeCoolerType(IfcEvaporativeCoolerType *value);
        /**
         * write the IfcEvaporatorType datatype to m_out.
         *
         * @param value the IfcEvaporatorType datatype to write
         */
        virtual bool visitIfcEvaporatorType(IfcEvaporatorType *value);
        /**
         * write the IfcExtendedMaterialProperties datatype to m_out.
         *
         * @param value the IfcExtendedMaterialProperties datatype to write
         */
        virtual bool visitIfcExtendedMaterialProperties(IfcExtendedMaterialProperties *value);
        /**
         * write the IfcExternallyDefinedHatchStyle datatype to m_out.
         *
         * @param value the IfcExternallyDefinedHatchStyle datatype to write
         */
        virtual bool visitIfcExternallyDefinedHatchStyle(IfcExternallyDefinedHatchStyle *value);
        /**
         * write the IfcExternallyDefinedSurfaceStyle datatype to m_out.
         *
         * @param value the IfcExternallyDefinedSurfaceStyle datatype to write
         */
        virtual bool visitIfcExternallyDefinedSurfaceStyle(IfcExternallyDefinedSurfaceStyle *value);
        /**
         * write the IfcExternallyDefinedSymbol datatype to m_out.
         *
         * @param value the IfcExternallyDefinedSymbol datatype to write
         */
        virtual bool visitIfcExternallyDefinedSymbol(IfcExternallyDefinedSymbol *value);
        /**
         * write the IfcExternallyDefinedTextFont datatype to m_out.
         *
         * @param value the IfcExternallyDefinedTextFont datatype to write
         */
        virtual bool visitIfcExternallyDefinedTextFont(IfcExternallyDefinedTextFont *value);
        /**
         * write the IfcExternalReference datatype to m_out.
         *
         * @param value the IfcExternalReference datatype to write
         */
        virtual bool visitIfcExternalReference(IfcExternalReference *value);
        /**
         * write the IfcExtrudedAreaSolid datatype to m_out.
         *
         * @param value the IfcExtrudedAreaSolid datatype to write
         */
        virtual bool visitIfcExtrudedAreaSolid(IfcExtrudedAreaSolid *value);
        /**
         * write the IfcFace datatype to m_out.
         *
         * @param value the IfcFace datatype to write
         */
        virtual bool visitIfcFace(IfcFace *value);
        /**
         * write the IfcFaceBasedSurfaceModel datatype to m_out.
         *
         * @param value the IfcFaceBasedSurfaceModel datatype to write
         */
        virtual bool visitIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel *value);
        /**
         * write the IfcFaceBound datatype to m_out.
         *
         * @param value the IfcFaceBound datatype to write
         */
        virtual bool visitIfcFaceBound(IfcFaceBound *value);
        /**
         * write the IfcFaceOuterBound datatype to m_out.
         *
         * @param value the IfcFaceOuterBound datatype to write
         */
        virtual bool visitIfcFaceOuterBound(IfcFaceOuterBound *value);
        /**
         * write the IfcFaceSurface datatype to m_out.
         *
         * @param value the IfcFaceSurface datatype to write
         */
        virtual bool visitIfcFaceSurface(IfcFaceSurface *value);
        /**
         * write the IfcFacetedBrep datatype to m_out.
         *
         * @param value the IfcFacetedBrep datatype to write
         */
        virtual bool visitIfcFacetedBrep(IfcFacetedBrep *value);
        /**
         * write the IfcFacetedBrepWithVoids datatype to m_out.
         *
         * @param value the IfcFacetedBrepWithVoids datatype to write
         */
        virtual bool visitIfcFacetedBrepWithVoids(IfcFacetedBrepWithVoids *value);
        /**
         * write the IfcFailureConnectionCondition datatype to m_out.
         *
         * @param value the IfcFailureConnectionCondition datatype to write
         */
        virtual bool visitIfcFailureConnectionCondition(IfcFailureConnectionCondition *value);
        /**
         * write the IfcFanType datatype to m_out.
         *
         * @param value the IfcFanType datatype to write
         */
        virtual bool visitIfcFanType(IfcFanType *value);
        /**
         * write the IfcFastener datatype to m_out.
         *
         * @param value the IfcFastener datatype to write
         */
        virtual bool visitIfcFastener(IfcFastener *value);
        /**
         * write the IfcFastenerType datatype to m_out.
         *
         * @param value the IfcFastenerType datatype to write
         */
        virtual bool visitIfcFastenerType(IfcFastenerType *value);
        /**
         * write the IfcFeatureElement datatype to m_out.
         *
         * @param value the IfcFeatureElement datatype to write
         */
        virtual bool visitIfcFeatureElement(IfcFeatureElement *value);
        /**
         * write the IfcFeatureElementAddition datatype to m_out.
         *
         * @param value the IfcFeatureElementAddition datatype to write
         */
        virtual bool visitIfcFeatureElementAddition(IfcFeatureElementAddition *value);
        /**
         * write the IfcFeatureElementSubtraction datatype to m_out.
         *
         * @param value the IfcFeatureElementSubtraction datatype to write
         */
        virtual bool visitIfcFeatureElementSubtraction(IfcFeatureElementSubtraction *value);
        /**
         * write the IfcFillAreaStyle datatype to m_out.
         *
         * @param value the IfcFillAreaStyle datatype to write
         */
        virtual bool visitIfcFillAreaStyle(IfcFillAreaStyle *value);
        /**
         * write the IfcFillAreaStyleHatching datatype to m_out.
         *
         * @param value the IfcFillAreaStyleHatching datatype to write
         */
        virtual bool visitIfcFillAreaStyleHatching(IfcFillAreaStyleHatching *value);
        /**
         * write the IfcFillAreaStyleTiles datatype to m_out.
         *
         * @param value the IfcFillAreaStyleTiles datatype to write
         */
        virtual bool visitIfcFillAreaStyleTiles(IfcFillAreaStyleTiles *value);
        /**
         * write the IfcFillAreaStyleTileSymbolWithStyle datatype to m_out.
         *
         * @param value the IfcFillAreaStyleTileSymbolWithStyle datatype to write
         */
        virtual bool visitIfcFillAreaStyleTileSymbolWithStyle(IfcFillAreaStyleTileSymbolWithStyle *value);
        /**
         * write the IfcFilterType datatype to m_out.
         *
         * @param value the IfcFilterType datatype to write
         */
        virtual bool visitIfcFilterType(IfcFilterType *value);
        /**
         * write the IfcFireSuppressionTerminalType datatype to m_out.
         *
         * @param value the IfcFireSuppressionTerminalType datatype to write
         */
        virtual bool visitIfcFireSuppressionTerminalType(IfcFireSuppressionTerminalType *value);
        /**
         * write the IfcFlowController datatype to m_out.
         *
         * @param value the IfcFlowController datatype to write
         */
        virtual bool visitIfcFlowController(IfcFlowController *value);
        /**
         * write the IfcFlowControllerType datatype to m_out.
         *
         * @param value the IfcFlowControllerType datatype to write
         */
        virtual bool visitIfcFlowControllerType(IfcFlowControllerType *value);
        /**
         * write the IfcFlowFitting datatype to m_out.
         *
         * @param value the IfcFlowFitting datatype to write
         */
        virtual bool visitIfcFlowFitting(IfcFlowFitting *value);
        /**
         * write the IfcFlowFittingType datatype to m_out.
         *
         * @param value the IfcFlowFittingType datatype to write
         */
        virtual bool visitIfcFlowFittingType(IfcFlowFittingType *value);
        /**
         * write the IfcFlowInstrumentType datatype to m_out.
         *
         * @param value the IfcFlowInstrumentType datatype to write
         */
        virtual bool visitIfcFlowInstrumentType(IfcFlowInstrumentType *value);
        /**
         * write the IfcFlowMeterType datatype to m_out.
         *
         * @param value the IfcFlowMeterType datatype to write
         */
        virtual bool visitIfcFlowMeterType(IfcFlowMeterType *value);
        /**
         * write the IfcFlowMovingDevice datatype to m_out.
         *
         * @param value the IfcFlowMovingDevice datatype to write
         */
        virtual bool visitIfcFlowMovingDevice(IfcFlowMovingDevice *value);
        /**
         * write the IfcFlowMovingDeviceType datatype to m_out.
         *
         * @param value the IfcFlowMovingDeviceType datatype to write
         */
        virtual bool visitIfcFlowMovingDeviceType(IfcFlowMovingDeviceType *value);
        /**
         * write the IfcFlowSegment datatype to m_out.
         *
         * @param value the IfcFlowSegment datatype to write
         */
        virtual bool visitIfcFlowSegment(IfcFlowSegment *value);
        /**
         * write the IfcFlowSegmentType datatype to m_out.
         *
         * @param value the IfcFlowSegmentType datatype to write
         */
        virtual bool visitIfcFlowSegmentType(IfcFlowSegmentType *value);
        /**
         * write the IfcFlowStorageDevice datatype to m_out.
         *
         * @param value the IfcFlowStorageDevice datatype to write
         */
        virtual bool visitIfcFlowStorageDevice(IfcFlowStorageDevice *value);
        /**
         * write the IfcFlowStorageDeviceType datatype to m_out.
         *
         * @param value the IfcFlowStorageDeviceType datatype to write
         */
        virtual bool visitIfcFlowStorageDeviceType(IfcFlowStorageDeviceType *value);
        /**
         * write the IfcFlowTerminal datatype to m_out.
         *
         * @param value the IfcFlowTerminal datatype to write
         */
        virtual bool visitIfcFlowTerminal(IfcFlowTerminal *value);
        /**
         * write the IfcFlowTerminalType datatype to m_out.
         *
         * @param value the IfcFlowTerminalType datatype to write
         */
        virtual bool visitIfcFlowTerminalType(IfcFlowTerminalType *value);
        /**
         * write the IfcFlowTreatmentDevice datatype to m_out.
         *
         * @param value the IfcFlowTreatmentDevice datatype to write
         */
        virtual bool visitIfcFlowTreatmentDevice(IfcFlowTreatmentDevice *value);
        /**
         * write the IfcFlowTreatmentDeviceType datatype to m_out.
         *
         * @param value the IfcFlowTreatmentDeviceType datatype to write
         */
        virtual bool visitIfcFlowTreatmentDeviceType(IfcFlowTreatmentDeviceType *value);
        /**
         * write the IfcFluidFlowProperties datatype to m_out.
         *
         * @param value the IfcFluidFlowProperties datatype to write
         */
        virtual bool visitIfcFluidFlowProperties(IfcFluidFlowProperties *value);
        /**
         * write the IfcFooting datatype to m_out.
         *
         * @param value the IfcFooting datatype to write
         */
        virtual bool visitIfcFooting(IfcFooting *value);
        /**
         * write the IfcFuelProperties datatype to m_out.
         *
         * @param value the IfcFuelProperties datatype to write
         */
        virtual bool visitIfcFuelProperties(IfcFuelProperties *value);
        /**
         * write the IfcFurnishingElement datatype to m_out.
         *
         * @param value the IfcFurnishingElement datatype to write
         */
        virtual bool visitIfcFurnishingElement(IfcFurnishingElement *value);
        /**
         * write the IfcFurnishingElementType datatype to m_out.
         *
         * @param value the IfcFurnishingElementType datatype to write
         */
        virtual bool visitIfcFurnishingElementType(IfcFurnishingElementType *value);
        /**
         * write the IfcFurnitureStandard datatype to m_out.
         *
         * @param value the IfcFurnitureStandard datatype to write
         */
        virtual bool visitIfcFurnitureStandard(IfcFurnitureStandard *value);
        /**
         * write the IfcFurnitureType datatype to m_out.
         *
         * @param value the IfcFurnitureType datatype to write
         */
        virtual bool visitIfcFurnitureType(IfcFurnitureType *value);
        /**
         * write the IfcGasTerminalType datatype to m_out.
         *
         * @param value the IfcGasTerminalType datatype to write
         */
        virtual bool visitIfcGasTerminalType(IfcGasTerminalType *value);
        /**
         * write the IfcGeneralMaterialProperties datatype to m_out.
         *
         * @param value the IfcGeneralMaterialProperties datatype to write
         */
        virtual bool visitIfcGeneralMaterialProperties(IfcGeneralMaterialProperties *value);
        /**
         * write the IfcGeneralProfileProperties datatype to m_out.
         *
         * @param value the IfcGeneralProfileProperties datatype to write
         */
        virtual bool visitIfcGeneralProfileProperties(IfcGeneralProfileProperties *value);
        /**
         * write the IfcGeometricCurveSet datatype to m_out.
         *
         * @param value the IfcGeometricCurveSet datatype to write
         */
        virtual bool visitIfcGeometricCurveSet(IfcGeometricCurveSet *value);
        /**
         * write the IfcGeometricRepresentationContext datatype to m_out.
         *
         * @param value the IfcGeometricRepresentationContext datatype to write
         */
        virtual bool visitIfcGeometricRepresentationContext(IfcGeometricRepresentationContext *value);
        /**
         * write the IfcGeometricRepresentationItem datatype to m_out.
         *
         * @param value the IfcGeometricRepresentationItem datatype to write
         */
        virtual bool visitIfcGeometricRepresentationItem(IfcGeometricRepresentationItem *value);
        /**
         * write the IfcGeometricRepresentationSubContext datatype to m_out.
         *
         * @param value the IfcGeometricRepresentationSubContext datatype to write
         */
        virtual bool visitIfcGeometricRepresentationSubContext(IfcGeometricRepresentationSubContext *value);
        /**
         * write the IfcGeometricSet datatype to m_out.
         *
         * @param value the IfcGeometricSet datatype to write
         */
        virtual bool visitIfcGeometricSet(IfcGeometricSet *value);
        /**
         * write the IfcGrid datatype to m_out.
         *
         * @param value the IfcGrid datatype to write
         */
        virtual bool visitIfcGrid(IfcGrid *value);
        /**
         * write the IfcGridAxis datatype to m_out.
         *
         * @param value the IfcGridAxis datatype to write
         */
        virtual bool visitIfcGridAxis(IfcGridAxis *value);
        /**
         * write the IfcGridPlacement datatype to m_out.
         *
         * @param value the IfcGridPlacement datatype to write
         */
        virtual bool visitIfcGridPlacement(IfcGridPlacement *value);
        /**
         * write the IfcGroup datatype to m_out.
         *
         * @param value the IfcGroup datatype to write
         */
        virtual bool visitIfcGroup(IfcGroup *value);
        /**
         * write the IfcHalfSpaceSolid datatype to m_out.
         *
         * @param value the IfcHalfSpaceSolid datatype to write
         */
        virtual bool visitIfcHalfSpaceSolid(IfcHalfSpaceSolid *value);
        /**
         * write the IfcHeatExchangerType datatype to m_out.
         *
         * @param value the IfcHeatExchangerType datatype to write
         */
        virtual bool visitIfcHeatExchangerType(IfcHeatExchangerType *value);
        /**
         * write the IfcHumidifierType datatype to m_out.
         *
         * @param value the IfcHumidifierType datatype to write
         */
        virtual bool visitIfcHumidifierType(IfcHumidifierType *value);
        /**
         * write the IfcHygroscopicMaterialProperties datatype to m_out.
         *
         * @param value the IfcHygroscopicMaterialProperties datatype to write
         */
        virtual bool visitIfcHygroscopicMaterialProperties(IfcHygroscopicMaterialProperties *value);
        /**
         * write the IfcImageTexture datatype to m_out.
         *
         * @param value the IfcImageTexture datatype to write
         */
        virtual bool visitIfcImageTexture(IfcImageTexture *value);
        /**
         * write the IfcInventory datatype to m_out.
         *
         * @param value the IfcInventory datatype to write
         */
        virtual bool visitIfcInventory(IfcInventory *value);
        /**
         * write the IfcIrregularTimeSeries datatype to m_out.
         *
         * @param value the IfcIrregularTimeSeries datatype to write
         */
        virtual bool visitIfcIrregularTimeSeries(IfcIrregularTimeSeries *value);
        /**
         * write the IfcIrregularTimeSeriesValue datatype to m_out.
         *
         * @param value the IfcIrregularTimeSeriesValue datatype to write
         */
        virtual bool visitIfcIrregularTimeSeriesValue(IfcIrregularTimeSeriesValue *value);
        /**
         * write the IfcIShapeProfileDef datatype to m_out.
         *
         * @param value the IfcIShapeProfileDef datatype to write
         */
        virtual bool visitIfcIShapeProfileDef(IfcIShapeProfileDef *value);
        /**
         * write the IfcJunctionBoxType datatype to m_out.
         *
         * @param value the IfcJunctionBoxType datatype to write
         */
        virtual bool visitIfcJunctionBoxType(IfcJunctionBoxType *value);
        /**
         * write the IfcLaborResource datatype to m_out.
         *
         * @param value the IfcLaborResource datatype to write
         */
        virtual bool visitIfcLaborResource(IfcLaborResource *value);
        /**
         * write the IfcLampType datatype to m_out.
         *
         * @param value the IfcLampType datatype to write
         */
        virtual bool visitIfcLampType(IfcLampType *value);
        /**
         * write the IfcLibraryInformation datatype to m_out.
         *
         * @param value the IfcLibraryInformation datatype to write
         */
        virtual bool visitIfcLibraryInformation(IfcLibraryInformation *value);
        /**
         * write the IfcLibraryReference datatype to m_out.
         *
         * @param value the IfcLibraryReference datatype to write
         */
        virtual bool visitIfcLibraryReference(IfcLibraryReference *value);
        /**
         * write the IfcLightDistributionData datatype to m_out.
         *
         * @param value the IfcLightDistributionData datatype to write
         */
        virtual bool visitIfcLightDistributionData(IfcLightDistributionData *value);
        /**
         * write the IfcLightFixtureType datatype to m_out.
         *
         * @param value the IfcLightFixtureType datatype to write
         */
        virtual bool visitIfcLightFixtureType(IfcLightFixtureType *value);
        /**
         * write the IfcLightIntensityDistribution datatype to m_out.
         *
         * @param value the IfcLightIntensityDistribution datatype to write
         */
        virtual bool visitIfcLightIntensityDistribution(IfcLightIntensityDistribution *value);
        /**
         * write the IfcLightSource datatype to m_out.
         *
         * @param value the IfcLightSource datatype to write
         */
        virtual bool visitIfcLightSource(IfcLightSource *value);
        /**
         * write the IfcLightSourceAmbient datatype to m_out.
         *
         * @param value the IfcLightSourceAmbient datatype to write
         */
        virtual bool visitIfcLightSourceAmbient(IfcLightSourceAmbient *value);
        /**
         * write the IfcLightSourceDirectional datatype to m_out.
         *
         * @param value the IfcLightSourceDirectional datatype to write
         */
        virtual bool visitIfcLightSourceDirectional(IfcLightSourceDirectional *value);
        /**
         * write the IfcLightSourceGoniometric datatype to m_out.
         *
         * @param value the IfcLightSourceGoniometric datatype to write
         */
        virtual bool visitIfcLightSourceGoniometric(IfcLightSourceGoniometric *value);
        /**
         * write the IfcLightSourcePositional datatype to m_out.
         *
         * @param value the IfcLightSourcePositional datatype to write
         */
        virtual bool visitIfcLightSourcePositional(IfcLightSourcePositional *value);
        /**
         * write the IfcLightSourceSpot datatype to m_out.
         *
         * @param value the IfcLightSourceSpot datatype to write
         */
        virtual bool visitIfcLightSourceSpot(IfcLightSourceSpot *value);
        /**
         * write the IfcLine datatype to m_out.
         *
         * @param value the IfcLine datatype to write
         */
        virtual bool visitIfcLine(IfcLine *value);
        /**
         * write the IfcLinearDimension datatype to m_out.
         *
         * @param value the IfcLinearDimension datatype to write
         */
        virtual bool visitIfcLinearDimension(IfcLinearDimension *value);
        /**
         * write the IfcLocalPlacement datatype to m_out.
         *
         * @param value the IfcLocalPlacement datatype to write
         */
        virtual bool visitIfcLocalPlacement(IfcLocalPlacement *value);
        /**
         * write the IfcLocalTime datatype to m_out.
         *
         * @param value the IfcLocalTime datatype to write
         */
        virtual bool visitIfcLocalTime(IfcLocalTime *value);
        /**
         * write the IfcLoop datatype to m_out.
         *
         * @param value the IfcLoop datatype to write
         */
        virtual bool visitIfcLoop(IfcLoop *value);
        /**
         * write the IfcLShapeProfileDef datatype to m_out.
         *
         * @param value the IfcLShapeProfileDef datatype to write
         */
        virtual bool visitIfcLShapeProfileDef(IfcLShapeProfileDef *value);
        /**
         * write the IfcManifoldSolidBrep datatype to m_out.
         *
         * @param value the IfcManifoldSolidBrep datatype to write
         */
        virtual bool visitIfcManifoldSolidBrep(IfcManifoldSolidBrep *value);
        /**
         * write the IfcMappedItem datatype to m_out.
         *
         * @param value the IfcMappedItem datatype to write
         */
        virtual bool visitIfcMappedItem(IfcMappedItem *value);
        /**
         * write the IfcMaterial datatype to m_out.
         *
         * @param value the IfcMaterial datatype to write
         */
        virtual bool visitIfcMaterial(IfcMaterial *value);
        /**
         * write the IfcMaterialClassificationRelationship datatype to m_out.
         *
         * @param value the IfcMaterialClassificationRelationship datatype to write
         */
        virtual bool visitIfcMaterialClassificationRelationship(IfcMaterialClassificationRelationship *value);
        /**
         * write the IfcMaterialDefinitionRepresentation datatype to m_out.
         *
         * @param value the IfcMaterialDefinitionRepresentation datatype to write
         */
        virtual bool visitIfcMaterialDefinitionRepresentation(IfcMaterialDefinitionRepresentation *value);
        /**
         * write the IfcMaterialLayer datatype to m_out.
         *
         * @param value the IfcMaterialLayer datatype to write
         */
        virtual bool visitIfcMaterialLayer(IfcMaterialLayer *value);
        /**
         * write the IfcMaterialLayerSet datatype to m_out.
         *
         * @param value the IfcMaterialLayerSet datatype to write
         */
        virtual bool visitIfcMaterialLayerSet(IfcMaterialLayerSet *value);
        /**
         * write the IfcMaterialLayerSetUsage datatype to m_out.
         *
         * @param value the IfcMaterialLayerSetUsage datatype to write
         */
        virtual bool visitIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage *value);
        /**
         * write the IfcMaterialList datatype to m_out.
         *
         * @param value the IfcMaterialList datatype to write
         */
        virtual bool visitIfcMaterialList(IfcMaterialList *value);
        /**
         * write the IfcMaterialProperties datatype to m_out.
         *
         * @param value the IfcMaterialProperties datatype to write
         */
        virtual bool visitIfcMaterialProperties(IfcMaterialProperties *value);
        /**
         * write the IfcMeasureWithUnit datatype to m_out.
         *
         * @param value the IfcMeasureWithUnit datatype to write
         */
        virtual bool visitIfcMeasureWithUnit(IfcMeasureWithUnit *value);
        /**
         * write the IfcMechanicalConcreteMaterialProperties datatype to m_out.
         *
         * @param value the IfcMechanicalConcreteMaterialProperties datatype to write
         */
        virtual bool visitIfcMechanicalConcreteMaterialProperties(IfcMechanicalConcreteMaterialProperties *value);
        /**
         * write the IfcMechanicalFastener datatype to m_out.
         *
         * @param value the IfcMechanicalFastener datatype to write
         */
        virtual bool visitIfcMechanicalFastener(IfcMechanicalFastener *value);
        /**
         * write the IfcMechanicalFastenerType datatype to m_out.
         *
         * @param value the IfcMechanicalFastenerType datatype to write
         */
        virtual bool visitIfcMechanicalFastenerType(IfcMechanicalFastenerType *value);
        /**
         * write the IfcMechanicalMaterialProperties datatype to m_out.
         *
         * @param value the IfcMechanicalMaterialProperties datatype to write
         */
        virtual bool visitIfcMechanicalMaterialProperties(IfcMechanicalMaterialProperties *value);
        /**
         * write the IfcMechanicalSteelMaterialProperties datatype to m_out.
         *
         * @param value the IfcMechanicalSteelMaterialProperties datatype to write
         */
        virtual bool visitIfcMechanicalSteelMaterialProperties(IfcMechanicalSteelMaterialProperties *value);
        /**
         * write the IfcMember datatype to m_out.
         *
         * @param value the IfcMember datatype to write
         */
        virtual bool visitIfcMember(IfcMember *value);
        /**
         * write the IfcMemberType datatype to m_out.
         *
         * @param value the IfcMemberType datatype to write
         */
        virtual bool visitIfcMemberType(IfcMemberType *value);
        /**
         * write the IfcMetric datatype to m_out.
         *
         * @param value the IfcMetric datatype to write
         */
        virtual bool visitIfcMetric(IfcMetric *value);
        /**
         * write the IfcMonetaryUnit datatype to m_out.
         *
         * @param value the IfcMonetaryUnit datatype to write
         */
        virtual bool visitIfcMonetaryUnit(IfcMonetaryUnit *value);
        /**
         * write the IfcMotorConnectionType datatype to m_out.
         *
         * @param value the IfcMotorConnectionType datatype to write
         */
        virtual bool visitIfcMotorConnectionType(IfcMotorConnectionType *value);
        /**
         * write the IfcMove datatype to m_out.
         *
         * @param value the IfcMove datatype to write
         */
        virtual bool visitIfcMove(IfcMove *value);
        /**
         * write the IfcNamedUnit datatype to m_out.
         *
         * @param value the IfcNamedUnit datatype to write
         */
        virtual bool visitIfcNamedUnit(IfcNamedUnit *value);
        /**
         * write the IfcObject datatype to m_out.
         *
         * @param value the IfcObject datatype to write
         */
        virtual bool visitIfcObject(IfcObject *value);
        /**
         * write the IfcObjectDefinition datatype to m_out.
         *
         * @param value the IfcObjectDefinition datatype to write
         */
        virtual bool visitIfcObjectDefinition(IfcObjectDefinition *value);
        /**
         * write the IfcObjective datatype to m_out.
         *
         * @param value the IfcObjective datatype to write
         */
        virtual bool visitIfcObjective(IfcObjective *value);
        /**
         * write the IfcObjectPlacement datatype to m_out.
         *
         * @param value the IfcObjectPlacement datatype to write
         */
        virtual bool visitIfcObjectPlacement(IfcObjectPlacement *value);
        /**
         * write the IfcOccupant datatype to m_out.
         *
         * @param value the IfcOccupant datatype to write
         */
        virtual bool visitIfcOccupant(IfcOccupant *value);
        /**
         * write the IfcOffsetCurve2D datatype to m_out.
         *
         * @param value the IfcOffsetCurve2D datatype to write
         */
        virtual bool visitIfcOffsetCurve2D(IfcOffsetCurve2D *value);
        /**
         * write the IfcOffsetCurve3D datatype to m_out.
         *
         * @param value the IfcOffsetCurve3D datatype to write
         */
        virtual bool visitIfcOffsetCurve3D(IfcOffsetCurve3D *value);
        /**
         * write the IfcOneDirectionRepeatFactor datatype to m_out.
         *
         * @param value the IfcOneDirectionRepeatFactor datatype to write
         */
        virtual bool visitIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor *value);
        /**
         * write the IfcOpeningElement datatype to m_out.
         *
         * @param value the IfcOpeningElement datatype to write
         */
        virtual bool visitIfcOpeningElement(IfcOpeningElement *value);
        /**
         * write the IfcOpenShell datatype to m_out.
         *
         * @param value the IfcOpenShell datatype to write
         */
        virtual bool visitIfcOpenShell(IfcOpenShell *value);
        /**
         * write the IfcOpticalMaterialProperties datatype to m_out.
         *
         * @param value the IfcOpticalMaterialProperties datatype to write
         */
        virtual bool visitIfcOpticalMaterialProperties(IfcOpticalMaterialProperties *value);
        /**
         * write the IfcOrderAction datatype to m_out.
         *
         * @param value the IfcOrderAction datatype to write
         */
        virtual bool visitIfcOrderAction(IfcOrderAction *value);
        /**
         * write the IfcOrganization datatype to m_out.
         *
         * @param value the IfcOrganization datatype to write
         */
        virtual bool visitIfcOrganization(IfcOrganization *value);
        /**
         * write the IfcOrganizationRelationship datatype to m_out.
         *
         * @param value the IfcOrganizationRelationship datatype to write
         */
        virtual bool visitIfcOrganizationRelationship(IfcOrganizationRelationship *value);
        /**
         * write the IfcOrientedEdge datatype to m_out.
         *
         * @param value the IfcOrientedEdge datatype to write
         */
        virtual bool visitIfcOrientedEdge(IfcOrientedEdge *value);
        /**
         * write the IfcOutletType datatype to m_out.
         *
         * @param value the IfcOutletType datatype to write
         */
        virtual bool visitIfcOutletType(IfcOutletType *value);
        /**
         * write the IfcOwnerHistory datatype to m_out.
         *
         * @param value the IfcOwnerHistory datatype to write
         */
        virtual bool visitIfcOwnerHistory(IfcOwnerHistory *value);
        /**
         * write the IfcParameterizedProfileDef datatype to m_out.
         *
         * @param value the IfcParameterizedProfileDef datatype to write
         */
        virtual bool visitIfcParameterizedProfileDef(IfcParameterizedProfileDef *value);
        /**
         * write the IfcPath datatype to m_out.
         *
         * @param value the IfcPath datatype to write
         */
        virtual bool visitIfcPath(IfcPath *value);
        /**
         * write the IfcPerformanceHistory datatype to m_out.
         *
         * @param value the IfcPerformanceHistory datatype to write
         */
        virtual bool visitIfcPerformanceHistory(IfcPerformanceHistory *value);
        /**
         * write the IfcPermeableCoveringProperties datatype to m_out.
         *
         * @param value the IfcPermeableCoveringProperties datatype to write
         */
        virtual bool visitIfcPermeableCoveringProperties(IfcPermeableCoveringProperties *value);
        /**
         * write the IfcPermit datatype to m_out.
         *
         * @param value the IfcPermit datatype to write
         */
        virtual bool visitIfcPermit(IfcPermit *value);
        /**
         * write the IfcPerson datatype to m_out.
         *
         * @param value the IfcPerson datatype to write
         */
        virtual bool visitIfcPerson(IfcPerson *value);
        /**
         * write the IfcPersonAndOrganization datatype to m_out.
         *
         * @param value the IfcPersonAndOrganization datatype to write
         */
        virtual bool visitIfcPersonAndOrganization(IfcPersonAndOrganization *value);
        /**
         * write the IfcPhysicalComplexQuantity datatype to m_out.
         *
         * @param value the IfcPhysicalComplexQuantity datatype to write
         */
        virtual bool visitIfcPhysicalComplexQuantity(IfcPhysicalComplexQuantity *value);
        /**
         * write the IfcPhysicalQuantity datatype to m_out.
         *
         * @param value the IfcPhysicalQuantity datatype to write
         */
        virtual bool visitIfcPhysicalQuantity(IfcPhysicalQuantity *value);
        /**
         * write the IfcPhysicalSimpleQuantity datatype to m_out.
         *
         * @param value the IfcPhysicalSimpleQuantity datatype to write
         */
        virtual bool visitIfcPhysicalSimpleQuantity(IfcPhysicalSimpleQuantity *value);
        /**
         * write the IfcPile datatype to m_out.
         *
         * @param value the IfcPile datatype to write
         */
        virtual bool visitIfcPile(IfcPile *value);
        /**
         * write the IfcPipeFittingType datatype to m_out.
         *
         * @param value the IfcPipeFittingType datatype to write
         */
        virtual bool visitIfcPipeFittingType(IfcPipeFittingType *value);
        /**
         * write the IfcPipeSegmentType datatype to m_out.
         *
         * @param value the IfcPipeSegmentType datatype to write
         */
        virtual bool visitIfcPipeSegmentType(IfcPipeSegmentType *value);
        /**
         * write the IfcPixelTexture datatype to m_out.
         *
         * @param value the IfcPixelTexture datatype to write
         */
        virtual bool visitIfcPixelTexture(IfcPixelTexture *value);
        /**
         * write the IfcPlacement datatype to m_out.
         *
         * @param value the IfcPlacement datatype to write
         */
        virtual bool visitIfcPlacement(IfcPlacement *value);
        /**
         * write the IfcPlanarBox datatype to m_out.
         *
         * @param value the IfcPlanarBox datatype to write
         */
        virtual bool visitIfcPlanarBox(IfcPlanarBox *value);
        /**
         * write the IfcPlanarExtent datatype to m_out.
         *
         * @param value the IfcPlanarExtent datatype to write
         */
        virtual bool visitIfcPlanarExtent(IfcPlanarExtent *value);
        /**
         * write the IfcPlane datatype to m_out.
         *
         * @param value the IfcPlane datatype to write
         */
        virtual bool visitIfcPlane(IfcPlane *value);
        /**
         * write the IfcPlate datatype to m_out.
         *
         * @param value the IfcPlate datatype to write
         */
        virtual bool visitIfcPlate(IfcPlate *value);
        /**
         * write the IfcPlateType datatype to m_out.
         *
         * @param value the IfcPlateType datatype to write
         */
        virtual bool visitIfcPlateType(IfcPlateType *value);
        /**
         * write the IfcPoint datatype to m_out.
         *
         * @param value the IfcPoint datatype to write
         */
        virtual bool visitIfcPoint(IfcPoint *value);
        /**
         * write the IfcPointOnCurve datatype to m_out.
         *
         * @param value the IfcPointOnCurve datatype to write
         */
        virtual bool visitIfcPointOnCurve(IfcPointOnCurve *value);
        /**
         * write the IfcPointOnSurface datatype to m_out.
         *
         * @param value the IfcPointOnSurface datatype to write
         */
        virtual bool visitIfcPointOnSurface(IfcPointOnSurface *value);
        /**
         * write the IfcPolygonalBoundedHalfSpace datatype to m_out.
         *
         * @param value the IfcPolygonalBoundedHalfSpace datatype to write
         */
        virtual bool visitIfcPolygonalBoundedHalfSpace(IfcPolygonalBoundedHalfSpace *value);
        /**
         * write the IfcPolyline datatype to m_out.
         *
         * @param value the IfcPolyline datatype to write
         */
        virtual bool visitIfcPolyline(IfcPolyline *value);
        /**
         * write the IfcPolyLoop datatype to m_out.
         *
         * @param value the IfcPolyLoop datatype to write
         */
        virtual bool visitIfcPolyLoop(IfcPolyLoop *value);
        /**
         * write the IfcPort datatype to m_out.
         *
         * @param value the IfcPort datatype to write
         */
        virtual bool visitIfcPort(IfcPort *value);
        /**
         * write the IfcPostalAddress datatype to m_out.
         *
         * @param value the IfcPostalAddress datatype to write
         */
        virtual bool visitIfcPostalAddress(IfcPostalAddress *value);
        /**
         * write the IfcPreDefinedColour datatype to m_out.
         *
         * @param value the IfcPreDefinedColour datatype to write
         */
        virtual bool visitIfcPreDefinedColour(IfcPreDefinedColour *value);
        /**
         * write the IfcPreDefinedCurveFont datatype to m_out.
         *
         * @param value the IfcPreDefinedCurveFont datatype to write
         */
        virtual bool visitIfcPreDefinedCurveFont(IfcPreDefinedCurveFont *value);
        /**
         * write the IfcPreDefinedDimensionSymbol datatype to m_out.
         *
         * @param value the IfcPreDefinedDimensionSymbol datatype to write
         */
        virtual bool visitIfcPreDefinedDimensionSymbol(IfcPreDefinedDimensionSymbol *value);
        /**
         * write the IfcPreDefinedItem datatype to m_out.
         *
         * @param value the IfcPreDefinedItem datatype to write
         */
        virtual bool visitIfcPreDefinedItem(IfcPreDefinedItem *value);
        /**
         * write the IfcPreDefinedPointMarkerSymbol datatype to m_out.
         *
         * @param value the IfcPreDefinedPointMarkerSymbol datatype to write
         */
        virtual bool visitIfcPreDefinedPointMarkerSymbol(IfcPreDefinedPointMarkerSymbol *value);
        /**
         * write the IfcPreDefinedSymbol datatype to m_out.
         *
         * @param value the IfcPreDefinedSymbol datatype to write
         */
        virtual bool visitIfcPreDefinedSymbol(IfcPreDefinedSymbol *value);
        /**
         * write the IfcPreDefinedTerminatorSymbol datatype to m_out.
         *
         * @param value the IfcPreDefinedTerminatorSymbol datatype to write
         */
        virtual bool visitIfcPreDefinedTerminatorSymbol(IfcPreDefinedTerminatorSymbol *value);
        /**
         * write the IfcPreDefinedTextFont datatype to m_out.
         *
         * @param value the IfcPreDefinedTextFont datatype to write
         */
        virtual bool visitIfcPreDefinedTextFont(IfcPreDefinedTextFont *value);
        /**
         * write the IfcPresentationLayerAssignment datatype to m_out.
         *
         * @param value the IfcPresentationLayerAssignment datatype to write
         */
        virtual bool visitIfcPresentationLayerAssignment(IfcPresentationLayerAssignment *value);
        /**
         * write the IfcPresentationLayerWithStyle datatype to m_out.
         *
         * @param value the IfcPresentationLayerWithStyle datatype to write
         */
        virtual bool visitIfcPresentationLayerWithStyle(IfcPresentationLayerWithStyle *value);
        /**
         * write the IfcPresentationStyle datatype to m_out.
         *
         * @param value the IfcPresentationStyle datatype to write
         */
        virtual bool visitIfcPresentationStyle(IfcPresentationStyle *value);
        /**
         * write the IfcPresentationStyleAssignment datatype to m_out.
         *
         * @param value the IfcPresentationStyleAssignment datatype to write
         */
        virtual bool visitIfcPresentationStyleAssignment(IfcPresentationStyleAssignment *value);
        /**
         * write the IfcProcedure datatype to m_out.
         *
         * @param value the IfcProcedure datatype to write
         */
        virtual bool visitIfcProcedure(IfcProcedure *value);
        /**
         * write the IfcProcess datatype to m_out.
         *
         * @param value the IfcProcess datatype to write
         */
        virtual bool visitIfcProcess(IfcProcess *value);
        /**
         * write the IfcProduct datatype to m_out.
         *
         * @param value the IfcProduct datatype to write
         */
        virtual bool visitIfcProduct(IfcProduct *value);
        /**
         * write the IfcProductDefinitionShape datatype to m_out.
         *
         * @param value the IfcProductDefinitionShape datatype to write
         */
        virtual bool visitIfcProductDefinitionShape(IfcProductDefinitionShape *value);
        /**
         * write the IfcProductRepresentation datatype to m_out.
         *
         * @param value the IfcProductRepresentation datatype to write
         */
        virtual bool visitIfcProductRepresentation(IfcProductRepresentation *value);
        /**
         * write the IfcProductsOfCombustionProperties datatype to m_out.
         *
         * @param value the IfcProductsOfCombustionProperties datatype to write
         */
        virtual bool visitIfcProductsOfCombustionProperties(IfcProductsOfCombustionProperties *value);
        /**
         * write the IfcProfileDef datatype to m_out.
         *
         * @param value the IfcProfileDef datatype to write
         */
        virtual bool visitIfcProfileDef(IfcProfileDef *value);
        /**
         * write the IfcProfileProperties datatype to m_out.
         *
         * @param value the IfcProfileProperties datatype to write
         */
        virtual bool visitIfcProfileProperties(IfcProfileProperties *value);
        /**
         * write the IfcProject datatype to m_out.
         *
         * @param value the IfcProject datatype to write
         */
        virtual bool visitIfcProject(IfcProject *value);
        /**
         * write the IfcProjectionCurve datatype to m_out.
         *
         * @param value the IfcProjectionCurve datatype to write
         */
        virtual bool visitIfcProjectionCurve(IfcProjectionCurve *value);
        /**
         * write the IfcProjectionElement datatype to m_out.
         *
         * @param value the IfcProjectionElement datatype to write
         */
        virtual bool visitIfcProjectionElement(IfcProjectionElement *value);
        /**
         * write the IfcProjectOrder datatype to m_out.
         *
         * @param value the IfcProjectOrder datatype to write
         */
        virtual bool visitIfcProjectOrder(IfcProjectOrder *value);
        /**
         * write the IfcProjectOrderRecord datatype to m_out.
         *
         * @param value the IfcProjectOrderRecord datatype to write
         */
        virtual bool visitIfcProjectOrderRecord(IfcProjectOrderRecord *value);
        /**
         * write the IfcProperty datatype to m_out.
         *
         * @param value the IfcProperty datatype to write
         */
        virtual bool visitIfcProperty(IfcProperty *value);
        /**
         * write the IfcPropertyBoundedValue datatype to m_out.
         *
         * @param value the IfcPropertyBoundedValue datatype to write
         */
        virtual bool visitIfcPropertyBoundedValue(IfcPropertyBoundedValue *value);
        /**
         * write the IfcPropertyConstraintRelationship datatype to m_out.
         *
         * @param value the IfcPropertyConstraintRelationship datatype to write
         */
        virtual bool visitIfcPropertyConstraintRelationship(IfcPropertyConstraintRelationship *value);
        /**
         * write the IfcPropertyDefinition datatype to m_out.
         *
         * @param value the IfcPropertyDefinition datatype to write
         */
        virtual bool visitIfcPropertyDefinition(IfcPropertyDefinition *value);
        /**
         * write the IfcPropertyDependencyRelationship datatype to m_out.
         *
         * @param value the IfcPropertyDependencyRelationship datatype to write
         */
        virtual bool visitIfcPropertyDependencyRelationship(IfcPropertyDependencyRelationship *value);
        /**
         * write the IfcPropertyEnumeratedValue datatype to m_out.
         *
         * @param value the IfcPropertyEnumeratedValue datatype to write
         */
        virtual bool visitIfcPropertyEnumeratedValue(IfcPropertyEnumeratedValue *value);
        /**
         * write the IfcPropertyEnumeration datatype to m_out.
         *
         * @param value the IfcPropertyEnumeration datatype to write
         */
        virtual bool visitIfcPropertyEnumeration(IfcPropertyEnumeration *value);
        /**
         * write the IfcPropertyListValue datatype to m_out.
         *
         * @param value the IfcPropertyListValue datatype to write
         */
        virtual bool visitIfcPropertyListValue(IfcPropertyListValue *value);
        /**
         * write the IfcPropertyReferenceValue datatype to m_out.
         *
         * @param value the IfcPropertyReferenceValue datatype to write
         */
        virtual bool visitIfcPropertyReferenceValue(IfcPropertyReferenceValue *value);
        /**
         * write the IfcPropertySet datatype to m_out.
         *
         * @param value the IfcPropertySet datatype to write
         */
        virtual bool visitIfcPropertySet(IfcPropertySet *value);
        /**
         * write the IfcPropertySetDefinition datatype to m_out.
         *
         * @param value the IfcPropertySetDefinition datatype to write
         */
        virtual bool visitIfcPropertySetDefinition(IfcPropertySetDefinition *value);
        /**
         * write the IfcPropertySingleValue datatype to m_out.
         *
         * @param value the IfcPropertySingleValue datatype to write
         */
        virtual bool visitIfcPropertySingleValue(IfcPropertySingleValue *value);
        /**
         * write the IfcPropertyTableValue datatype to m_out.
         *
         * @param value the IfcPropertyTableValue datatype to write
         */
        virtual bool visitIfcPropertyTableValue(IfcPropertyTableValue *value);
        /**
         * write the IfcProtectiveDeviceType datatype to m_out.
         *
         * @param value the IfcProtectiveDeviceType datatype to write
         */
        virtual bool visitIfcProtectiveDeviceType(IfcProtectiveDeviceType *value);
        /**
         * write the IfcProxy datatype to m_out.
         *
         * @param value the IfcProxy datatype to write
         */
        virtual bool visitIfcProxy(IfcProxy *value);
        /**
         * write the IfcPumpType datatype to m_out.
         *
         * @param value the IfcPumpType datatype to write
         */
        virtual bool visitIfcPumpType(IfcPumpType *value);
        /**
         * write the IfcQuantityArea datatype to m_out.
         *
         * @param value the IfcQuantityArea datatype to write
         */
        virtual bool visitIfcQuantityArea(IfcQuantityArea *value);
        /**
         * write the IfcQuantityCount datatype to m_out.
         *
         * @param value the IfcQuantityCount datatype to write
         */
        virtual bool visitIfcQuantityCount(IfcQuantityCount *value);
        /**
         * write the IfcQuantityLength datatype to m_out.
         *
         * @param value the IfcQuantityLength datatype to write
         */
        virtual bool visitIfcQuantityLength(IfcQuantityLength *value);
        /**
         * write the IfcQuantityTime datatype to m_out.
         *
         * @param value the IfcQuantityTime datatype to write
         */
        virtual bool visitIfcQuantityTime(IfcQuantityTime *value);
        /**
         * write the IfcQuantityVolume datatype to m_out.
         *
         * @param value the IfcQuantityVolume datatype to write
         */
        virtual bool visitIfcQuantityVolume(IfcQuantityVolume *value);
        /**
         * write the IfcQuantityWeight datatype to m_out.
         *
         * @param value the IfcQuantityWeight datatype to write
         */
        virtual bool visitIfcQuantityWeight(IfcQuantityWeight *value);
        /**
         * write the IfcRadiusDimension datatype to m_out.
         *
         * @param value the IfcRadiusDimension datatype to write
         */
        virtual bool visitIfcRadiusDimension(IfcRadiusDimension *value);
        /**
         * write the IfcRailing datatype to m_out.
         *
         * @param value the IfcRailing datatype to write
         */
        virtual bool visitIfcRailing(IfcRailing *value);
        /**
         * write the IfcRailingType datatype to m_out.
         *
         * @param value the IfcRailingType datatype to write
         */
        virtual bool visitIfcRailingType(IfcRailingType *value);
        /**
         * write the IfcRamp datatype to m_out.
         *
         * @param value the IfcRamp datatype to write
         */
        virtual bool visitIfcRamp(IfcRamp *value);
        /**
         * write the IfcRampFlight datatype to m_out.
         *
         * @param value the IfcRampFlight datatype to write
         */
        virtual bool visitIfcRampFlight(IfcRampFlight *value);
        /**
         * write the IfcRampFlightType datatype to m_out.
         *
         * @param value the IfcRampFlightType datatype to write
         */
        virtual bool visitIfcRampFlightType(IfcRampFlightType *value);
        /**
         * write the IfcRationalBezierCurve datatype to m_out.
         *
         * @param value the IfcRationalBezierCurve datatype to write
         */
        virtual bool visitIfcRationalBezierCurve(IfcRationalBezierCurve *value);
        /**
         * write the IfcRectangleHollowProfileDef datatype to m_out.
         *
         * @param value the IfcRectangleHollowProfileDef datatype to write
         */
        virtual bool visitIfcRectangleHollowProfileDef(IfcRectangleHollowProfileDef *value);
        /**
         * write the IfcRectangleProfileDef datatype to m_out.
         *
         * @param value the IfcRectangleProfileDef datatype to write
         */
        virtual bool visitIfcRectangleProfileDef(IfcRectangleProfileDef *value);
        /**
         * write the IfcRectangularPyramid datatype to m_out.
         *
         * @param value the IfcRectangularPyramid datatype to write
         */
        virtual bool visitIfcRectangularPyramid(IfcRectangularPyramid *value);
        /**
         * write the IfcRectangularTrimmedSurface datatype to m_out.
         *
         * @param value the IfcRectangularTrimmedSurface datatype to write
         */
        virtual bool visitIfcRectangularTrimmedSurface(IfcRectangularTrimmedSurface *value);
        /**
         * write the IfcReferencesValueDocument datatype to m_out.
         *
         * @param value the IfcReferencesValueDocument datatype to write
         */
        virtual bool visitIfcReferencesValueDocument(IfcReferencesValueDocument *value);
        /**
         * write the IfcRegularTimeSeries datatype to m_out.
         *
         * @param value the IfcRegularTimeSeries datatype to write
         */
        virtual bool visitIfcRegularTimeSeries(IfcRegularTimeSeries *value);
        /**
         * write the IfcReinforcementBarProperties datatype to m_out.
         *
         * @param value the IfcReinforcementBarProperties datatype to write
         */
        virtual bool visitIfcReinforcementBarProperties(IfcReinforcementBarProperties *value);
        /**
         * write the IfcReinforcementDefinitionProperties datatype to m_out.
         *
         * @param value the IfcReinforcementDefinitionProperties datatype to write
         */
        virtual bool visitIfcReinforcementDefinitionProperties(IfcReinforcementDefinitionProperties *value);
        /**
         * write the IfcReinforcingBar datatype to m_out.
         *
         * @param value the IfcReinforcingBar datatype to write
         */
        virtual bool visitIfcReinforcingBar(IfcReinforcingBar *value);
        /**
         * write the IfcReinforcingElement datatype to m_out.
         *
         * @param value the IfcReinforcingElement datatype to write
         */
        virtual bool visitIfcReinforcingElement(IfcReinforcingElement *value);
        /**
         * write the IfcReinforcingMesh datatype to m_out.
         *
         * @param value the IfcReinforcingMesh datatype to write
         */
        virtual bool visitIfcReinforcingMesh(IfcReinforcingMesh *value);
        /**
         * write the IfcRelAggregates datatype to m_out.
         *
         * @param value the IfcRelAggregates datatype to write
         */
        virtual bool visitIfcRelAggregates(IfcRelAggregates *value);
        /**
         * write the IfcRelAssigns datatype to m_out.
         *
         * @param value the IfcRelAssigns datatype to write
         */
        virtual bool visitIfcRelAssigns(IfcRelAssigns *value);
        /**
         * write the IfcRelAssignsTasks datatype to m_out.
         *
         * @param value the IfcRelAssignsTasks datatype to write
         */
        virtual bool visitIfcRelAssignsTasks(IfcRelAssignsTasks *value);
        /**
         * write the IfcRelAssignsToActor datatype to m_out.
         *
         * @param value the IfcRelAssignsToActor datatype to write
         */
        virtual bool visitIfcRelAssignsToActor(IfcRelAssignsToActor *value);
        /**
         * write the IfcRelAssignsToControl datatype to m_out.
         *
         * @param value the IfcRelAssignsToControl datatype to write
         */
        virtual bool visitIfcRelAssignsToControl(IfcRelAssignsToControl *value);
        /**
         * write the IfcRelAssignsToGroup datatype to m_out.
         *
         * @param value the IfcRelAssignsToGroup datatype to write
         */
        virtual bool visitIfcRelAssignsToGroup(IfcRelAssignsToGroup *value);
        /**
         * write the IfcRelAssignsToProcess datatype to m_out.
         *
         * @param value the IfcRelAssignsToProcess datatype to write
         */
        virtual bool visitIfcRelAssignsToProcess(IfcRelAssignsToProcess *value);
        /**
         * write the IfcRelAssignsToProduct datatype to m_out.
         *
         * @param value the IfcRelAssignsToProduct datatype to write
         */
        virtual bool visitIfcRelAssignsToProduct(IfcRelAssignsToProduct *value);
        /**
         * write the IfcRelAssignsToProjectOrder datatype to m_out.
         *
         * @param value the IfcRelAssignsToProjectOrder datatype to write
         */
        virtual bool visitIfcRelAssignsToProjectOrder(IfcRelAssignsToProjectOrder *value);
        /**
         * write the IfcRelAssignsToResource datatype to m_out.
         *
         * @param value the IfcRelAssignsToResource datatype to write
         */
        virtual bool visitIfcRelAssignsToResource(IfcRelAssignsToResource *value);
        /**
         * write the IfcRelAssociates datatype to m_out.
         *
         * @param value the IfcRelAssociates datatype to write
         */
        virtual bool visitIfcRelAssociates(IfcRelAssociates *value);
        /**
         * write the IfcRelAssociatesAppliedValue datatype to m_out.
         *
         * @param value the IfcRelAssociatesAppliedValue datatype to write
         */
        virtual bool visitIfcRelAssociatesAppliedValue(IfcRelAssociatesAppliedValue *value);
        /**
         * write the IfcRelAssociatesApproval datatype to m_out.
         *
         * @param value the IfcRelAssociatesApproval datatype to write
         */
        virtual bool visitIfcRelAssociatesApproval(IfcRelAssociatesApproval *value);
        /**
         * write the IfcRelAssociatesClassification datatype to m_out.
         *
         * @param value the IfcRelAssociatesClassification datatype to write
         */
        virtual bool visitIfcRelAssociatesClassification(IfcRelAssociatesClassification *value);
        /**
         * write the IfcRelAssociatesConstraint datatype to m_out.
         *
         * @param value the IfcRelAssociatesConstraint datatype to write
         */
        virtual bool visitIfcRelAssociatesConstraint(IfcRelAssociatesConstraint *value);
        /**
         * write the IfcRelAssociatesDocument datatype to m_out.
         *
         * @param value the IfcRelAssociatesDocument datatype to write
         */
        virtual bool visitIfcRelAssociatesDocument(IfcRelAssociatesDocument *value);
        /**
         * write the IfcRelAssociatesLibrary datatype to m_out.
         *
         * @param value the IfcRelAssociatesLibrary datatype to write
         */
        virtual bool visitIfcRelAssociatesLibrary(IfcRelAssociatesLibrary *value);
        /**
         * write the IfcRelAssociatesMaterial datatype to m_out.
         *
         * @param value the IfcRelAssociatesMaterial datatype to write
         */
        virtual bool visitIfcRelAssociatesMaterial(IfcRelAssociatesMaterial *value);
        /**
         * write the IfcRelAssociatesProfileProperties datatype to m_out.
         *
         * @param value the IfcRelAssociatesProfileProperties datatype to write
         */
        virtual bool visitIfcRelAssociatesProfileProperties(IfcRelAssociatesProfileProperties *value);
        /**
         * write the IfcRelationship datatype to m_out.
         *
         * @param value the IfcRelationship datatype to write
         */
        virtual bool visitIfcRelationship(IfcRelationship *value);
        /**
         * write the IfcRelaxation datatype to m_out.
         *
         * @param value the IfcRelaxation datatype to write
         */
        virtual bool visitIfcRelaxation(IfcRelaxation *value);
        /**
         * write the IfcRelConnects datatype to m_out.
         *
         * @param value the IfcRelConnects datatype to write
         */
        virtual bool visitIfcRelConnects(IfcRelConnects *value);
        /**
         * write the IfcRelConnectsElements datatype to m_out.
         *
         * @param value the IfcRelConnectsElements datatype to write
         */
        virtual bool visitIfcRelConnectsElements(IfcRelConnectsElements *value);
        /**
         * write the IfcRelConnectsPathElements datatype to m_out.
         *
         * @param value the IfcRelConnectsPathElements datatype to write
         */
        virtual bool visitIfcRelConnectsPathElements(IfcRelConnectsPathElements *value);
        /**
         * write the IfcRelConnectsPorts datatype to m_out.
         *
         * @param value the IfcRelConnectsPorts datatype to write
         */
        virtual bool visitIfcRelConnectsPorts(IfcRelConnectsPorts *value);
        /**
         * write the IfcRelConnectsPortToElement datatype to m_out.
         *
         * @param value the IfcRelConnectsPortToElement datatype to write
         */
        virtual bool visitIfcRelConnectsPortToElement(IfcRelConnectsPortToElement *value);
        /**
         * write the IfcRelConnectsStructuralActivity datatype to m_out.
         *
         * @param value the IfcRelConnectsStructuralActivity datatype to write
         */
        virtual bool visitIfcRelConnectsStructuralActivity(IfcRelConnectsStructuralActivity *value);
        /**
         * write the IfcRelConnectsStructuralElement datatype to m_out.
         *
         * @param value the IfcRelConnectsStructuralElement datatype to write
         */
        virtual bool visitIfcRelConnectsStructuralElement(IfcRelConnectsStructuralElement *value);
        /**
         * write the IfcRelConnectsStructuralMember datatype to m_out.
         *
         * @param value the IfcRelConnectsStructuralMember datatype to write
         */
        virtual bool visitIfcRelConnectsStructuralMember(IfcRelConnectsStructuralMember *value);
        /**
         * write the IfcRelConnectsWithEccentricity datatype to m_out.
         *
         * @param value the IfcRelConnectsWithEccentricity datatype to write
         */
        virtual bool visitIfcRelConnectsWithEccentricity(IfcRelConnectsWithEccentricity *value);
        /**
         * write the IfcRelConnectsWithRealizingElements datatype to m_out.
         *
         * @param value the IfcRelConnectsWithRealizingElements datatype to write
         */
        virtual bool visitIfcRelConnectsWithRealizingElements(IfcRelConnectsWithRealizingElements *value);
        /**
         * write the IfcRelContainedInSpatialStructure datatype to m_out.
         *
         * @param value the IfcRelContainedInSpatialStructure datatype to write
         */
        virtual bool visitIfcRelContainedInSpatialStructure(IfcRelContainedInSpatialStructure *value);
        /**
         * write the IfcRelCoversBldgElements datatype to m_out.
         *
         * @param value the IfcRelCoversBldgElements datatype to write
         */
        virtual bool visitIfcRelCoversBldgElements(IfcRelCoversBldgElements *value);
        /**
         * write the IfcRelCoversSpaces datatype to m_out.
         *
         * @param value the IfcRelCoversSpaces datatype to write
         */
        virtual bool visitIfcRelCoversSpaces(IfcRelCoversSpaces *value);
        /**
         * write the IfcRelDecomposes datatype to m_out.
         *
         * @param value the IfcRelDecomposes datatype to write
         */
        virtual bool visitIfcRelDecomposes(IfcRelDecomposes *value);
        /**
         * write the IfcRelDefines datatype to m_out.
         *
         * @param value the IfcRelDefines datatype to write
         */
        virtual bool visitIfcRelDefines(IfcRelDefines *value);
        /**
         * write the IfcRelDefinesByProperties datatype to m_out.
         *
         * @param value the IfcRelDefinesByProperties datatype to write
         */
        virtual bool visitIfcRelDefinesByProperties(IfcRelDefinesByProperties *value);
        /**
         * write the IfcRelDefinesByType datatype to m_out.
         *
         * @param value the IfcRelDefinesByType datatype to write
         */
        virtual bool visitIfcRelDefinesByType(IfcRelDefinesByType *value);
        /**
         * write the IfcRelFillsElement datatype to m_out.
         *
         * @param value the IfcRelFillsElement datatype to write
         */
        virtual bool visitIfcRelFillsElement(IfcRelFillsElement *value);
        /**
         * write the IfcRelFlowControlElements datatype to m_out.
         *
         * @param value the IfcRelFlowControlElements datatype to write
         */
        virtual bool visitIfcRelFlowControlElements(IfcRelFlowControlElements *value);
        /**
         * write the IfcRelInteractionRequirements datatype to m_out.
         *
         * @param value the IfcRelInteractionRequirements datatype to write
         */
        virtual bool visitIfcRelInteractionRequirements(IfcRelInteractionRequirements *value);
        /**
         * write the IfcRelNests datatype to m_out.
         *
         * @param value the IfcRelNests datatype to write
         */
        virtual bool visitIfcRelNests(IfcRelNests *value);
        /**
         * write the IfcRelOccupiesSpaces datatype to m_out.
         *
         * @param value the IfcRelOccupiesSpaces datatype to write
         */
        virtual bool visitIfcRelOccupiesSpaces(IfcRelOccupiesSpaces *value);
        /**
         * write the IfcRelOverridesProperties datatype to m_out.
         *
         * @param value the IfcRelOverridesProperties datatype to write
         */
        virtual bool visitIfcRelOverridesProperties(IfcRelOverridesProperties *value);
        /**
         * write the IfcRelProjectsElement datatype to m_out.
         *
         * @param value the IfcRelProjectsElement datatype to write
         */
        virtual bool visitIfcRelProjectsElement(IfcRelProjectsElement *value);
        /**
         * write the IfcRelReferencedInSpatialStructure datatype to m_out.
         *
         * @param value the IfcRelReferencedInSpatialStructure datatype to write
         */
        virtual bool visitIfcRelReferencedInSpatialStructure(IfcRelReferencedInSpatialStructure *value);
        /**
         * write the IfcRelSchedulesCostItems datatype to m_out.
         *
         * @param value the IfcRelSchedulesCostItems datatype to write
         */
        virtual bool visitIfcRelSchedulesCostItems(IfcRelSchedulesCostItems *value);
        /**
         * write the IfcRelSequence datatype to m_out.
         *
         * @param value the IfcRelSequence datatype to write
         */
        virtual bool visitIfcRelSequence(IfcRelSequence *value);
        /**
         * write the IfcRelServicesBuildings datatype to m_out.
         *
         * @param value the IfcRelServicesBuildings datatype to write
         */
        virtual bool visitIfcRelServicesBuildings(IfcRelServicesBuildings *value);
        /**
         * write the IfcRelSpaceBoundary datatype to m_out.
         *
         * @param value the IfcRelSpaceBoundary datatype to write
         */
        virtual bool visitIfcRelSpaceBoundary(IfcRelSpaceBoundary *value);
        /**
         * write the IfcRelVoidsElement datatype to m_out.
         *
         * @param value the IfcRelVoidsElement datatype to write
         */
        virtual bool visitIfcRelVoidsElement(IfcRelVoidsElement *value);
        /**
         * write the IfcRepresentation datatype to m_out.
         *
         * @param value the IfcRepresentation datatype to write
         */
        virtual bool visitIfcRepresentation(IfcRepresentation *value);
        /**
         * write the IfcRepresentationContext datatype to m_out.
         *
         * @param value the IfcRepresentationContext datatype to write
         */
        virtual bool visitIfcRepresentationContext(IfcRepresentationContext *value);
        /**
         * write the IfcRepresentationItem datatype to m_out.
         *
         * @param value the IfcRepresentationItem datatype to write
         */
        virtual bool visitIfcRepresentationItem(IfcRepresentationItem *value);
        /**
         * write the IfcRepresentationMap datatype to m_out.
         *
         * @param value the IfcRepresentationMap datatype to write
         */
        virtual bool visitIfcRepresentationMap(IfcRepresentationMap *value);
        /**
         * write the IfcResource datatype to m_out.
         *
         * @param value the IfcResource datatype to write
         */
        virtual bool visitIfcResource(IfcResource *value);
        /**
         * write the IfcRevolvedAreaSolid datatype to m_out.
         *
         * @param value the IfcRevolvedAreaSolid datatype to write
         */
        virtual bool visitIfcRevolvedAreaSolid(IfcRevolvedAreaSolid *value);
        /**
         * write the IfcRibPlateProfileProperties datatype to m_out.
         *
         * @param value the IfcRibPlateProfileProperties datatype to write
         */
        virtual bool visitIfcRibPlateProfileProperties(IfcRibPlateProfileProperties *value);
        /**
         * write the IfcRightCircularCone datatype to m_out.
         *
         * @param value the IfcRightCircularCone datatype to write
         */
        virtual bool visitIfcRightCircularCone(IfcRightCircularCone *value);
        /**
         * write the IfcRightCircularCylinder datatype to m_out.
         *
         * @param value the IfcRightCircularCylinder datatype to write
         */
        virtual bool visitIfcRightCircularCylinder(IfcRightCircularCylinder *value);
        /**
         * write the IfcRoof datatype to m_out.
         *
         * @param value the IfcRoof datatype to write
         */
        virtual bool visitIfcRoof(IfcRoof *value);
        /**
         * write the IfcRoot datatype to m_out.
         *
         * @param value the IfcRoot datatype to write
         */
        virtual bool visitIfcRoot(IfcRoot *value);
        /**
         * write the IfcRoundedEdgeFeature datatype to m_out.
         *
         * @param value the IfcRoundedEdgeFeature datatype to write
         */
        virtual bool visitIfcRoundedEdgeFeature(IfcRoundedEdgeFeature *value);
        /**
         * write the IfcRoundedRectangleProfileDef datatype to m_out.
         *
         * @param value the IfcRoundedRectangleProfileDef datatype to write
         */
        virtual bool visitIfcRoundedRectangleProfileDef(IfcRoundedRectangleProfileDef *value);
        /**
         * write the IfcSanitaryTerminalType datatype to m_out.
         *
         * @param value the IfcSanitaryTerminalType datatype to write
         */
        virtual bool visitIfcSanitaryTerminalType(IfcSanitaryTerminalType *value);
        /**
         * write the IfcScheduleTimeControl datatype to m_out.
         *
         * @param value the IfcScheduleTimeControl datatype to write
         */
        virtual bool visitIfcScheduleTimeControl(IfcScheduleTimeControl *value);
        /**
         * write the IfcSectionedSpine datatype to m_out.
         *
         * @param value the IfcSectionedSpine datatype to write
         */
        virtual bool visitIfcSectionedSpine(IfcSectionedSpine *value);
        /**
         * write the IfcSectionProperties datatype to m_out.
         *
         * @param value the IfcSectionProperties datatype to write
         */
        virtual bool visitIfcSectionProperties(IfcSectionProperties *value);
        /**
         * write the IfcSectionReinforcementProperties datatype to m_out.
         *
         * @param value the IfcSectionReinforcementProperties datatype to write
         */
        virtual bool visitIfcSectionReinforcementProperties(IfcSectionReinforcementProperties *value);
        /**
         * write the IfcSensorType datatype to m_out.
         *
         * @param value the IfcSensorType datatype to write
         */
        virtual bool visitIfcSensorType(IfcSensorType *value);
        /**
         * write the IfcServiceLife datatype to m_out.
         *
         * @param value the IfcServiceLife datatype to write
         */
        virtual bool visitIfcServiceLife(IfcServiceLife *value);
        /**
         * write the IfcServiceLifeFactor datatype to m_out.
         *
         * @param value the IfcServiceLifeFactor datatype to write
         */
        virtual bool visitIfcServiceLifeFactor(IfcServiceLifeFactor *value);
        /**
         * write the IfcShapeAspect datatype to m_out.
         *
         * @param value the IfcShapeAspect datatype to write
         */
        virtual bool visitIfcShapeAspect(IfcShapeAspect *value);
        /**
         * write the IfcShapeModel datatype to m_out.
         *
         * @param value the IfcShapeModel datatype to write
         */
        virtual bool visitIfcShapeModel(IfcShapeModel *value);
        /**
         * write the IfcShapeRepresentation datatype to m_out.
         *
         * @param value the IfcShapeRepresentation datatype to write
         */
        virtual bool visitIfcShapeRepresentation(IfcShapeRepresentation *value);
        /**
         * write the IfcShellBasedSurfaceModel datatype to m_out.
         *
         * @param value the IfcShellBasedSurfaceModel datatype to write
         */
        virtual bool visitIfcShellBasedSurfaceModel(IfcShellBasedSurfaceModel *value);
        /**
         * write the IfcSimpleProperty datatype to m_out.
         *
         * @param value the IfcSimpleProperty datatype to write
         */
        virtual bool visitIfcSimpleProperty(IfcSimpleProperty *value);
        /**
         * write the IfcSite datatype to m_out.
         *
         * @param value the IfcSite datatype to write
         */
        virtual bool visitIfcSite(IfcSite *value);
        /**
         * write the IfcSIUnit datatype to m_out.
         *
         * @param value the IfcSIUnit datatype to write
         */
        virtual bool visitIfcSIUnit(IfcSIUnit *value);
        /**
         * write the IfcSlab datatype to m_out.
         *
         * @param value the IfcSlab datatype to write
         */
        virtual bool visitIfcSlab(IfcSlab *value);
        /**
         * write the IfcSlabType datatype to m_out.
         *
         * @param value the IfcSlabType datatype to write
         */
        virtual bool visitIfcSlabType(IfcSlabType *value);
        /**
         * write the IfcSlippageConnectionCondition datatype to m_out.
         *
         * @param value the IfcSlippageConnectionCondition datatype to write
         */
        virtual bool visitIfcSlippageConnectionCondition(IfcSlippageConnectionCondition *value);
        /**
         * write the IfcSolidModel datatype to m_out.
         *
         * @param value the IfcSolidModel datatype to write
         */
        virtual bool visitIfcSolidModel(IfcSolidModel *value);
        /**
         * write the IfcSoundProperties datatype to m_out.
         *
         * @param value the IfcSoundProperties datatype to write
         */
        virtual bool visitIfcSoundProperties(IfcSoundProperties *value);
        /**
         * write the IfcSoundValue datatype to m_out.
         *
         * @param value the IfcSoundValue datatype to write
         */
        virtual bool visitIfcSoundValue(IfcSoundValue *value);
        /**
         * write the IfcSpace datatype to m_out.
         *
         * @param value the IfcSpace datatype to write
         */
        virtual bool visitIfcSpace(IfcSpace *value);
        /**
         * write the IfcSpaceHeaterType datatype to m_out.
         *
         * @param value the IfcSpaceHeaterType datatype to write
         */
        virtual bool visitIfcSpaceHeaterType(IfcSpaceHeaterType *value);
        /**
         * write the IfcSpaceProgram datatype to m_out.
         *
         * @param value the IfcSpaceProgram datatype to write
         */
        virtual bool visitIfcSpaceProgram(IfcSpaceProgram *value);
        /**
         * write the IfcSpaceThermalLoadProperties datatype to m_out.
         *
         * @param value the IfcSpaceThermalLoadProperties datatype to write
         */
        virtual bool visitIfcSpaceThermalLoadProperties(IfcSpaceThermalLoadProperties *value);
        /**
         * write the IfcSpaceType datatype to m_out.
         *
         * @param value the IfcSpaceType datatype to write
         */
        virtual bool visitIfcSpaceType(IfcSpaceType *value);
        /**
         * write the IfcSpatialStructureElement datatype to m_out.
         *
         * @param value the IfcSpatialStructureElement datatype to write
         */
        virtual bool visitIfcSpatialStructureElement(IfcSpatialStructureElement *value);
        /**
         * write the IfcSpatialStructureElementType datatype to m_out.
         *
         * @param value the IfcSpatialStructureElementType datatype to write
         */
        virtual bool visitIfcSpatialStructureElementType(IfcSpatialStructureElementType *value);
        /**
         * write the IfcSphere datatype to m_out.
         *
         * @param value the IfcSphere datatype to write
         */
        virtual bool visitIfcSphere(IfcSphere *value);
        /**
         * write the IfcStackTerminalType datatype to m_out.
         *
         * @param value the IfcStackTerminalType datatype to write
         */
        virtual bool visitIfcStackTerminalType(IfcStackTerminalType *value);
        /**
         * write the IfcStair datatype to m_out.
         *
         * @param value the IfcStair datatype to write
         */
        virtual bool visitIfcStair(IfcStair *value);
        /**
         * write the IfcStairFlight datatype to m_out.
         *
         * @param value the IfcStairFlight datatype to write
         */
        virtual bool visitIfcStairFlight(IfcStairFlight *value);
        /**
         * write the IfcStairFlightType datatype to m_out.
         *
         * @param value the IfcStairFlightType datatype to write
         */
        virtual bool visitIfcStairFlightType(IfcStairFlightType *value);
        /**
         * write the IfcStructuralAction datatype to m_out.
         *
         * @param value the IfcStructuralAction datatype to write
         */
        virtual bool visitIfcStructuralAction(IfcStructuralAction *value);
        /**
         * write the IfcStructuralActivity datatype to m_out.
         *
         * @param value the IfcStructuralActivity datatype to write
         */
        virtual bool visitIfcStructuralActivity(IfcStructuralActivity *value);
        /**
         * write the IfcStructuralAnalysisModel datatype to m_out.
         *
         * @param value the IfcStructuralAnalysisModel datatype to write
         */
        virtual bool visitIfcStructuralAnalysisModel(IfcStructuralAnalysisModel *value);
        /**
         * write the IfcStructuralConnection datatype to m_out.
         *
         * @param value the IfcStructuralConnection datatype to write
         */
        virtual bool visitIfcStructuralConnection(IfcStructuralConnection *value);
        /**
         * write the IfcStructuralConnectionCondition datatype to m_out.
         *
         * @param value the IfcStructuralConnectionCondition datatype to write
         */
        virtual bool visitIfcStructuralConnectionCondition(IfcStructuralConnectionCondition *value);
        /**
         * write the IfcStructuralCurveConnection datatype to m_out.
         *
         * @param value the IfcStructuralCurveConnection datatype to write
         */
        virtual bool visitIfcStructuralCurveConnection(IfcStructuralCurveConnection *value);
        /**
         * write the IfcStructuralCurveMember datatype to m_out.
         *
         * @param value the IfcStructuralCurveMember datatype to write
         */
        virtual bool visitIfcStructuralCurveMember(IfcStructuralCurveMember *value);
        /**
         * write the IfcStructuralCurveMemberVarying datatype to m_out.
         *
         * @param value the IfcStructuralCurveMemberVarying datatype to write
         */
        virtual bool visitIfcStructuralCurveMemberVarying(IfcStructuralCurveMemberVarying *value);
        /**
         * write the IfcStructuralItem datatype to m_out.
         *
         * @param value the IfcStructuralItem datatype to write
         */
        virtual bool visitIfcStructuralItem(IfcStructuralItem *value);
        /**
         * write the IfcStructuralLinearAction datatype to m_out.
         *
         * @param value the IfcStructuralLinearAction datatype to write
         */
        virtual bool visitIfcStructuralLinearAction(IfcStructuralLinearAction *value);
        /**
         * write the IfcStructuralLinearActionVarying datatype to m_out.
         *
         * @param value the IfcStructuralLinearActionVarying datatype to write
         */
        virtual bool visitIfcStructuralLinearActionVarying(IfcStructuralLinearActionVarying *value);
        /**
         * write the IfcStructuralLoad datatype to m_out.
         *
         * @param value the IfcStructuralLoad datatype to write
         */
        virtual bool visitIfcStructuralLoad(IfcStructuralLoad *value);
        /**
         * write the IfcStructuralLoadGroup datatype to m_out.
         *
         * @param value the IfcStructuralLoadGroup datatype to write
         */
        virtual bool visitIfcStructuralLoadGroup(IfcStructuralLoadGroup *value);
        /**
         * write the IfcStructuralLoadLinearForce datatype to m_out.
         *
         * @param value the IfcStructuralLoadLinearForce datatype to write
         */
        virtual bool visitIfcStructuralLoadLinearForce(IfcStructuralLoadLinearForce *value);
        /**
         * write the IfcStructuralLoadPlanarForce datatype to m_out.
         *
         * @param value the IfcStructuralLoadPlanarForce datatype to write
         */
        virtual bool visitIfcStructuralLoadPlanarForce(IfcStructuralLoadPlanarForce *value);
        /**
         * write the IfcStructuralLoadSingleDisplacement datatype to m_out.
         *
         * @param value the IfcStructuralLoadSingleDisplacement datatype to write
         */
        virtual bool visitIfcStructuralLoadSingleDisplacement(IfcStructuralLoadSingleDisplacement *value);
        /**
         * write the IfcStructuralLoadSingleDisplacementDistortion datatype to m_out.
         *
         * @param value the IfcStructuralLoadSingleDisplacementDistortion datatype to write
         */
        virtual bool visitIfcStructuralLoadSingleDisplacementDistortion(IfcStructuralLoadSingleDisplacementDistortion *value);
        /**
         * write the IfcStructuralLoadSingleForce datatype to m_out.
         *
         * @param value the IfcStructuralLoadSingleForce datatype to write
         */
        virtual bool visitIfcStructuralLoadSingleForce(IfcStructuralLoadSingleForce *value);
        /**
         * write the IfcStructuralLoadSingleForceWarping datatype to m_out.
         *
         * @param value the IfcStructuralLoadSingleForceWarping datatype to write
         */
        virtual bool visitIfcStructuralLoadSingleForceWarping(IfcStructuralLoadSingleForceWarping *value);
        /**
         * write the IfcStructuralLoadStatic datatype to m_out.
         *
         * @param value the IfcStructuralLoadStatic datatype to write
         */
        virtual bool visitIfcStructuralLoadStatic(IfcStructuralLoadStatic *value);
        /**
         * write the IfcStructuralLoadTemperature datatype to m_out.
         *
         * @param value the IfcStructuralLoadTemperature datatype to write
         */
        virtual bool visitIfcStructuralLoadTemperature(IfcStructuralLoadTemperature *value);
        /**
         * write the IfcStructuralMember datatype to m_out.
         *
         * @param value the IfcStructuralMember datatype to write
         */
        virtual bool visitIfcStructuralMember(IfcStructuralMember *value);
        /**
         * write the IfcStructuralPlanarAction datatype to m_out.
         *
         * @param value the IfcStructuralPlanarAction datatype to write
         */
        virtual bool visitIfcStructuralPlanarAction(IfcStructuralPlanarAction *value);
        /**
         * write the IfcStructuralPlanarActionVarying datatype to m_out.
         *
         * @param value the IfcStructuralPlanarActionVarying datatype to write
         */
        virtual bool visitIfcStructuralPlanarActionVarying(IfcStructuralPlanarActionVarying *value);
        /**
         * write the IfcStructuralPointAction datatype to m_out.
         *
         * @param value the IfcStructuralPointAction datatype to write
         */
        virtual bool visitIfcStructuralPointAction(IfcStructuralPointAction *value);
        /**
         * write the IfcStructuralPointConnection datatype to m_out.
         *
         * @param value the IfcStructuralPointConnection datatype to write
         */
        virtual bool visitIfcStructuralPointConnection(IfcStructuralPointConnection *value);
        /**
         * write the IfcStructuralPointReaction datatype to m_out.
         *
         * @param value the IfcStructuralPointReaction datatype to write
         */
        virtual bool visitIfcStructuralPointReaction(IfcStructuralPointReaction *value);
        /**
         * write the IfcStructuralProfileProperties datatype to m_out.
         *
         * @param value the IfcStructuralProfileProperties datatype to write
         */
        virtual bool visitIfcStructuralProfileProperties(IfcStructuralProfileProperties *value);
        /**
         * write the IfcStructuralReaction datatype to m_out.
         *
         * @param value the IfcStructuralReaction datatype to write
         */
        virtual bool visitIfcStructuralReaction(IfcStructuralReaction *value);
        /**
         * write the IfcStructuralResultGroup datatype to m_out.
         *
         * @param value the IfcStructuralResultGroup datatype to write
         */
        virtual bool visitIfcStructuralResultGroup(IfcStructuralResultGroup *value);
        /**
         * write the IfcStructuralSteelProfileProperties datatype to m_out.
         *
         * @param value the IfcStructuralSteelProfileProperties datatype to write
         */
        virtual bool visitIfcStructuralSteelProfileProperties(IfcStructuralSteelProfileProperties *value);
        /**
         * write the IfcStructuralSurfaceConnection datatype to m_out.
         *
         * @param value the IfcStructuralSurfaceConnection datatype to write
         */
        virtual bool visitIfcStructuralSurfaceConnection(IfcStructuralSurfaceConnection *value);
        /**
         * write the IfcStructuralSurfaceMember datatype to m_out.
         *
         * @param value the IfcStructuralSurfaceMember datatype to write
         */
        virtual bool visitIfcStructuralSurfaceMember(IfcStructuralSurfaceMember *value);
        /**
         * write the IfcStructuralSurfaceMemberVarying datatype to m_out.
         *
         * @param value the IfcStructuralSurfaceMemberVarying datatype to write
         */
        virtual bool visitIfcStructuralSurfaceMemberVarying(IfcStructuralSurfaceMemberVarying *value);
        /**
         * write the IfcStructuredDimensionCallout datatype to m_out.
         *
         * @param value the IfcStructuredDimensionCallout datatype to write
         */
        virtual bool visitIfcStructuredDimensionCallout(IfcStructuredDimensionCallout *value);
        /**
         * write the IfcStyledItem datatype to m_out.
         *
         * @param value the IfcStyledItem datatype to write
         */
        virtual bool visitIfcStyledItem(IfcStyledItem *value);
        /**
         * write the IfcStyledRepresentation datatype to m_out.
         *
         * @param value the IfcStyledRepresentation datatype to write
         */
        virtual bool visitIfcStyledRepresentation(IfcStyledRepresentation *value);
        /**
         * write the IfcStyleModel datatype to m_out.
         *
         * @param value the IfcStyleModel datatype to write
         */
        virtual bool visitIfcStyleModel(IfcStyleModel *value);
        /**
         * write the IfcSubContractResource datatype to m_out.
         *
         * @param value the IfcSubContractResource datatype to write
         */
        virtual bool visitIfcSubContractResource(IfcSubContractResource *value);
        /**
         * write the IfcSubedge datatype to m_out.
         *
         * @param value the IfcSubedge datatype to write
         */
        virtual bool visitIfcSubedge(IfcSubedge *value);
        /**
         * write the IfcSurface datatype to m_out.
         *
         * @param value the IfcSurface datatype to write
         */
        virtual bool visitIfcSurface(IfcSurface *value);
        /**
         * write the IfcSurfaceCurveSweptAreaSolid datatype to m_out.
         *
         * @param value the IfcSurfaceCurveSweptAreaSolid datatype to write
         */
        virtual bool visitIfcSurfaceCurveSweptAreaSolid(IfcSurfaceCurveSweptAreaSolid *value);
        /**
         * write the IfcSurfaceOfLinearExtrusion datatype to m_out.
         *
         * @param value the IfcSurfaceOfLinearExtrusion datatype to write
         */
        virtual bool visitIfcSurfaceOfLinearExtrusion(IfcSurfaceOfLinearExtrusion *value);
        /**
         * write the IfcSurfaceOfRevolution datatype to m_out.
         *
         * @param value the IfcSurfaceOfRevolution datatype to write
         */
        virtual bool visitIfcSurfaceOfRevolution(IfcSurfaceOfRevolution *value);
        /**
         * write the IfcSurfaceStyle datatype to m_out.
         *
         * @param value the IfcSurfaceStyle datatype to write
         */
        virtual bool visitIfcSurfaceStyle(IfcSurfaceStyle *value);
        /**
         * write the IfcSurfaceStyleLighting datatype to m_out.
         *
         * @param value the IfcSurfaceStyleLighting datatype to write
         */
        virtual bool visitIfcSurfaceStyleLighting(IfcSurfaceStyleLighting *value);
        /**
         * write the IfcSurfaceStyleRefraction datatype to m_out.
         *
         * @param value the IfcSurfaceStyleRefraction datatype to write
         */
        virtual bool visitIfcSurfaceStyleRefraction(IfcSurfaceStyleRefraction *value);
        /**
         * write the IfcSurfaceStyleRendering datatype to m_out.
         *
         * @param value the IfcSurfaceStyleRendering datatype to write
         */
        virtual bool visitIfcSurfaceStyleRendering(IfcSurfaceStyleRendering *value);
        /**
         * write the IfcSurfaceStyleShading datatype to m_out.
         *
         * @param value the IfcSurfaceStyleShading datatype to write
         */
        virtual bool visitIfcSurfaceStyleShading(IfcSurfaceStyleShading *value);
        /**
         * write the IfcSurfaceStyleWithTextures datatype to m_out.
         *
         * @param value the IfcSurfaceStyleWithTextures datatype to write
         */
        virtual bool visitIfcSurfaceStyleWithTextures(IfcSurfaceStyleWithTextures *value);
        /**
         * write the IfcSurfaceTexture datatype to m_out.
         *
         * @param value the IfcSurfaceTexture datatype to write
         */
        virtual bool visitIfcSurfaceTexture(IfcSurfaceTexture *value);
        /**
         * write the IfcSweptAreaSolid datatype to m_out.
         *
         * @param value the IfcSweptAreaSolid datatype to write
         */
        virtual bool visitIfcSweptAreaSolid(IfcSweptAreaSolid *value);
        /**
         * write the IfcSweptDiskSolid datatype to m_out.
         *
         * @param value the IfcSweptDiskSolid datatype to write
         */
        virtual bool visitIfcSweptDiskSolid(IfcSweptDiskSolid *value);
        /**
         * write the IfcSweptSurface datatype to m_out.
         *
         * @param value the IfcSweptSurface datatype to write
         */
        virtual bool visitIfcSweptSurface(IfcSweptSurface *value);
        /**
         * write the IfcSwitchingDeviceType datatype to m_out.
         *
         * @param value the IfcSwitchingDeviceType datatype to write
         */
        virtual bool visitIfcSwitchingDeviceType(IfcSwitchingDeviceType *value);
        /**
         * write the IfcSymbolStyle datatype to m_out.
         *
         * @param value the IfcSymbolStyle datatype to write
         */
        virtual bool visitIfcSymbolStyle(IfcSymbolStyle *value);
        /**
         * write the IfcSystem datatype to m_out.
         *
         * @param value the IfcSystem datatype to write
         */
        virtual bool visitIfcSystem(IfcSystem *value);
        /**
         * write the IfcSystemFurnitureElementType datatype to m_out.
         *
         * @param value the IfcSystemFurnitureElementType datatype to write
         */
        virtual bool visitIfcSystemFurnitureElementType(IfcSystemFurnitureElementType *value);
        /**
         * write the IfcTable datatype to m_out.
         *
         * @param value the IfcTable datatype to write
         */
        virtual bool visitIfcTable(IfcTable *value);
        /**
         * write the IfcTableRow datatype to m_out.
         *
         * @param value the IfcTableRow datatype to write
         */
        virtual bool visitIfcTableRow(IfcTableRow *value);
        /**
         * write the IfcTankType datatype to m_out.
         *
         * @param value the IfcTankType datatype to write
         */
        virtual bool visitIfcTankType(IfcTankType *value);
        /**
         * write the IfcTask datatype to m_out.
         *
         * @param value the IfcTask datatype to write
         */
        virtual bool visitIfcTask(IfcTask *value);
        /**
         * write the IfcTelecomAddress datatype to m_out.
         *
         * @param value the IfcTelecomAddress datatype to write
         */
        virtual bool visitIfcTelecomAddress(IfcTelecomAddress *value);
        /**
         * write the IfcTendon datatype to m_out.
         *
         * @param value the IfcTendon datatype to write
         */
        virtual bool visitIfcTendon(IfcTendon *value);
        /**
         * write the IfcTendonAnchor datatype to m_out.
         *
         * @param value the IfcTendonAnchor datatype to write
         */
        virtual bool visitIfcTendonAnchor(IfcTendonAnchor *value);
        /**
         * write the IfcTerminatorSymbol datatype to m_out.
         *
         * @param value the IfcTerminatorSymbol datatype to write
         */
        virtual bool visitIfcTerminatorSymbol(IfcTerminatorSymbol *value);
        /**
         * write the IfcTextLiteral datatype to m_out.
         *
         * @param value the IfcTextLiteral datatype to write
         */
        virtual bool visitIfcTextLiteral(IfcTextLiteral *value);
        /**
         * write the IfcTextLiteralWithExtent datatype to m_out.
         *
         * @param value the IfcTextLiteralWithExtent datatype to write
         */
        virtual bool visitIfcTextLiteralWithExtent(IfcTextLiteralWithExtent *value);
        /**
         * write the IfcTextStyle datatype to m_out.
         *
         * @param value the IfcTextStyle datatype to write
         */
        virtual bool visitIfcTextStyle(IfcTextStyle *value);
        /**
         * write the IfcTextStyleFontModel datatype to m_out.
         *
         * @param value the IfcTextStyleFontModel datatype to write
         */
        virtual bool visitIfcTextStyleFontModel(IfcTextStyleFontModel *value);
        /**
         * write the IfcTextStyleForDefinedFont datatype to m_out.
         *
         * @param value the IfcTextStyleForDefinedFont datatype to write
         */
        virtual bool visitIfcTextStyleForDefinedFont(IfcTextStyleForDefinedFont *value);
        /**
         * write the IfcTextStyleTextModel datatype to m_out.
         *
         * @param value the IfcTextStyleTextModel datatype to write
         */
        virtual bool visitIfcTextStyleTextModel(IfcTextStyleTextModel *value);
        /**
         * write the IfcTextStyleWithBoxCharacteristics datatype to m_out.
         *
         * @param value the IfcTextStyleWithBoxCharacteristics datatype to write
         */
        virtual bool visitIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics *value);
        /**
         * write the IfcTextureCoordinate datatype to m_out.
         *
         * @param value the IfcTextureCoordinate datatype to write
         */
        virtual bool visitIfcTextureCoordinate(IfcTextureCoordinate *value);
        /**
         * write the IfcTextureCoordinateGenerator datatype to m_out.
         *
         * @param value the IfcTextureCoordinateGenerator datatype to write
         */
        virtual bool visitIfcTextureCoordinateGenerator(IfcTextureCoordinateGenerator *value);
        /**
         * write the IfcTextureMap datatype to m_out.
         *
         * @param value the IfcTextureMap datatype to write
         */
        virtual bool visitIfcTextureMap(IfcTextureMap *value);
        /**
         * write the IfcTextureVertex datatype to m_out.
         *
         * @param value the IfcTextureVertex datatype to write
         */
        virtual bool visitIfcTextureVertex(IfcTextureVertex *value);
        /**
         * write the IfcThermalMaterialProperties datatype to m_out.
         *
         * @param value the IfcThermalMaterialProperties datatype to write
         */
        virtual bool visitIfcThermalMaterialProperties(IfcThermalMaterialProperties *value);
        /**
         * write the IfcTimeSeries datatype to m_out.
         *
         * @param value the IfcTimeSeries datatype to write
         */
        virtual bool visitIfcTimeSeries(IfcTimeSeries *value);
        /**
         * write the IfcTimeSeriesReferenceRelationship datatype to m_out.
         *
         * @param value the IfcTimeSeriesReferenceRelationship datatype to write
         */
        virtual bool visitIfcTimeSeriesReferenceRelationship(IfcTimeSeriesReferenceRelationship *value);
        /**
         * write the IfcTimeSeriesSchedule datatype to m_out.
         *
         * @param value the IfcTimeSeriesSchedule datatype to write
         */
        virtual bool visitIfcTimeSeriesSchedule(IfcTimeSeriesSchedule *value);
        /**
         * write the IfcTimeSeriesValue datatype to m_out.
         *
         * @param value the IfcTimeSeriesValue datatype to write
         */
        virtual bool visitIfcTimeSeriesValue(IfcTimeSeriesValue *value);
        /**
         * write the IfcTopologicalRepresentationItem datatype to m_out.
         *
         * @param value the IfcTopologicalRepresentationItem datatype to write
         */
        virtual bool visitIfcTopologicalRepresentationItem(IfcTopologicalRepresentationItem *value);
        /**
         * write the IfcTopologyRepresentation datatype to m_out.
         *
         * @param value the IfcTopologyRepresentation datatype to write
         */
        virtual bool visitIfcTopologyRepresentation(IfcTopologyRepresentation *value);
        /**
         * write the IfcTransformerType datatype to m_out.
         *
         * @param value the IfcTransformerType datatype to write
         */
        virtual bool visitIfcTransformerType(IfcTransformerType *value);
        /**
         * write the IfcTransportElement datatype to m_out.
         *
         * @param value the IfcTransportElement datatype to write
         */
        virtual bool visitIfcTransportElement(IfcTransportElement *value);
        /**
         * write the IfcTransportElementType datatype to m_out.
         *
         * @param value the IfcTransportElementType datatype to write
         */
        virtual bool visitIfcTransportElementType(IfcTransportElementType *value);
        /**
         * write the IfcTrapeziumProfileDef datatype to m_out.
         *
         * @param value the IfcTrapeziumProfileDef datatype to write
         */
        virtual bool visitIfcTrapeziumProfileDef(IfcTrapeziumProfileDef *value);
        /**
         * write the IfcTrimmedCurve datatype to m_out.
         *
         * @param value the IfcTrimmedCurve datatype to write
         */
        virtual bool visitIfcTrimmedCurve(IfcTrimmedCurve *value);
        /**
         * write the IfcTShapeProfileDef datatype to m_out.
         *
         * @param value the IfcTShapeProfileDef datatype to write
         */
        virtual bool visitIfcTShapeProfileDef(IfcTShapeProfileDef *value);
        /**
         * write the IfcTubeBundleType datatype to m_out.
         *
         * @param value the IfcTubeBundleType datatype to write
         */
        virtual bool visitIfcTubeBundleType(IfcTubeBundleType *value);
        /**
         * write the IfcTwoDirectionRepeatFactor datatype to m_out.
         *
         * @param value the IfcTwoDirectionRepeatFactor datatype to write
         */
        virtual bool visitIfcTwoDirectionRepeatFactor(IfcTwoDirectionRepeatFactor *value);
        /**
         * write the IfcTypeObject datatype to m_out.
         *
         * @param value the IfcTypeObject datatype to write
         */
        virtual bool visitIfcTypeObject(IfcTypeObject *value);
        /**
         * write the IfcTypeProduct datatype to m_out.
         *
         * @param value the IfcTypeProduct datatype to write
         */
        virtual bool visitIfcTypeProduct(IfcTypeProduct *value);
        /**
         * write the IfcUnitaryEquipmentType datatype to m_out.
         *
         * @param value the IfcUnitaryEquipmentType datatype to write
         */
        virtual bool visitIfcUnitaryEquipmentType(IfcUnitaryEquipmentType *value);
        /**
         * write the IfcUnitAssignment datatype to m_out.
         *
         * @param value the IfcUnitAssignment datatype to write
         */
        virtual bool visitIfcUnitAssignment(IfcUnitAssignment *value);
        /**
         * write the IfcUShapeProfileDef datatype to m_out.
         *
         * @param value the IfcUShapeProfileDef datatype to write
         */
        virtual bool visitIfcUShapeProfileDef(IfcUShapeProfileDef *value);
        /**
         * write the IfcValveType datatype to m_out.
         *
         * @param value the IfcValveType datatype to write
         */
        virtual bool visitIfcValveType(IfcValveType *value);
        /**
         * write the IfcVector datatype to m_out.
         *
         * @param value the IfcVector datatype to write
         */
        virtual bool visitIfcVector(IfcVector *value);
        /**
         * write the IfcVertex datatype to m_out.
         *
         * @param value the IfcVertex datatype to write
         */
        virtual bool visitIfcVertex(IfcVertex *value);
        /**
         * write the IfcVertexBasedTextureMap datatype to m_out.
         *
         * @param value the IfcVertexBasedTextureMap datatype to write
         */
        virtual bool visitIfcVertexBasedTextureMap(IfcVertexBasedTextureMap *value);
        /**
         * write the IfcVertexLoop datatype to m_out.
         *
         * @param value the IfcVertexLoop datatype to write
         */
        virtual bool visitIfcVertexLoop(IfcVertexLoop *value);
        /**
         * write the IfcVertexPoint datatype to m_out.
         *
         * @param value the IfcVertexPoint datatype to write
         */
        virtual bool visitIfcVertexPoint(IfcVertexPoint *value);
        /**
         * write the IfcVibrationIsolatorType datatype to m_out.
         *
         * @param value the IfcVibrationIsolatorType datatype to write
         */
        virtual bool visitIfcVibrationIsolatorType(IfcVibrationIsolatorType *value);
        /**
         * write the IfcVirtualElement datatype to m_out.
         *
         * @param value the IfcVirtualElement datatype to write
         */
        virtual bool visitIfcVirtualElement(IfcVirtualElement *value);
        /**
         * write the IfcVirtualGridIntersection datatype to m_out.
         *
         * @param value the IfcVirtualGridIntersection datatype to write
         */
        virtual bool visitIfcVirtualGridIntersection(IfcVirtualGridIntersection *value);
        /**
         * write the IfcWall datatype to m_out.
         *
         * @param value the IfcWall datatype to write
         */
        virtual bool visitIfcWall(IfcWall *value);
        /**
         * write the IfcWallStandardCase datatype to m_out.
         *
         * @param value the IfcWallStandardCase datatype to write
         */
        virtual bool visitIfcWallStandardCase(IfcWallStandardCase *value);
        /**
         * write the IfcWallType datatype to m_out.
         *
         * @param value the IfcWallType datatype to write
         */
        virtual bool visitIfcWallType(IfcWallType *value);
        /**
         * write the IfcWasteTerminalType datatype to m_out.
         *
         * @param value the IfcWasteTerminalType datatype to write
         */
        virtual bool visitIfcWasteTerminalType(IfcWasteTerminalType *value);
        /**
         * write the IfcWaterProperties datatype to m_out.
         *
         * @param value the IfcWaterProperties datatype to write
         */
        virtual bool visitIfcWaterProperties(IfcWaterProperties *value);
        /**
         * write the IfcWindow datatype to m_out.
         *
         * @param value the IfcWindow datatype to write
         */
        virtual bool visitIfcWindow(IfcWindow *value);
        /**
         * write the IfcWindowLiningProperties datatype to m_out.
         *
         * @param value the IfcWindowLiningProperties datatype to write
         */
        virtual bool visitIfcWindowLiningProperties(IfcWindowLiningProperties *value);
        /**
         * write the IfcWindowPanelProperties datatype to m_out.
         *
         * @param value the IfcWindowPanelProperties datatype to write
         */
        virtual bool visitIfcWindowPanelProperties(IfcWindowPanelProperties *value);
        /**
         * write the IfcWindowStyle datatype to m_out.
         *
         * @param value the IfcWindowStyle datatype to write
         */
        virtual bool visitIfcWindowStyle(IfcWindowStyle *value);
        /**
         * write the IfcWorkControl datatype to m_out.
         *
         * @param value the IfcWorkControl datatype to write
         */
        virtual bool visitIfcWorkControl(IfcWorkControl *value);
        /**
         * write the IfcWorkPlan datatype to m_out.
         *
         * @param value the IfcWorkPlan datatype to write
         */
        virtual bool visitIfcWorkPlan(IfcWorkPlan *value);
        /**
         * write the IfcWorkSchedule datatype to m_out.
         *
         * @param value the IfcWorkSchedule datatype to write
         */
        virtual bool visitIfcWorkSchedule(IfcWorkSchedule *value);
        /**
         * write the IfcZone datatype to m_out.
         *
         * @param value the IfcZone datatype to write
         */
        virtual bool visitIfcZone(IfcZone *value);
        /**
         * write the IfcZShapeProfileDef datatype to m_out.
         *
         * @param value the IfcZShapeProfileDef datatype to write
         */
        virtual bool visitIfcZShapeProfileDef(IfcZShapeProfileDef *value);
        /**
         * @param enumData
         */
        void writeIfcActionSourceTypeEnum(IfcActionSourceTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcActionTypeEnum(IfcActionTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcActuatorTypeEnum(IfcActuatorTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcAddressTypeEnum(IfcAddressTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcAheadOrBehind(IfcAheadOrBehind enumData);
        /**
         * @param enumData
         */
        void writeIfcAirTerminalBoxTypeEnum(IfcAirTerminalBoxTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcAirTerminalTypeEnum(IfcAirTerminalTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcAirToAirHeatRecoveryTypeEnum(IfcAirToAirHeatRecoveryTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcAlarmTypeEnum(IfcAlarmTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcAnalysisModelTypeEnum(IfcAnalysisModelTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcAnalysisTheoryTypeEnum(IfcAnalysisTheoryTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcArithmeticOperatorEnum(IfcArithmeticOperatorEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcAssemblyPlaceEnum(IfcAssemblyPlaceEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcBeamTypeEnum(IfcBeamTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcBenchmarkEnum(IfcBenchmarkEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcBoilerTypeEnum(IfcBoilerTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcBooleanOperator(IfcBooleanOperator enumData);
        /**
         * @param enumData
         */
        void writeIfcBSplineCurveForm(IfcBSplineCurveForm enumData);
        /**
         * @param enumData
         */
        void writeIfcBuildingElementProxyTypeEnum(IfcBuildingElementProxyTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcCableCarrierFittingTypeEnum(IfcCableCarrierFittingTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcCableCarrierSegmentTypeEnum(IfcCableCarrierSegmentTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcCableSegmentTypeEnum(IfcCableSegmentTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcChangeActionEnum(IfcChangeActionEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcChillerTypeEnum(IfcChillerTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcCoilTypeEnum(IfcCoilTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcColumnTypeEnum(IfcColumnTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcCompressorTypeEnum(IfcCompressorTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcCondenserTypeEnum(IfcCondenserTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcConnectionTypeEnum(IfcConnectionTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcConstraintEnum(IfcConstraintEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcControllerTypeEnum(IfcControllerTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcCooledBeamTypeEnum(IfcCooledBeamTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcCoolingTowerTypeEnum(IfcCoolingTowerTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcCostScheduleTypeEnum(IfcCostScheduleTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcCoveringTypeEnum(IfcCoveringTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcCurrencyEnum(IfcCurrencyEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcCurtainWallTypeEnum(IfcCurtainWallTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcDamperTypeEnum(IfcDamperTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcDataOriginEnum(IfcDataOriginEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcDerivedUnitEnum(IfcDerivedUnitEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcDimensionExtentUsage(IfcDimensionExtentUsage enumData);
        /**
         * @param enumData
         */
        void writeIfcDirectionSenseEnum(IfcDirectionSenseEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcDistributionChamberElementTypeEnum(IfcDistributionChamberElementTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcDocumentConfidentialityEnum(IfcDocumentConfidentialityEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcDocumentStatusEnum(IfcDocumentStatusEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcDoorPanelOperationEnum(IfcDoorPanelOperationEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcDoorPanelPositionEnum(IfcDoorPanelPositionEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcDoorStyleConstructionEnum(IfcDoorStyleConstructionEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcDoorStyleOperationEnum(IfcDoorStyleOperationEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcDuctFittingTypeEnum(IfcDuctFittingTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcDuctSegmentTypeEnum(IfcDuctSegmentTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcDuctSilencerTypeEnum(IfcDuctSilencerTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcElectricApplianceTypeEnum(IfcElectricApplianceTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcElectricCurrentEnum(IfcElectricCurrentEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcElectricDistributionPointFunctionEnum(IfcElectricDistributionPointFunctionEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcElectricFlowStorageDeviceTypeEnum(IfcElectricFlowStorageDeviceTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcElectricGeneratorTypeEnum(IfcElectricGeneratorTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcElectricHeaterTypeEnum(IfcElectricHeaterTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcElectricMotorTypeEnum(IfcElectricMotorTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcElectricTimeControlTypeEnum(IfcElectricTimeControlTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcElementAssemblyTypeEnum(IfcElementAssemblyTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcElementCompositionEnum(IfcElementCompositionEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcEnergySequenceEnum(IfcEnergySequenceEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcEnvironmentalImpactCategoryEnum(IfcEnvironmentalImpactCategoryEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcEvaporativeCoolerTypeEnum(IfcEvaporativeCoolerTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcEvaporatorTypeEnum(IfcEvaporatorTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcFanTypeEnum(IfcFanTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcFilterTypeEnum(IfcFilterTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcFireSuppressionTerminalTypeEnum(IfcFireSuppressionTerminalTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcFlowDirectionEnum(IfcFlowDirectionEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcFlowInstrumentTypeEnum(IfcFlowInstrumentTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcFlowMeterTypeEnum(IfcFlowMeterTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcFootingTypeEnum(IfcFootingTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcGasTerminalTypeEnum(IfcGasTerminalTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcGeometricProjectionEnum(IfcGeometricProjectionEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcGlobalOrLocalEnum(IfcGlobalOrLocalEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcHeatExchangerTypeEnum(IfcHeatExchangerTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcHumidifierTypeEnum(IfcHumidifierTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcInternalOrExternalEnum(IfcInternalOrExternalEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcInventoryTypeEnum(IfcInventoryTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcJunctionBoxTypeEnum(IfcJunctionBoxTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcLampTypeEnum(IfcLampTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcLayerSetDirectionEnum(IfcLayerSetDirectionEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcLightDistributionCurveEnum(IfcLightDistributionCurveEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcLightEmissionSourceEnum(IfcLightEmissionSourceEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcLightFixtureTypeEnum(IfcLightFixtureTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcLoadGroupTypeEnum(IfcLoadGroupTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcLogicalOperatorEnum(IfcLogicalOperatorEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcMemberTypeEnum(IfcMemberTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcMotorConnectionTypeEnum(IfcMotorConnectionTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcNullStyle(IfcNullStyle enumData);
        /**
         * @param enumData
         */
        void writeIfcObjectiveEnum(IfcObjectiveEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcObjectTypeEnum(IfcObjectTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcOccupantTypeEnum(IfcOccupantTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcOutletTypeEnum(IfcOutletTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcPermeableCoveringOperationEnum(IfcPermeableCoveringOperationEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcPhysicalOrVirtualEnum(IfcPhysicalOrVirtualEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcPileConstructionEnum(IfcPileConstructionEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcPileTypeEnum(IfcPileTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcPipeFittingTypeEnum(IfcPipeFittingTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcPipeSegmentTypeEnum(IfcPipeSegmentTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcPlateTypeEnum(IfcPlateTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcProcedureTypeEnum(IfcProcedureTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcProfileTypeEnum(IfcProfileTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcProjectedOrTrueLengthEnum(IfcProjectedOrTrueLengthEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcProjectOrderRecordTypeEnum(IfcProjectOrderRecordTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcProjectOrderTypeEnum(IfcProjectOrderTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcPropertySourceEnum(IfcPropertySourceEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcProtectiveDeviceTypeEnum(IfcProtectiveDeviceTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcPumpTypeEnum(IfcPumpTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcRailingTypeEnum(IfcRailingTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcRampFlightTypeEnum(IfcRampFlightTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcRampTypeEnum(IfcRampTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcReflectanceMethodEnum(IfcReflectanceMethodEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcReinforcingBarRoleEnum(IfcReinforcingBarRoleEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcReinforcingBarSurfaceEnum(IfcReinforcingBarSurfaceEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcResourceConsumptionEnum(IfcResourceConsumptionEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcRibPlateDirectionEnum(IfcRibPlateDirectionEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcRoleEnum(IfcRoleEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcRoofTypeEnum(IfcRoofTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcSanitaryTerminalTypeEnum(IfcSanitaryTerminalTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcSectionTypeEnum(IfcSectionTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcSensorTypeEnum(IfcSensorTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcSequenceEnum(IfcSequenceEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcServiceLifeFactorTypeEnum(IfcServiceLifeFactorTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcServiceLifeTypeEnum(IfcServiceLifeTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcSIPrefix(IfcSIPrefix enumData);
        /**
         * @param enumData
         */
        void writeIfcSIUnitName(IfcSIUnitName enumData);
        /**
         * @param enumData
         */
        void writeIfcSlabTypeEnum(IfcSlabTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcSoundScaleEnum(IfcSoundScaleEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcSpaceHeaterTypeEnum(IfcSpaceHeaterTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcSpaceTypeEnum(IfcSpaceTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcStackTerminalTypeEnum(IfcStackTerminalTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcStairFlightTypeEnum(IfcStairFlightTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcStairTypeEnum(IfcStairTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcStateEnum(IfcStateEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcStructuralCurveTypeEnum(IfcStructuralCurveTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcStructuralSurfaceTypeEnum(IfcStructuralSurfaceTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcSurfaceSide(IfcSurfaceSide enumData);
        /**
         * @param enumData
         */
        void writeIfcSurfaceTextureEnum(IfcSurfaceTextureEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcSwitchingDeviceTypeEnum(IfcSwitchingDeviceTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcTankTypeEnum(IfcTankTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcTendonTypeEnum(IfcTendonTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcTextPath(IfcTextPath enumData);
        /**
         * @param enumData
         */
        void writeIfcThermalLoadSourceEnum(IfcThermalLoadSourceEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcThermalLoadTypeEnum(IfcThermalLoadTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcTimeSeriesDataTypeEnum(IfcTimeSeriesDataTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcTimeSeriesScheduleTypeEnum(IfcTimeSeriesScheduleTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcTransformerTypeEnum(IfcTransformerTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcTransitionCode(IfcTransitionCode enumData);
        /**
         * @param enumData
         */
        void writeIfcTransportElementTypeEnum(IfcTransportElementTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcTrimmingPreference(IfcTrimmingPreference enumData);
        /**
         * @param enumData
         */
        void writeIfcTubeBundleTypeEnum(IfcTubeBundleTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcUnitaryEquipmentTypeEnum(IfcUnitaryEquipmentTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcUnitEnum(IfcUnitEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcValveTypeEnum(IfcValveTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcVibrationIsolatorTypeEnum(IfcVibrationIsolatorTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcWallTypeEnum(IfcWallTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcWasteTerminalTypeEnum(IfcWasteTerminalTypeEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcWindowPanelOperationEnum(IfcWindowPanelOperationEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcWindowPanelPositionEnum(IfcWindowPanelPositionEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcWindowStyleConstructionEnum(IfcWindowStyleConstructionEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcWindowStyleOperationEnum(IfcWindowStyleOperationEnum enumData);
        /**
         * @param enumData
         */
        void writeIfcWorkControlTypeEnum(IfcWorkControlTypeEnum enumData);
        /**
         * @param selectData
         */
        void writeIfcActorSelect(IfcActorSelect *value);
        /**
         * @param selectData
         */
        void writeIfcAppliedValueSelect(IfcAppliedValueSelect *value);
        /**
         * @param selectData
         */
        void writeIfcAxis2Placement(IfcAxis2Placement *value);
        /**
         * @param selectData
         */
        void writeIfcBooleanOperand(IfcBooleanOperand *value);
        /**
         * @param selectData
         */
        void writeIfcCharacterStyleSelect(IfcCharacterStyleSelect *value);
        /**
         * @param selectData
         */
        void writeIfcClassificationNotationSelect(IfcClassificationNotationSelect *value);
        /**
         * @param selectData
         */
        void writeIfcColour(IfcColour *value);
        /**
         * @param selectData
         */
        void writeIfcColourOrFactor(IfcColourOrFactor *value);
        /**
         * @param selectData
         */
        void writeIfcConditionCriterionSelect(IfcConditionCriterionSelect *value);
        /**
         * @param selectData
         */
        void writeIfcCsgSelect(IfcCsgSelect *value);
        /**
         * @param selectData
         */
        void writeIfcCurveFontOrScaledCurveFontSelect(IfcCurveFontOrScaledCurveFontSelect *value);
        /**
         * @param selectData
         */
        void writeIfcCurveOrEdgeCurve(IfcCurveOrEdgeCurve *value);
        /**
         * @param selectData
         */
        void writeIfcCurveStyleFontSelect(IfcCurveStyleFontSelect *value);
        /**
         * @param selectData
         */
        void writeIfcDateTimeSelect(IfcDateTimeSelect *value);
        /**
         * @param selectData
         */
        void writeIfcDefinedSymbolSelect(IfcDefinedSymbolSelect *value);
        /**
         * @param selectData
         */
        void writeIfcDerivedMeasureValue(IfcDerivedMeasureValue *value);
        /**
         * @param selectData
         */
        void writeIfcDocumentSelect(IfcDocumentSelect *value);
        /**
         * @param selectData
         */
        void writeIfcDraughtingCalloutElement(IfcDraughtingCalloutElement *value);
        /**
         * @param selectData
         */
        void writeIfcFillAreaStyleTileShapeSelect(IfcFillAreaStyleTileShapeSelect *value);
        /**
         * @param selectData
         */
        void writeIfcFillStyleSelect(IfcFillStyleSelect *value);
        /**
         * @param selectData
         */
        void writeIfcGeometricSetSelect(IfcGeometricSetSelect *value);
        /**
         * @param selectData
         */
        void writeIfcHatchLineDistanceSelect(IfcHatchLineDistanceSelect *value);
        /**
         * @param selectData
         */
        void writeIfcLayeredItem(IfcLayeredItem *value);
        /**
         * @param selectData
         */
        void writeIfcLibrarySelect(IfcLibrarySelect *value);
        /**
         * @param selectData
         */
        void writeIfcLightDistributionDataSourceSelect(IfcLightDistributionDataSourceSelect *value);
        /**
         * @param selectData
         */
        void writeIfcMaterialSelect(IfcMaterialSelect *value);
        /**
         * @param selectData
         */
        void writeIfcMeasureValue(IfcMeasureValue *value);
        /**
         * @param selectData
         */
        void writeIfcMetricValueSelect(IfcMetricValueSelect *value);
        /**
         * @param selectData
         */
        void writeIfcObjectReferenceSelect(IfcObjectReferenceSelect *value);
        /**
         * @param selectData
         */
        void writeIfcOrientationSelect(IfcOrientationSelect *value);
        /**
         * @param selectData
         */
        void writeIfcPointOrVertexPoint(IfcPointOrVertexPoint *value);
        /**
         * @param selectData
         */
        void writeIfcPresentationStyleSelect(IfcPresentationStyleSelect *value);
        /**
         * @param selectData
         */
        void writeIfcShell(IfcShell *value);
        /**
         * @param selectData
         */
        void writeIfcSimpleValue(IfcSimpleValue *value);
        /**
         * @param selectData
         */
        void writeIfcSizeSelect(IfcSizeSelect *value);
        /**
         * @param selectData
         */
        void writeIfcSpecularHighlightSelect(IfcSpecularHighlightSelect *value);
        /**
         * @param selectData
         */
        void writeIfcStructuralActivityAssignmentSelect(IfcStructuralActivityAssignmentSelect *value);
        /**
         * @param selectData
         */
        void writeIfcSurfaceOrFaceSurface(IfcSurfaceOrFaceSurface *value);
        /**
         * @param selectData
         */
        void writeIfcSurfaceStyleElementSelect(IfcSurfaceStyleElementSelect *value);
        /**
         * @param selectData
         */
        void writeIfcSymbolStyleSelect(IfcSymbolStyleSelect *value);
        /**
         * @param selectData
         */
        void writeIfcTextFontSelect(IfcTextFontSelect *value);
        /**
         * @param selectData
         */
        void writeIfcTextStyleSelect(IfcTextStyleSelect *value);
        /**
         * @param selectData
         */
        void writeIfcTrimmingSelect(IfcTrimmingSelect *value);
        /**
         * @param selectData
         */
        void writeIfcUnit(IfcUnit *value);
        /**
         * @param selectData
         */
        void writeIfcValue(IfcValue *value);
        /**
         * @param selectData
         */
        void writeIfcVectorOrDirection(IfcVectorOrDirection *value);
    };
}