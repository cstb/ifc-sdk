string(REPLACE "${CMAKE_SOURCE_DIR}/" "" KEEP_CURRENT_FOLDER_LIST "${CMAKE_CURRENT_LIST_DIR}")

set(subdirs	IfcAxis1Placement 
		IfcAxis2Placement2D 
		IfcAxis2Placement3D 
		IfcBooleanResult 
		IfcBoundingBox 
		IfcBSplineCurve 
		IfcCartesianPoint
		ICTO
		ICTO2D
		ICTO2DnonUniform
		ICTO3D
		ICTO3DnonUniform
		IfcCompositeCurve
		IfcCompositeCurveSegment
		IfcCsgPrimitive3D
		IfcCurve		
		IfcCurveBoundedPlane
		IfcDerivedUnit
		IfcDirection
		IfcEdgeLoop
		IfcElementarySurface
		IfcFaceBasedSurfaceModel
		IfcGeometricRepresentationSubContext
		IfcGeometricSet
		IfcHalfSpaceSolid
		IfcMaterialLayerSet
		IfcOrientedEdge
		IfcPlacement
		IfcPointOnCurve
		IfcPointOnSurface
		IfcRationalBezierCurve
		IfcRectangularTrimmedSurface
# IfcRelConnectsPathElements
		IfcRevolvedAreaSolid
		IfcSectionedSpine
		IfcShellBasedSurfaceModel
		IfcSIUnit
		IfcSolidModel
		IfcStructuralLinearActionVarying
		IfcStructuralPlanarActionVarying
		IfcStructuralSurfaceMemberVarying
		IfcSurfaceOfLinearExtrusion
		IfcSurfaceOfRevolution
		IfcSweptSurface
		IfcTable
		IfcVector		
	)

foreach(subdir ${subdirs})
    set(CURRENT_FOLDER_LIST ${KEEP_CURRENT_FOLDER_LIST})
    add_subdirectory(${subdir})
endforeach(subdir)