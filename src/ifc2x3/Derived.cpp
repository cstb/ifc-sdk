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



#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcAxis1Placement.h>
#include <ifc2x3/IfcAxis2Placement.h>
#include <ifc2x3/IfcAxis2Placement2D.h>
#include <ifc2x3/IfcAxis2Placement3D.h>
#include <ifc2x3/IfcBooleanResult.h>
#include <ifc2x3/IfcBoundingBox.h>
#include <ifc2x3/IfcBSplineCurve.h>
#include <ifc2x3/IfcCartesianPoint.h>
#include <ifc2x3/IfcCartesianTransformationOperator2D.h>
#include <ifc2x3/IfcCartesianTransformationOperator2DnonUniform.h>
#include <ifc2x3/IfcCartesianTransformationOperator3D.h>
#include <ifc2x3/IfcCartesianTransformationOperator3DnonUniform.h>
#include <ifc2x3/IfcCartesianTransformationOperator.h>
#include <ifc2x3/IfcCompositeCurve.h>
#include <ifc2x3/IfcCompositeCurveSegment.h>
#include <ifc2x3/IfcCsgPrimitive3D.h>
#include <ifc2x3/IfcCurveBoundedPlane.h>
#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/IfcDerivedUnit.h>
#include <ifc2x3/IfcDirection.h>
#include <ifc2x3/IfcEdgeLoop.h>
#include <ifc2x3/IfcElementarySurface.h>
#include <ifc2x3/IfcFaceBasedSurfaceModel.h>
#include <ifc2x3/IfcGeometricRepresentationSubContext.h>
#include <ifc2x3/IfcGeometricSet.h>
#include <ifc2x3/IfcHalfSpaceSolid.h>
#include <ifc2x3/IfcMaterialLayerSet.h>
#include <ifc2x3/IfcOrientedEdge.h>
#include <ifc2x3/IfcPlacement.h>
#include <ifc2x3/IfcPointOnCurve.h>
#include <ifc2x3/IfcPointOnSurface.h>
#include <ifc2x3/IfcRationalBezierCurve.h>
#include <ifc2x3/IfcRectangularTrimmedSurface.h>
#include <ifc2x3/IfcRelConnectsPathElements.h>
#include <ifc2x3/IfcRevolvedAreaSolid.h>
#include <ifc2x3/IfcSectionedSpine.h>
#include <ifc2x3/IfcShellBasedSurfaceModel.h>
#include <ifc2x3/IfcSIUnit.h>
#include <ifc2x3/IfcSolidModel.h>
#include <ifc2x3/IfcStructuralLinearActionVarying.h>
#include <ifc2x3/IfcStructuralPlanarActionVarying.h>
#include <ifc2x3/IfcStructuralSurfaceMemberVarying.h>
#include <ifc2x3/IfcSurfaceOfLinearExtrusion.h>
#include <ifc2x3/IfcSurfaceOfRevolution.h>
#include <ifc2x3/IfcSweptSurface.h>
#include <ifc2x3/IfcTable.h>
#include <ifc2x3/IfcUnit.h>
#include <ifc2x3/IfcVector.h>
#include <ifc2x3/IfcVectorOrDirection.h>
#include <ifc2x3/IfcConic.h>
#include <ifc2x3/IfcBooleanOperand.h>
#include <ifc2x3/IfcGeometricSetSelect.h>
#include <ifc2x3/IfcMaterial.h>
#include <ifc2x3/IfcMaterialList.h>
#include <ifc2x3/IfcMaterialLayerSetUsage.h>
#include <ifc2x3/IfcMaterialSelect.h>
#include <ifc2x3/IfcSIUnit.h>
//#include <ifc2x3/IfcSIUnitName.h>

#ifndef WIN32
# include <cmath>
#endif

#include "precompiled.h"

#ifdef _DEBUG
#  define LOG_DEBUG(msg) std::cerr << msg
#else
#  define LOG_DEBUG(msg)
#endif
#define LOG_ERROR(msg) std::cerr << msg

using namespace ifc2x3;
////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
FUNCTION IfcNormalise
	(Arg : IfcVectorOrDirection)
	: IfcVectorOrDirection;
  LOCAL
    Ndim : INTEGER;
    V    : IfcDirection
         := IfcRepresentationItem() || IfcGeometricRepresentationItem () || IfcDirection([1.,0.]);
    Vec  : IfcVector
         := IfcRepresentationItem() || IfcGeometricRepresentationItem () || IfcVector (
              IfcRepresentationItem() || IfcGeometricRepresentationItem () || IfcDirection([1.,0.]), 1.);
    Mag  : REAL;
    Result : IfcVectorOrDirection
           := V;
  END_LOCAL;

    IF NOT EXISTS (Arg) THEN
      RETURN (?);
    ELSE
      Ndim := Arg.Dim;
      IF 'IFC2X3.IFCVECTOR' IN TYPEOF(Arg) THEN
        BEGIN
  	      V.DirectionRatios := Arg.Orientation.DirectionRatios;
          Vec.Magnitude := Arg.Magnitude;
          Vec.Orientation := V;
          IF Arg.Magnitude = 0.0 THEN
            RETURN(?);
          ELSE
            Vec.Magnitude := 1.0;
          END_IF;
        END;
      ELSE
        V.DirectionRatios := Arg.DirectionRatios;
      END_IF;
      Mag := 0.0;
        REPEAT i := 1 TO Ndim;
          Mag := Mag + V.DirectionRatios[i]*V.DirectionRatios[i];
        END_REPEAT;
      IF Mag > 0.0 THEN
        Mag := SQRT(Mag);
        REPEAT i := 1 TO Ndim;
          V.DirectionRatios[i] := V.DirectionRatios[i]/Mag;
        END_REPEAT;
        IF 'IFC2X3.IFCVECTOR' IN TYPEOF(arg) THEN
          Vec.Orientation := V;
          Result := Vec;
        ELSE
          Result := V;
        END_IF;
      ELSE
        RETURN(?);
      END_IF;
    END_IF;
    RETURN (Result);
END_FUNCTION;
*/

// IfcVector or direction is only used for this function
// we will two two instead, one for IfcVector and one pour IfcDirection

Step::RefPtr<IfcVector> IfcNormalise(const IfcVector* Arg)
{
    LOG_DEBUG("IfcNormalise(IfcVector)");
	Step::Integer NDim;
	Step::Real Mag;
	Step::RefPtr<IfcVector> Result;
	Step::RefPtr<IfcDirection> V;
	Step::RefPtr<IfcVector> Vec;

	if (!Arg)
	{
		LOG_DEBUG("IfcNormalise(IfcVector) return 0 Arg don't exist");
        return 0;
	}
	else
	{
		V = static_cast<ifc2x3::ExpressDataSet*>(Arg->getExpressDataSet())->createIfcDirection(true);
		V->getDirectionRatios().push_back(1.0);
		V->getDirectionRatios().push_back(0.0);

		Vec = static_cast<ifc2x3::ExpressDataSet*>(Arg->getExpressDataSet())->createIfcVector(true);
		Vec->setOrientation(V);
		Vec->setMagnitude(1.0);

		NDim = Arg->getOrientation()->getDim();
		V->setDirectionRatios(Arg->getOrientation()->getDirectionRatios());
		Vec->setMagnitude(Arg->getMagnitude());
		Vec->setOrientation(V);
		if(Arg->getMagnitude() == 0.0)
		{
			LOG_DEBUG( "Arg Orientation : [" <<	Arg->getOrientation()->getDirectionRatios()[0] << ";"<<
													Arg->getOrientation()->getDirectionRatios()[1] << ";"<<
													Arg->getOrientation()->getDirectionRatios()[2] << "]");
			LOG_DEBUG("IfcNormalise(IfcVector) return 0 Mag=0");
			return 0;
		}
		else
			Vec->setMagnitude(1.0);

		Mag = 0.0;
		LOG_DEBUG( "V : [" <<	V->getDirectionRatios()[0] << ";"<<
								V->getDirectionRatios()[1] << ";"<<
								V->getDirectionRatios()[2] << "]");
		for(Step::Integer i = 0 ; i < NDim ; i++)
		{
			Mag = Mag + (V->getDirectionRatios()[i] * V->getDirectionRatios()[i]);
		}

		if(Mag > 0.0)
		{
			Mag = sqrt(Mag);

			for(Step::Integer i = 0 ; i < NDim ; i++)
				V->getDirectionRatios()[i] = V->getDirectionRatios()[i]/Mag ;

			Vec->setOrientation(V);
			Result = Vec;
		}
		else
		{
			LOG_DEBUG("IfcNormalise(IfcVector) (Mag=0) return 0");
			return 0;
		}
	}
	LOG_DEBUG("IfcNormalise::End");
	return Result;
}

Step::RefPtr<IfcDirection> IfcNormalise(const IfcDirection *Arg)
{
    LOG_DEBUG("IfcNormalise(Direction)");
	Step::Integer NDim;
	Step::RefPtr<IfcDirection> V;
	Step::Real Mag;
	Step::RefPtr<IfcDirection> Result;

	if (!Arg)
	{
		LOG_DEBUG("IfcNormalise::End Bad 1");
		return 0;
	}
	else
	{
		V = static_cast<ifc2x3::ExpressDataSet*>(Arg->getExpressDataSet())->createIfcDirection(true);
		V->getDirectionRatios().push_back(1.0);
		V->getDirectionRatios().push_back(0.0);
		V->getDirectionRatios().push_back(0.0);

		NDim = Arg->getDim();
		V->setDirectionRatios(Arg->getDirectionRatios());

		Result = static_cast<ifc2x3::ExpressDataSet*>(Arg->getExpressDataSet())->createIfcDirection(true);
		Mag = 0.0;
		for(Step::Integer i = 0 ; i < NDim ; i++)
		{
			Mag = Mag + (V->getDirectionRatios()[i] * V->getDirectionRatios()[i]);
		}

		if(Mag > 0.0)
		{
			Mag = sqrt(Mag);

			for(Step::Integer i = 0 ; i < NDim ; i++)
			{
				V->getDirectionRatios()[i] = V->getDirectionRatios()[i]/Mag ;
			}
			Result = V;
		}
		else
		{
			LOG_DEBUG("IfcNormalise::End Bad 2");
			return 0;
		}
	}

/*	LOG_DEBUG("IfcNormalise : Result->getDirectionRatios()[0]=" << Result->getDirectionRatios()[0] << std::endl <<
              "               Result->getDirectionRatios()[1]=" << Result->getDirectionRatios()[1] << std::endl <<
              "               Result->getDirectionRatios()[2]=" << (NDim == 3 ? Result->getDirectionRatios()[2] : 0.0 ) )
*/
	//LOG_DEBUG( "V->getDirectionRatios()[0]" << V->getDirectionRatios()[0] << std::endl;
	//LOG_DEBUG( "V->getDirectionRatios()[1]" << V->getDirectionRatios()[1] << std::endl;

	LOG_DEBUG("IfcNormalise::End");
	return Result;
}

/*
ENTITY IfcAxis1Placement
 SUBTYPE OF (IfcPlacement);
	Axis : OPTIONAL IfcDirection;
 DERIVE
	Z : IfcDirection := NVL (IfcNormalise(Axis), IfcRepresentationItem() || IfcGeometricRepresentationItem () || IfcDirection([0.0,0.0,1.0]));
 WHERE
	WR1 : (NOT (EXISTS (Axis))) OR (Axis.Dim = 3);
	WR2 : SELF\IfcPlacement.Location.Dim = 3;
END_ENTITY;
*/
IfcDirection * IfcAxis1Placement::getZ() const
{
	LOG_DEBUG("IfcAxis1Placement::getZ()");

	Step::RefPtr<IfcDirection> Result = IfcNormalise( getAxis() );

	if ( !Result.valid() )
	{
		Result = static_cast<ifc2x3::ExpressDataSet*>(m_expressDataSet)->createIfcDirection(true);

		Result->getDirectionRatios().push_back(0);
		Result->getDirectionRatios().push_back(0);
		Result->getDirectionRatios().push_back(1);
	}

	LOG_DEBUG("IfcAxis1Placement::getZ()::End");
	return Result.release();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
FUNCTION IfcOrthogonalComplement
(Vec : IfcDirection)
: IfcDirection;
 LOCAL
	Result : IfcDirection ;
 END_LOCAL;
 IF NOT EXISTS (Vec) OR (Vec.Dim <> 2) THEN
	RETURN(?);
 ELSE
	Result := IfcRepresentationItem() || IfcGeometricRepresentationItem () || IfcDirection([-Vec.DirectionRatios[2], Vec.DirectionRatios[1]]);
	RETURN(Result);
 END_IF;
END_FUNCTION;
*/
Step::RefPtr<IfcDirection> IfcOrthogonalComplement(Step::RefPtr<IfcDirection> Arg)
{
    LOG_DEBUG("IfcOrthogonalComplement()");
	if(!Arg.valid() || Arg->getDim() != 2) 
	{
		LOG_DEBUG("IfcOrthogonalComplement() End Bad");
		return 0;
	}
	else
	{
		Step::RefPtr<IfcDirection> result = static_cast<ifc2x3::ExpressDataSet*>(Arg->getExpressDataSet())->createIfcDirection(true);
		result->getDirectionRatios().push_back(-Arg->getDirectionRatios()[1]);
		result->getDirectionRatios().push_back(Arg->getDirectionRatios()[0]);
		LOG_DEBUG("IfcOrthogonalComplement::End");
		return result;
	}
}

/*FUNCTION IfcBuild2Axes
(RefDirection : IfcDirection)
: LIST [2:2] OF IfcDirection;
LOCAL
D : IfcDirection := NVL(IfcNormalise(RefDirection),
	IfcRepresentationItem() || IfcGeometricRepresentationItem () || IfcDirection([1.0,0.0]));
END_LOCAL;
RETURN([D, IfcOrthogonalComplement(D)]);
END_FUNCTION;
*/
List_IfcDirection_2_2 IfcBuild2Axes(const IfcDirection* Arg)
{
    LOG_DEBUG("IfcBuild2Axes()");
	List_IfcDirection_2_2 result;

    Step::RefPtr<IfcDirection> D = IfcNormalise(Arg);

    if(!D.valid())
    {
        LOG_DEBUG("IfcBuild2Axes : creating a default IfcDirection([1.0,0.0])");
        D = static_cast<ifc2x3::ExpressDataSet*>(Arg->getExpressDataSet())->createIfcDirection(true);
        D->getDirectionRatios().push_back(1.0);
        D->getDirectionRatios().push_back(0.0);
        LOG_DEBUG("IfcBuild2Axes : created a default IfcDirection([1.0,0.0])");
    }

    result.push_back(D);
    result.push_back(IfcOrthogonalComplement(D));
	LOG_DEBUG("IfcBuild2Axes::End");

	return result;
}
/*
ENTITY IfcAxis2Placement2D
  SUBTYPE OF ( 	IfcPlacement);
	RefDirection : OPTIONAL IfcDirection;
  DERIVE
	P : LIST [2:2] OF IfcDirection :=  IfcBuild2Axes(RefDirection);
  WHERE
	WR1 	 :  	(NOT (EXISTS (RefDirection))) OR (RefDirection.Dim = 2);
	WR2 	 :  	SELF\IfcPlacement.Location.Dim = 2;
END_ENTITY;
*/

List_IfcDirection_2_2 IfcAxis2Placement2D::getP() const
{
	LOG_DEBUG("IfcAxis2Placement2D::getP()");

    if (!getRefDirection()){
        Step::RefPtr<IfcDirection>refDirection = static_cast<ifc2x3::ExpressDataSet*>(getExpressDataSet())->createIfcDirection(true);
	LOG_DEBUG("IfcAxis2Placement2D::getP()::End");
        return IfcBuild2Axes( refDirection.get() );
    }
    else
    {
	    LOG_DEBUG("IfcAxis2Placement2D::getP()::End");
        return IfcBuild2Axes(getRefDirection());
    }

}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
FUNCTION IfcVectorDifference
(Arg1, Arg2 : IfcVectorOrDirection): IfcVector;
	LOCAL
		Result : IfcVector;
		Res, Vec1, Vec2 : IfcDirection;
		Mag, Mag1, Mag2 : REAL;
		Ndim : INTEGER;
	END_LOCAL;

	IF ((NOT EXISTS (Arg1)) OR (NOT EXISTS (Arg2))) OR (Arg1.Dim <> Arg2.Dim) THEN
		RETURN (?) ;
	ELSE
		BEGIN

			IF 'IFC2X3.IFCVECTOR' IN TYPEOF(Arg1) THEN
				Mag1 := Arg1.Magnitude;
				Vec1 := Arg1.Orientation;
			ELSE
				Mag1 := 1.0;
				Vec1 := Arg1;
			END_IF;
			IF 'IFC2X3.IFCVECTOR' IN TYPEOF(Arg2) THEN
				Mag2 := Arg2.Magnitude;
				Vec2 := Arg2.Orientation;
			ELSE
				Mag2 := 1.0;
				Vec2 := Arg2;
			END_IF;

			Vec1 := IfcNormalise (Vec1);
			Vec2 := IfcNormalise (Vec2);
			Ndim := SIZEOF(Vec1.DirectionRatios);
			Mag  := 0.0;

			Res  := IfcRepresentationItem() || IfcGeometricRepresentationItem () || IfcDirection([0.0:Ndim]);

			REPEAT i := 1 TO Ndim;
				Res.DirectionRatios[i] := Mag1*Vec1.DirectionRatios[i] - Mag2*Vec2.DirectionRatios[i];
				Mag := Mag + (Res.DirectionRatios[i]*Res.DirectionRatios[i]);
			END_REPEAT;

			IF (Mag > 0.0 ) THEN
				Result := IfcRepresentationItem() || IfcGeometricRepresentationItem () || IfcVector( Res, SQRT(Mag));
			ELSE
				Result := IfcRepresentationItem() || IfcGeometricRepresentationItem () || IfcVector( Vec1, 0.0);
			END_IF;
		END;
	END_IF;
	RETURN (Result);
END_FUNCTION;
*/
Step::RefPtr<IfcVector> IfcVectorDifference(Step::RefPtr<IfcVectorOrDirection> Arg1, Step::RefPtr<IfcVectorOrDirection> Arg2)
{
	LOG_DEBUG("IfcVectorDifference");

	Step::RefPtr<IfcVector> Result;

	Step::RefPtr<IfcDirection> Res;
	Step::RefPtr<IfcDirection> Vec1;
	Step::RefPtr<IfcDirection> Vec2;

	Step::Real Mag;
	Step::Real Mag1;
	Step::Real Mag2;

	Step::Integer Ndim;

	if(!Arg1.valid() || !Arg2.valid() /*TODO : || (Arg1->getOrientation().size() != Arg2->getOrientation().size())*/)// TODO: replace by call to getDim when it's done
	{
		LOG_DEBUG("IfcVectorDifference::End bad");
		return 0;
	}
	else
	{
		Res = static_cast<ifc2x3::ExpressDataSet*>(Arg1->getExpressDataSet())->createIfcDirection(true);
		Result = static_cast<ifc2x3::ExpressDataSet*>(Arg1->getExpressDataSet())->createIfcVector(true);

		LOG_DEBUG("IfcVectorDifference::If(Arg1)");
		if(Arg1->currentType()==IfcVectorOrDirection::IFCVECTOR)
		{
			Mag1 = Arg1->getIfcVector()->getMagnitude();
			Vec1 = Arg1->getIfcVector()->getOrientation();
			LOG_DEBUG("IfcVectorDifference::If(Arg1 Vector)");
		}
		else
		{
			Mag1 = 1.0;
			Vec1 = Arg1->getIfcDirection();
			LOG_DEBUG("IfcVectorDifference::If(Arg1 Direction)");
		}
		LOG_DEBUG("IfcVectorDifference::If(Arg2)");
		if(Arg2->currentType()==IfcVectorOrDirection::IFCVECTOR)
		{
			Mag2 = Arg2->getIfcVector()->getMagnitude();
			Vec2 = Arg2->getIfcVector()->getOrientation();
			LOG_DEBUG("IfcVectorDifference::If(Arg2 Vector)");
		}
		else
		{
			Mag2 = 1.0;
			Vec2 = Arg2->getIfcDirection();
			LOG_DEBUG("IfcVectorDifference::If(Arg2 Direction)");
		}
		LOG_DEBUG("IfcVectorDifference::If(Arg1 and Arg2) done");
		Vec1 = IfcNormalise(Vec1.get());
		Vec2 = IfcNormalise(Vec2.get());
		Ndim = Vec1->getDim();
		Mag = 0.0;
        //Res.DirectionRatios := [0.0:Ndim];
		for(Step::Integer i=0;i<Ndim;++i)
		{
			Res->getDirectionRatios().push_back(0.0);
		}


		for(int i=0;i<Ndim ; i++)
		{
			Res->getDirectionRatios()[i] = (Mag1 * Vec1->getDirectionRatios()[i]) - (Mag2 * Vec2->getDirectionRatios()[i]);
			Mag = Mag + (Res->getDirectionRatios()[i]*Res->getDirectionRatios()[i]);
		}

		LOG_DEBUG("IfcVectorDifference::Res=["<<Res->getDirectionRatios()[0]<<";"<<Res->getDirectionRatios()[1]<<";"<<Res->getDirectionRatios()[2]<<"]" );

		if(Mag > 0.0)
		{
			Result->setOrientation(Res);
			Result->setMagnitude(sqrt(Mag));
		}
		else
		{
			Result->setOrientation(Vec1);
			Result->setMagnitude(0.0);
		}
		LOG_DEBUG("IfcVectorDifference::Result=["<<Result->getOrientation()->getDirectionRatios()[0]<<";"<<Result->getOrientation()->getDirectionRatios()[1]<<";"<<Result->getOrientation()->getDirectionRatios()[2]<<"]" );

	}
	LOG_DEBUG("IfcVectorDifference::End");

	return Result;
}
/*FUNCTION IfcDotProduct
(Arg1, Arg2 : IfcDirection): REAL;
	LOCAL
		Scalar : REAL;
		Vec1, Vec2 : IfcDirection;
		Ndim   : INTEGER;
	END_LOCAL;

	IF NOT EXISTS (Arg1) OR NOT EXISTS (Arg2) THEN
		Scalar := ?;
	ELSE
		IF (Arg1.Dim <> Arg2.Dim) THEN
			Scalar := ?;
		ELSE
			BEGIN
				Vec1 := IfcNormalise(Arg1);
				Vec2 := IfcNormalise(Arg2);
				Ndim := Arg1.Dim;
				Scalar := 0.0;
				REPEAT i := 1 TO Ndim;
					Scalar := Scalar + Vec1.DirectionRatios[i]*Vec2.DirectionRatios[i];
				END_REPEAT;
			END;
		END_IF;
	END_IF;
	RETURN (Scalar);
END_FUNCTION;
*/
Step::Real IfcDotProduct(const IfcDirection* Arg1, const IfcDirection* Arg2)
{
	LOG_DEBUG("IfcDotProduct");
	Step::Real Scalar;
	Step::RefPtr<IfcDirection> Vec1;
	Step::RefPtr<IfcDirection> Vec2;
	Step::Integer NDim;

	if(!Arg1 || !Arg2)
		Scalar = 0;
	else
	{
		if(Arg1->getDim() != Arg2->getDim())
			Scalar = 0;
		else
		{
			Vec1 = static_cast<ifc2x3::ExpressDataSet*>(Arg1->getExpressDataSet())->createIfcDirection(true);
			Vec2 = static_cast<ifc2x3::ExpressDataSet*>(Arg2->getExpressDataSet())->createIfcDirection(true);

			Vec1 = IfcNormalise(Arg1);
			Vec2 = IfcNormalise(Arg2);
			NDim = Arg1->getDim();
			Scalar = 0.0;
			for(int i=0; i< NDim ; i++)
				Scalar = Scalar + (Vec1->getDirectionRatios()[i]*Vec2->getDirectionRatios()[i]);
		}
	}
    LOG_DEBUG("IfcCrossProduct::Scalar="<<Scalar);
	LOG_DEBUG("IfcDotProduct::End");

	return Scalar;
}


/*
FUNCTION IfcScalarTimesVector
	(Scalar : REAL; Vec : IfcVectorOrDirection)
	: IfcVector;
  LOCAL
    V : IfcDirection;
    Mag : REAL;
    Result : IfcVector;
  END_LOCAL;

    IF NOT EXISTS (Scalar) OR NOT EXISTS (Vec) THEN
      RETURN (?) ;
    ELSE
      IF 'IFC2X3.IFCVECTOR' IN TYPEOF (Vec) THEN
        V := Vec.Orientation;
        Mag := Scalar * Vec.Magnitude;
      ELSE
        V := Vec;
        Mag := Scalar;
      END_IF;
      IF (Mag < 0.0 ) THEN
        REPEAT i := 1 TO SIZEOF(V.DirectionRatios);
          V.DirectionRatios[i] := -V.DirectionRatios[i];
        END_REPEAT;
        Mag := -Mag;
      END_IF;
      Result := IfcRepresentationItem() || IfcGeometricRepresentationItem () || IfcVector(IfcNormalise(V), Mag);
    END_IF;
    RETURN (Result);
END_FUNCTION;

*/
Step::RefPtr<IfcVector> IfcScalarTimesVector(Step::Real Scalar, const IfcDirection* Vec)
{
	LOG_DEBUG("IfcScalarTimesVector");

	Step::RefPtr<IfcDirection> V;
	Step::Real Mag;
	Step::RefPtr<IfcVector> Result;

	if( Step::isUnset(Scalar) || !Vec)
	{
		LOG_DEBUG("IfcScalarTimesVector::End bad");
		return 0;
	}
	else
	{
		V = static_cast<ifc2x3::ExpressDataSet*>(Vec->getExpressDataSet())->createIfcDirection(true);
		Result = static_cast<ifc2x3::ExpressDataSet*>(Vec->getExpressDataSet())->createIfcVector(true);

		V->setDirectionRatios(Vec->getDirectionRatios());
		Mag = Scalar;
		if(Mag < 0.0)
		{
			for(Step::Integer i=0; i<V->getDim(); i++)
			{
				V->getDirectionRatios()[i] = -V->getDirectionRatios()[i];
			}
			Mag = -Mag;
		}
		Result->setOrientation(IfcNormalise(V.get()));
		Result->setMagnitude(Mag);
	}

    LOG_DEBUG("IfcScalarTimesVector::Result=["<<Result->getOrientation()->getDirectionRatios()[0]<<";"<<Result->getOrientation()->getDirectionRatios()[1]<<";"<<Result->getOrientation()->getDirectionRatios()[2]<<"]" );
	LOG_DEBUG("IfcScalarTimesVector::End");

	return Result;
}

Step::RefPtr<IfcVector> IfcScalarTimesVector(Step::Real Scalar, const IfcVector* Vec)
{
	LOG_DEBUG("IfcScalarTimesVector");

	Step::RefPtr<IfcDirection> V;
	Step::Real Mag;
	Step::RefPtr<IfcVector> Result;

	if( Step::isUnset(Scalar) || !Vec)
	{
		LOG_DEBUG("IfcScalarTimesVector::Bad End");
		return 0;
	}
	else
	{
		V = static_cast<ifc2x3::ExpressDataSet*>(Vec->getExpressDataSet())->createIfcDirection(true);
		Result = static_cast<ifc2x3::ExpressDataSet*>(Vec->getExpressDataSet())->createIfcVector(true);

		V->setDirectionRatios(Vec->getOrientation()->getDirectionRatios());
		Mag = Scalar * Vec->getMagnitude();

		if(Mag < 0.0)
		{
			for(Step::Integer i=0; i<V->getDim(); i++)
			{
				V->getDirectionRatios()[i] = -V->getDirectionRatios()[i];
			}
			Mag = -Mag;
		}
		Result->setOrientation(IfcNormalise(V.get()));
		Result->setMagnitude(Mag);
	}
	LOG_DEBUG("IfcScalarTimesVector::End");

	return Result;
}

/*
FUNCTION IfcCrossProduct
(Arg1, Arg2 : IfcDirection)
: IfcVector;
	LOCAL
		Mag : REAL;
		Res : IfcDirection;
		V1,V2  : LIST[3:3] OF REAL;
		Result : IfcVector;
	END_LOCAL;

	IF (NOT EXISTS (Arg1) OR (Arg1.Dim = 2)) OR (NOT EXISTS (Arg2) OR (Arg2.Dim = 2)) THEN
		RETURN(?);
	ELSE
		BEGIN
			V1  := IfcNormalise(Arg1).DirectionRatios;
			V2  := IfcNormalise(Arg2).DirectionRatios;
			Res := IfcRepresentationItem() || IfcGeometricRepresentationItem ()
				|| IfcDirection([(V1[2]*V2[3] - V1[3]*V2[2]), (V1[3]*V2[1] - V1[1]*V2[3]), (V1[1]*V2[2] - V1[2]*V2[1])]);
			Mag := 0.0;
			REPEAT i := 1 TO 3;
				Mag := Mag + Res.DirectionRatios[i]*Res.DirectionRatios[i];
			END_REPEAT;
			IF (Mag > 0.0) THEN
				Result := IfcRepresentationItem() || IfcGeometricRepresentationItem () || IfcVector(Res, SQRT(Mag));
			ELSE
				Result := IfcRepresentationItem() || IfcGeometricRepresentationItem () || IfcVector(Arg1, 0.0);
			END_IF;
			RETURN(Result);
		END;
	END_IF;
END_FUNCTION;
*/
Step::RefPtr<IfcVector> IfcCrossProduct(const IfcDirection* Arg1, const IfcDirection* Arg2)
{
	LOG_DEBUG("IfcCrossProduct");
	Step::Real Mag;
	Step::RefPtr<IfcDirection> Res;
	List_Real_2_3 V1;
	List_Real_2_3 V2;
	Step::RefPtr<IfcVector> Result;

	if((!Arg1 || Arg1->getDim()==2) || (!Arg2 || Arg2->getDim()==2))
	{
		LOG_DEBUG("IfcCrossProduct: Bad End Arg1 and Arg2");
		return 0;
	}
	else
	{
		Res = static_cast<ifc2x3::ExpressDataSet*>(Arg1->getExpressDataSet())->createIfcDirection(true);
		Result = static_cast<ifc2x3::ExpressDataSet*>(Arg1->getExpressDataSet())->createIfcVector(true);

		LOG_DEBUG( "Arg1 = [" << Arg1->getDirectionRatios()[0] << ";" << Arg1->getDirectionRatios()[1] << ";" <<  Arg1->getDirectionRatios()[2]<< "]" );
		LOG_DEBUG( "Arg2 = [" << Arg2->getDirectionRatios()[0] << ";" << Arg2->getDirectionRatios()[1] << ";" <<  Arg2->getDirectionRatios()[2]<< "]" );

		LOG_DEBUG("IfcCrossProduct::V1 = IfcNormalise(Arg1)->getDirectionRatios();");
		Step::RefPtr<IfcDirection> D1 = IfcNormalise(Arg1);
		Step::RefPtr<IfcDirection> D2 = IfcNormalise(Arg2);

		if(D1.valid() && D2.valid())
		{
			V1 = IfcNormalise(D1.get())->getDirectionRatios();
			V2 = IfcNormalise(D2.get())->getDirectionRatios();
		}
		else
		{
			LOG_DEBUG("IfcCrossProduct::Bad End");
			return 0;
		}

		Res->getDirectionRatios().push_back((V1[1]*V2[2])-(V1[2]*V2[1]));
		Res->getDirectionRatios().push_back((V1[2]*V2[0])-(V1[0]*V2[2]));
		Res->getDirectionRatios().push_back((V1[0]*V2[1])-(V1[1]*V2[0]));

		Mag = 0.0;
		for(int i=0; i<3; i++)
		{
			Mag = Mag + (Res->getDirectionRatios()[i]*Res->getDirectionRatios()[i]);
		}
		if(Mag > 0.0)
		{
			Result->setOrientation(Res);
			Result->setMagnitude(sqrt(Mag));
		}
		else
		{
            Res->setDirectionRatios(Arg1->getDirectionRatios());
			Result->setOrientation(Res);
			Result->setMagnitude(0.0);
		}

        LOG_DEBUG("IfcCrossProduct::Result=["<<Result->getOrientation()->getDirectionRatios()[0]<<";"<<Result->getOrientation()->getDirectionRatios()[1]<<";"<<Result->getOrientation()->getDirectionRatios()[2]<<"]" );
		LOG_DEBUG("IfcCrossProduct::End");
		return Result;
	}
}

/*
FUNCTION IfcFirstProjAxis
	(ZAxis, Arg : IfcDirection)
	: IfcDirection;
  LOCAL
    XAxis : IfcDirection;
    V     : IfcDirection;
    Z     : IfcDirection;
    XVec  : IfcVector;
  END_LOCAL;

    IF (NOT EXISTS(ZAxis)) THEN
      RETURN (?) ;
    ELSE
      Z := IfcNormalise(ZAxis);
      IF NOT EXISTS(Arg) THEN
        IF (Z.DirectionRatios <> [1.0,0.0,0.0]) THEN
          V := IfcRepresentationItem() || IfcGeometricRepresentationItem () || IfcDirection([1.0,0.0,0.0]);
        ELSE
          V := IfcRepresentationItem() || IfcGeometricRepresentationItem () || IfcDirection([0.0,1.0,0.0]);
        END_IF;
      ELSE
        IF (Arg.Dim <> 3) THEN
          RETURN (?) ;
        END_IF;
        IF ((IfcCrossProduct(Arg,Z).Magnitude) = 0.0) THEN
          RETURN (?);
        ELSE
          V := IfcNormalise(Arg);
        END_IF;
      END_IF;
      XVec  := IfcScalarTimesVector(IfcDotProduct(V, Z), Z);
      XAxis := IfcVectorDifference(V, XVec).Orientation;
      XAxis := IfcNormalise(XAxis);
    END_IF;
    RETURN(XAxis);
END_FUNCTION;

*/
Step::RefPtr<IfcDirection> IfcFirstProjAxis(const IfcDirection* ZAxis, const IfcDirection* Arg)
{
	LOG_DEBUG("IfcFirstProjAxis");
	Step::RefPtr<IfcDirection> XAxis;
	Step::RefPtr<IfcDirection> V;
	Step::RefPtr<IfcDirection> Z;
	Step::RefPtr<IfcVector> XVec;

	if(!ZAxis)
	{
		LOG_DEBUG("IfcFirstProjAxis::End Bad ZAxis no valid");
		return 0;
	}
	else
	{
		LOG_DEBUG("IfcFirstProjAxis::setDirectionRatios()");
//		XAxis = static_cast<ifc2x3::ExpressDataSet*>(Arg->getExpressDataSet())->createIfcDirection(true);
//		V = static_cast<ifc2x3::ExpressDataSet*>(Arg->getExpressDataSet())->createIfcDirection(true);
//		Z = static_cast<ifc2x3::ExpressDataSet*>(Arg->getExpressDataSet())->createIfcDirection(true);
//		XVec = static_cast<ifc2x3::ExpressDataSet*>(Arg->getExpressDataSet())->createIfcVector(true);

		Z = IfcNormalise(ZAxis);

		if(!Arg)
		{/*
		 IF (Z.DirectionRatios <> [1.0,0.0,0.0]) THEN
			 V := IfcRepresentationItem() || IfcGeometricRepresentationItem () || IfcDirection([1.0,0.0,0.0]);
		 ELSE
			 V := IfcRepresentationItem() || IfcGeometricRepresentationItem () || IfcDirection([0.0,1.0,0.0]);
		 END_IF;
		 */
			if(!(Z->getDirectionRatios()[0]==1 && Z->getDirectionRatios()[1]==0 && Z->getDirectionRatios()[1]==0))
			{
			    LOG_DEBUG("IfcFirstProjAxis::Z != [1,0,0]");

				V = static_cast<ifc2x3::ExpressDataSet*>(ZAxis->getExpressDataSet())->createIfcDirection(true);
				V->getDirectionRatios().push_back(1.0);
				V->getDirectionRatios().push_back(0.0);
				V->getDirectionRatios().push_back(0.0);

			}
			else
			{
			    LOG_DEBUG("IfcFirstProjAxis::Z == [1,0,0]");

				V = static_cast<ifc2x3::ExpressDataSet*>(ZAxis->getExpressDataSet())->createIfcDirection(true);
				V->getDirectionRatios().push_back(0.0);
				V->getDirectionRatios().push_back(1.0);
				V->getDirectionRatios().push_back(0.0);
			}
		}
		else
		{
			/*
			IF (Arg.Dim <> 3) THEN
				RETURN (?) ;
			END_IF;
			IF ((IfcCrossProduct(Arg,Z).Magnitude) = 0.0) THEN
				RETURN (?);
			ELSE
				V := IfcNormalise(Arg);
			END_IF;
			*/

			if(Arg->getDim()!=3)//
			{
				LOG_DEBUG("IfcFirstProjAxis::Bad End (Dim!=3)");
				return 0;
			}

			Step::RefPtr<ifc2x3::IfcVector> cross = IfcCrossProduct(Arg,Z.get());

			if((cross->getMagnitude()) == 0.0)
			{
				LOG_DEBUG("IfcFirstProjAxis::Bad End (Magn==0)");
				return 0;
			}
			else
				V = IfcNormalise(Arg);
		}

        LOG_DEBUG("IfcFirstProjAxis::V=["<<V->getDirectionRatios()[0]<<";"<<V->getDirectionRatios()[1]<<";"<<V->getDirectionRatios()[2]<<"]" );


		// 		XVec  := IfcScalarTimesVector(IfcDotProduct(V, Z), Z);
		LOG_DEBUG("IfcFirstProjAxis::IfcScalarTimesVector(IfcDotProduct(V, Z)=("<< IfcDotProduct(V.get(), Z.get()) <<"), Z);");
		XVec = IfcScalarTimesVector(IfcDotProduct(V.get(), Z.get()), Z.get());
        LOG_DEBUG("IfcFirstProjAxis::XVec=["<<XVec->getOrientation()->getDirectionRatios()[0]<<";"<<XVec->getOrientation()->getDirectionRatios()[1]<<";"<<XVec->getOrientation()->getDirectionRatios()[2]<<"]" );


		/*

		XAxis := IfcVectorDifference(V, XVec).Orientation;
		XAxis := IfcNormalise(XAxis);
		*/
		Step::RefPtr<IfcVectorOrDirection> Arg1 = new IfcVectorOrDirection;

		LOG_DEBUG("IfcFirstProjAxis::Arg1->setIfcDirection(V.get());");
		Arg1->setIfcDirection(V.get());
		Step::RefPtr<IfcVectorOrDirection> Arg2  = new IfcVectorOrDirection;

		LOG_DEBUG("IfcFirstProjAxis::Arg2->setIfcVector(XVec.get());");
		Arg2->setIfcVector(XVec.get());

		LOG_DEBUG("IfcFirstProjAxis::XAxis");
		Step::RefPtr<ifc2x3::IfcVector> vecdiff = IfcVectorDifference(Arg1, Arg2);
		XAxis = vecdiff->getOrientation();

		LOG_DEBUG("IfcFirstProjAxis::XAxis=["<<XAxis->getDirectionRatios()[0]<<";"<<XAxis->getDirectionRatios()[1]<<";"<<XAxis->getDirectionRatios()[2]<<"]" );
		XAxis = IfcNormalise(XAxis.get());
	}

	LOG_DEBUG("IfcFirstProjAxis::End");

	return XAxis;
}
/*
FUNCTION IfcBuildAxes
(Axis, RefDirection : IfcDirection) : LIST [3:3] OF IfcDirection;
LOCAL
	D1, D2 : IfcDirection;
END_LOCAL;
	D1 := NVL(	IfcNormalise(Axis), IfcRepresentationItem() || IfcGeometricRepresentationItem () ||
				IfcDirection([0.0,0.0,1.0]));
	D2 := IfcFirstProjAxis(D1, RefDirection);

	RETURN ([D2, IfcNormalise(IfcCrossProduct(D1,D2)).Orientation, D1]);
END_FUNCTION;

*/
List_IfcDirection_3_3 IfcBuildAxes(Step::RefPtr<IfcDirection> _Axis, Step::RefPtr<IfcDirection> RefDirection)
{
	LOG_DEBUG("IfcBuildAxes()");

	List_IfcDirection_3_3 U;

	Step::RefPtr<IfcDirection> D1;
	Step::RefPtr<IfcDirection> D2;
	Step::RefPtr<IfcDirection> D3;
	Step::RefPtr<IfcVector> V3;


	D3 = static_cast<ifc2x3::ExpressDataSet*>(RefDirection->getExpressDataSet())->createIfcDirection(true);
	V3 = static_cast<ifc2x3::ExpressDataSet*>(RefDirection->getExpressDataSet())->createIfcVector(true);

    D1 = IfcNormalise(_Axis.get());

	if(!D1.valid())
	{
	    D1 = static_cast<ifc2x3::ExpressDataSet*>(RefDirection->getExpressDataSet())->createIfcDirection(true);
		D1->getDirectionRatios().push_back(0.0);
		D1->getDirectionRatios().push_back(0.0);
		D1->getDirectionRatios().push_back(1.0);
		LOG_DEBUG("IfcBuildAxes()::Bad D1");
	}
	LOG_DEBUG("D1 : [" << D1->getDirectionRatios()[0] << ";"<<
		D1->getDirectionRatios()[1] << ";"<<
		D1->getDirectionRatios()[2] << "]");

	//LOG_DEBUG("IfcBuildAxes()::Push IfcFirstProjAxis(D1, RefDirection) in D2");
	D2 = IfcFirstProjAxis(D1.get(), RefDirection.get());
	if(!D2.valid())
	{
	    D2 = static_cast<ifc2x3::ExpressDataSet*>(RefDirection->getExpressDataSet())->createIfcDirection(true);
		D2->getDirectionRatios().push_back(1.0);
		D2->getDirectionRatios().push_back(0.0);
		D2->getDirectionRatios().push_back(0.0);
		LOG_DEBUG("IfcBuildAxes()::Bad D2");
	}
	V3 = IfcCrossProduct(D1.get(),D2.get());
	if(V3.valid())
	{
		V3 = IfcNormalise(V3.get());
		if(V3.valid())
			D3 = V3->getOrientation();
		else
		{
			D3->getDirectionRatios().push_back(0.0);
			D3->getDirectionRatios().push_back(1.0);
			D3->getDirectionRatios().push_back(0.0);
			LOG_DEBUG("IfcBuildAxes()::Bad Normalisation D3");
		}
	}
	else
	{
		D3->getDirectionRatios().push_back(0.0);
		D3->getDirectionRatios().push_back(1.0);
		D3->getDirectionRatios().push_back(0.0);
		LOG_DEBUG("IfcBuildAxes()::Bad D3");
	}

	U.push_back(D2);
	U.push_back(D3);
	U.push_back(D1);

	LOG_DEBUG("IfcBuildAxes()::end");

	return U;
}

/*

ENTITY IfcAxis2Placement3D
 SUBTYPE OF ( IfcPlacement);
	Axis : OPTIONAL IfcDirection;
	RefDirection : OPTIONAL IfcDirection;
 DERIVE
	P : LIST [3:3] OF IfcDirection :=  IfcBuildAxes(Axis, RefDirection);
 WHERE
	WR1 	 :  	SELF\IfcPlacement.Location.Dim = 3;
	WR2 	 :  	(NOT (EXISTS (Axis))) OR (Axis.Dim = 3);
	WR3 	 :  	(NOT (EXISTS (RefDirection))) OR (RefDirection.Dim = 3);
	WR4 	 :  	(NOT (EXISTS (Axis))) OR (NOT (EXISTS (RefDirection))) OR (IfcCrossProduct(Axis,RefDirection).Magnitude > 0.0);
	WR5 	 :  	NOT ((EXISTS (Axis)) XOR (EXISTS (RefDirection)));
END_ENTITY;
*/
List_IfcDirection_3_3 IfcAxis2Placement3D::getP() const
{
	LOG_DEBUG("IfcAxis2Placement3D::getP()");

	Step::RefPtr<IfcDirection> refDirection = const_cast<IfcDirection*>(getRefDirection());
	Step::RefPtr<IfcDirection> Axis = const_cast<IfcDirection*>(getAxis());


	if (!refDirection.valid() || refDirection->getDim()!=3)
		refDirection = static_cast<ifc2x3::ExpressDataSet*>(getExpressDataSet())->createIfcDirection(true);
	else
	{
		LOG_DEBUG( "refDirection : [" << refDirection->getDirectionRatios()[0] << ";"<<
			refDirection->getDirectionRatios()[1] << ";"<<
			refDirection->getDirectionRatios()[2] << "]");
	}
	if (!Axis.valid() || Axis->getDim()!=3)
		Axis = static_cast<ifc2x3::ExpressDataSet*>(getExpressDataSet())->createIfcDirection(true);
	else
	{
		LOG_DEBUG( "Axis : [" << Axis->getDirectionRatios()[0] << ";"<<
			Axis->getDirectionRatios()[1] << ";"<<
			Axis->getDirectionRatios()[2] << "]");
	}

	LOG_DEBUG("IfcAxis2Placement3D::getP()::IfcBuildAxes(getAxis(), refDirection)");
    
    LOG_DEBUG("IfcAxis2Placement3D::End");
    List_IfcDirection_3_3 result = IfcBuildAxes(Axis, refDirection);
    return result;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
ENTITY IfcBooleanResult
 SUPERTYPE OF (ONEOF
	(IfcBooleanClippingResult))
 SUBTYPE OF (IfcGeometricRepresentationItem);
	Operator : IfcBooleanOperator;
	FirstOperand : IfcBooleanOperand;
	SecondOperand : IfcBooleanOperand;
 DERIVE
	Dim : IfcDimensionCount := FirstOperand.Dim;
 WHERE
	WR1 : FirstOperand.Dim = SecondOperand.Dim;
END_ENTITY;
*/
IfcDimensionCount IfcBooleanResult::getDim() const
{
	LOG_DEBUG("IfcBooleanResult::getDim()");

	LOG_DEBUG("IfcBooleanResult::getDim()::resOperand = getFirstOperand();");
	switch(getFirstOperand()->currentType())
	{
		case IfcBooleanOperand::IFCSOLIDMODEL:
		{
			LOG_DEBUG("IfcBooleanResult::getDim()::IFCSOLIDMODEL");
			return getFirstOperand()->getIfcSolidModel()->getDim();
		}
		case IfcBooleanOperand::IFCHALFSPACESOLID:
		{
			LOG_DEBUG("IfcBooleanResult::getDim()::IFCHALFSPACESOLID");
			return getFirstOperand()->getIfcHalfSpaceSolid()->getDim();
		}
		case IfcBooleanOperand::IFCBOOLEANRESULT:
		{
			LOG_DEBUG("IfcBooleanResult::getDim()::IFCBOOLEANRESULT");
			return getFirstOperand()->getIfcBooleanResult()->getDim();
		}
		case IfcBooleanOperand::IFCCSGPRIMITIVE3D:
		{
			LOG_DEBUG("IfcBooleanResult::getDim()::IFCCSGPRIMITIVE3D");
			return getFirstOperand()->getIfcCsgPrimitive3D()->getDim();
		}
		case IfcBooleanOperand::UNSET:
		{
			return 0;
		}
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

IfcDimensionCount IfcBoundingBox::getDim() const
{
	LOG_DEBUG("IfcBoundingBox::getDim()");
	return 3;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
FUNCTION IfcListToArray
	(Lis : LIST [0:?] OF GENERIC : T;
         Low,U : INTEGER)
	: ARRAY OF GENERIC : T;
     LOCAL
       N   : INTEGER;
       Res : ARRAY [Low:U] OF GENERIC : T;
     END_LOCAL;

     N := SIZEOF(Lis);
     IF (N <> (U-Low +1)) THEN
       RETURN(?);
     ELSE
       Res := [Lis[1] : N];
       REPEAT i := 2 TO N;
         Res[Low+i-1] := Lis[i];
       END_REPEAT;
       RETURN(Res);
     END_IF;
END_FUNCTION;
*/
/*
template<typename T, Step::Integer Low, Step::Integer U>
Step::Array<T, Low, U > IfcListToArray(Step::List<T> Lis)
{
	Step::Integer N;
	Step::Array<T, Low, U> Res;

	N = Lis.size();
	if(N != (U-Low +1))
		return NULL;
	else
	{
		for(int i=0;i<N;i++)
		{
			Res[Low+i-1] = Lis[i];
		}
		return Res;
	}
}
*/

Array_IfcCartesianPoint_0_255 IfcListToArray(List_IfcCartesianPoint_2_n Lis, Step::Integer Low, Step::Integer U)
{
	Step::Integer N;
	Array_IfcCartesianPoint_0_255 Res;

	N = Lis.size();
	if(N != (U-Low))
	{
		LOG_ERROR("IfcListToArray");
	}
	else
	{
		for(int i=0;i<N;i++)
		{
			Res[Low+i] = Lis[i];
		}
	}
    return Res;
}
/*
ENTITY IfcBSplineCurve
 ABSTRACT SUPERTYPE OF (ONEOF
	(IfcBezierCurve))
 SUBTYPE OF (IfcBoundedCurve);
	Degree : INTEGER;
	ControlPointsList : LIST [2:?] OF IfcCartesianPoint;
	CurveForm : IfcBSplineCurveForm;
	ClosedCurve : LOGICAL;
	SelfIntersect : LOGICAL;
 DERIVE
	ControlPoints : ARRAY [0:255] OF IfcCartesianPoint := IfcListToArray(ControlPointsList,0,UpperIndexOnControlPoints);
	UpperIndexOnControlPoints : INTEGER := (SIZEOF(ControlPointsList) - 1);
 WHERE
	WR41 : SIZEOF(QUERY(Temp <* ControlPointsList |
               Temp.Dim <> ControlPointsList[1].Dim))
             = 0;
END_ENTITY;
*/
Array_IfcCartesianPoint_0_255 IfcBSplineCurve::getControlPoints() const
{
   LOG_DEBUG("IfcBSplineCurve::getControlPoints()");
   Step::Integer UpperIndexOnControlPoints = getUpperIndexOnControlPoints();
   //IfcListToArray<IfcCartesianPoint,0,UpperIndexOnControlPoints>(getControlPointsList());
   return IfcListToArray(getControlPointsList(), 0, UpperIndexOnControlPoints);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

Step::Integer IfcBSplineCurve::getUpperIndexOnControlPoints() const
{
	LOG_DEBUG("IfcBSplineCurve::getUpperIndexOnControlPoints()");

	return (getControlPointsList().size());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

IfcDimensionCount IfcCartesianPoint::getDim() const
{
	LOG_DEBUG("IfcCartesianPoint::getDim()");
	return getCoordinates().size();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
FUNCTION IfcSecondProjAxis
	(ZAxis, XAxis, Arg: IfcDirection)
	: IfcDirection;
  LOCAL
    YAxis : IfcVector;
    V     : IfcDirection;
    Temp  : IfcVector;
  END_LOCAL;

    IF NOT EXISTS(Arg) THEN
      V := IfcRepresentationItem() || IfcGeometricRepresentationItem () || IfcDirection([0.0,1.0,0.0]);
    ELSE
      V := Arg;
    END_IF;
    Temp  := IfcScalarTimesVector(IfcDotProduct(V, ZAxis), ZAxis);
    YAxis := IfcVectorDifference(V, Temp);
    Temp  := IfcScalarTimesVector(IfcDotProduct(V, XAxis), XAxis);
    YAxis := IfcVectorDifference(YAxis, Temp);
    YAxis := IfcNormalise(YAxis);
    RETURN(YAxis.Orientation);
END_FUNCTION;
*/
Step::RefPtr<IfcDirection> IfcSecondProjAxis(const IfcDirection* ZAxis, const IfcDirection* XAxis, const IfcDirection* Arg)
{
	LOG_DEBUG("IfcSecondProjAxis(const IfcDirection* ZAxis, const IfcDirection *XAxis, const IfcDirection* Arg) :( " << ZAxis << "," << XAxis << "," << Arg << ")" );
	Step::RefPtr<IfcVector> YAxis;
	Step::RefPtr<IfcDirection> V ;
	Step::RefPtr<IfcVector> Temp ;

	V = static_cast<ifc2x3::ExpressDataSet*>(ZAxis->getExpressDataSet())->createIfcDirection(true);

	if(!Arg)
	{
		List_Real_2_3 ListReal;
		ListReal.push_back(0.0);
		ListReal.push_back(1.0);
		ListReal.push_back(0.0);

		V->setDirectionRatios(ListReal);
	}
	else
	{
		V->setDirectionRatios(Arg->getDirectionRatios());
	}

	Temp = IfcScalarTimesVector( IfcDotProduct( V.get(), ZAxis), ZAxis);

	Step::RefPtr<IfcVectorOrDirection> Arg1 = new IfcVectorOrDirection;
	Arg1->setIfcDirection(V.get());
	Step::RefPtr<IfcVectorOrDirection> Arg2  = new IfcVectorOrDirection;
	Arg2->setIfcVector(Temp.get());
	YAxis = IfcVectorDifference(Arg1, Arg2);

	Temp  = IfcScalarTimesVector(IfcDotProduct(V.get(), XAxis), XAxis);

	Step::RefPtr<IfcVectorOrDirection> Arg3 = new IfcVectorOrDirection;
	Arg3->setIfcVector(YAxis.get());
	Step::RefPtr<IfcVectorOrDirection> Arg4  = new IfcVectorOrDirection;
	Arg4->setIfcVector(Temp.get());
	YAxis = IfcVectorDifference(Arg3, Arg4);

	YAxis = IfcNormalise(YAxis.get());
	LOG_DEBUG("IfcSecondProjAxis(Step::RefPtr<IfcDirection> ZAxis, Step::RefPtr<IfcDirection> XAxis, Step::RefPtr<IfcDirection> Arg) --- END");

	return YAxis->getOrientation();
}
/*
FUNCTION IfcBaseAxis
	(Dim : INTEGER;
     Axis1, Axis2, Axis3 : IfcDirection)
	: LIST [2:3] OF IfcDirection;

  LOCAL
    U : LIST [2:3] OF IfcDirection;
    Factor : REAL;
    D1, D2 : IfcDirection;
  END_LOCAL;

    IF (Dim = 3) THEN
      D1 := NVL(IfcNormalise(Axis3), IfcRepresentationItem() || IfcGeometricRepresentationItem () || IfcDirection([0.0,0.0,1.0]));
      D2 := IfcFirstProjAxis(D1, Axis1);
      U  := [D2, IfcSecondProjAxis(D1, D2, Axis2), D1];
    ELSE
      IF EXISTS(Axis1) THEN
        D1 := IfcNormalise(Axis1);
        U  := [D1, IfcOrthogonalComplement(D1)];
        IF EXISTS(Axis2) THEN
          Factor := IfcDotProduct(Axis2, U[2]);
          IF (Factor < 0.0) THEN
            U[2].DirectionRatios[1] := -U[2].DirectionRatios[1];
            U[2].DirectionRatios[2] := -U[2].DirectionRatios[2];
          END_IF;
        END_IF;
      ELSE
        IF EXISTS(Axis2) THEN
          D1 := IfcNormalise(Axis2);
          U  := [IfcOrthogonalComplement(D1), D1];
          U[1].DirectionRatios[1] := -U[1].DirectionRatios[1];
          U[1].DirectionRatios[2] := -U[1].DirectionRatios[2];
          ELSE
            U := [IfcRepresentationItem() || IfcGeometricRepresentationItem () || IfcDirection([1.0, 0.0]),
                  IfcRepresentationItem() || IfcGeometricRepresentationItem () || IfcDirection([0.0, 1.0])];
        END_IF;
      END_IF;
    END_IF;
    RETURN(U);
END_FUNCTION;
*/
List_IfcDirection_3_3 IfcBaseAxis(Step::Integer Dim, const IfcDirection* Axis1, const IfcDirection* Axis2, const IfcDirection* Axis3, ifc2x3::ExpressDataSet *_ExpressDataSet)
{
	LOG_DEBUG("IfcBaseAxis(Step::Integer Dim, const IfcDirection* Axis1, const IfcDirection* Axis2, const IfcDirection* Axis3)");
	List_IfcDirection_3_3 U;
	Step::RefPtr<IfcDirection> D1;
	Step::RefPtr<IfcDirection> D2;

	if(Dim == 3)
	{
		D1 = IfcNormalise(Axis3);
		if(!D1.valid())
		{
			List_Real_2_3 ListReal;
			ListReal.push_back(0.0);
			ListReal.push_back(0.0);
			ListReal.push_back(1.0);
			D1 = _ExpressDataSet->createIfcDirection(true);
			D1->setDirectionRatios(ListReal);
		}

		D2 = IfcFirstProjAxis(D1.get(), Axis1);
		if(D2.valid())
		{
			U.push_back(D2);
			U.push_back(IfcSecondProjAxis(D1.get(), D2.get(), Axis2));
			U.push_back(D1);
		}
	}
	LOG_DEBUG("IfcBaseAxis(Step::Integer Dim, const IfcDirection* Axis1, const IfcDirection* Axis2, const IfcDirection* Axis3)--- END");
	return U;
}

List_IfcDirection_2_2 IfcBaseAxis(Step::Integer /*Dim*/, const IfcDirection* Axis1, const IfcDirection* Axis2, ifc2x3::ExpressDataSet *_ExpressDataSet)
{
	LOG_DEBUG("IfcBaseAxis(Step::Integer Dim, Step::RefPtr<IfcDirection> Axis1, Step::RefPtr<IfcDirection> Axis2)");
	List_IfcDirection_2_2 U;
	Step::Real Factor;
	Step::RefPtr<IfcDirection> D1 ;
	Step::RefPtr<IfcDirection> D2 ;

	if(Axis1)
	{
		LOG_DEBUG("Axis1 valid");
		D1 = IfcNormalise(Axis1);
		U.push_back(D1);
		U.push_back(IfcOrthogonalComplement(D1));
		if(Axis2)
		{
			LOG_DEBUG("Axis1 and Axis2 valid");
			Factor = IfcDotProduct(Axis2, U[1].get());
			if(Factor < -1.0e-10)
			{
				U[1]->getDirectionRatios()[0] = -U[1]->getDirectionRatios()[0];
				U[1]->getDirectionRatios()[1] = -U[1]->getDirectionRatios()[1];
			}
		}
	}
	else
	{
		if(Axis2)
		{
			LOG_DEBUG("Axis1 not valid");
			D1 = IfcNormalise(Axis2);
			U.push_back(IfcOrthogonalComplement(D1));
			U.push_back(D1);
			U[0]->getDirectionRatios()[0] = -U[0]->getDirectionRatios()[0];
			U[0]->getDirectionRatios()[1] = -U[0]->getDirectionRatios()[1];
		}
		else
		{
			LOG_DEBUG("Axis1 and Axis2 not valid");
			List_Real_2_3 ListReal1;
			ListReal1.push_back(1.0);
			ListReal1.push_back(0.0);
			D1 = _ExpressDataSet->createIfcDirection(true);
			D1->setDirectionRatios(ListReal1);
			List_Real_2_3 ListReal2;
			ListReal2.push_back(0.0);
			ListReal2.push_back(1.0);
			D2 = _ExpressDataSet->createIfcDirection(true);
			D2->setDirectionRatios(ListReal2);
			U.push_back(D1);
			U.push_back(D2);
		}
	}
	LOG_DEBUG("IfcBaseAxis(Step::Integer Dim, Step::RefPtr<IfcDirection> Axis1, Step::RefPtr<IfcDirection> Axis2) --- END");
	return U;
}

/*
ENTITY IfcCartesianTransformationOperator2D
 SUPERTYPE OF (ONEOF
	(IfcCartesianTransformationOperator2DnonUniform))
 SUBTYPE OF (IfcCartesianTransformationOperator);
 DERIVE
	U : LIST [2:2] OF IfcDirection := IfcBaseAxis(2,SELF\IfcCartesianTransformationOperator.Axis1,
          SELF\IfcCartesianTransformationOperator.Axis2,?);
 WHERE
	WR1 : SELF\IfcCartesianTransformationOperator.Dim = 2;
	WR2 : NOT(EXISTS(SELF\IfcCartesianTransformationOperator.Axis1)) OR
            (SELF\IfcCartesianTransformationOperator.Axis1.Dim = 2);
	WR3 : NOT(EXISTS(SELF\IfcCartesianTransformationOperator.Axis2)) OR
            (SELF\IfcCartesianTransformationOperator.Axis2.Dim = 2);
END_ENTITY;
*/
List_IfcDirection_2_2 IfcCartesianTransformationOperator2D::getU() const
{
	LOG_DEBUG("IfcCartesianTransformationOperator2D::getU()");
	List_IfcDirection_2_2 ListDirection;

	ListDirection = IfcBaseAxis(2,
            getAxis1(),
            getAxis2(),
            static_cast<ifc2x3::ExpressDataSet*>(getExpressDataSet()));
	LOG_DEBUG("IfcCartesianTransformationOperator2D::getU() --- END");
	return ListDirection;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

Step::Real IfcCartesianTransformationOperator2DnonUniform::getScl2() const
{
	LOG_DEBUG("IfcCartesianTransformationOperator2DnonUniform::getScl2()");

	if(!Step::isUnset(getScale2()))
		return getScale2();
	else
		return getScl();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

List_IfcDirection_3_3 IfcCartesianTransformationOperator3D::getU() const
{
	LOG_DEBUG("IfcCartesianTransformationOperator3D::getU()");
	List_IfcDirection_3_3 ListDirection;
	ListDirection = IfcBaseAxis(3, getAxis1(), getAxis2(), getAxis3(), static_cast<ifc2x3::ExpressDataSet*>(getExpressDataSet()));
	LOG_DEBUG("IfcCartesianTransformationOperator3D::getU() --- END");
	return ListDirection;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

Step::Real IfcCartesianTransformationOperator3DnonUniform::getScl2() const
{
	LOG_DEBUG("IfcCartesianTransformationOperator3DnonUniform::getScl2()");
	if(!Step::isUnset(getScale2()))
		return getScale2();
	else
		return getScl();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

Step::Real IfcCartesianTransformationOperator3DnonUniform::getScl3() const
{
	LOG_DEBUG("IfcCartesianTransformationOperator3DnonUniform::getScl3()");
	if(!Step::isUnset(getScale3()))
		return getScale3();
	else
		return getScl();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

Step::Real IfcCartesianTransformationOperator::getScl() const
{
	LOG_DEBUG("IfcCartesianTransformationOperator::getScl()");
	if(!Step::isUnset(getScale()))
		return getScale();
	else
		return 1.0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

IfcDimensionCount IfcCartesianTransformationOperator::getDim() const
{
	LOG_DEBUG("IfcCartesianTransformationOperator::getDim()");
	IfcDimensionCount dim;
	if(getLocalOrigin())
	{
		LOG_DEBUG("Point Valid");
		dim = getLocalOrigin()->getDim();
	}
	else
	{
		LOG_DEBUG("Point non Valid");
		dim = 0;
	}
	LOG_DEBUG("Dim of Point");
	return dim;

//	return getLocalOrigin()->getDim();;


}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

Step::Integer IfcCompositeCurve::getNSegments() const
{
	LOG_DEBUG("IfcCompositeCurve::getNSegments()");
	return getSegments().size();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

Step::Logical IfcCompositeCurve::getClosedCurve() const
{
	LOG_DEBUG("IfcCompositeCurve::getClosedCurve()");
	Step::Logical ClosedCurve;
	if(getSegments().empty())
		ClosedCurve = Step::LUnset;
	else
	{
		if(getSegments()[getNSegments()-1]->getTransition()!=ifc2x3::IfcTransitionCode_DISCONTINUOUS)
			ClosedCurve = Step::LTrue;
		else
			ClosedCurve = Step::LFalse;
	}
	return ClosedCurve;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

IfcDimensionCount IfcCompositeCurveSegment::getDim() const
{
	LOG_DEBUG("IfcCompositeCurveSegment::getDim()");
	return getParentCurve()->getDim();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

IfcDimensionCount IfcCsgPrimitive3D::getDim() const
{
	LOG_DEBUG("IfcCsgPrimitive3D::getDim()");
	return 3;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

IfcDimensionCount IfcCurveBoundedPlane::getDim() const
{
	LOG_ERROR("IfcCurveBoundedPlane::getDim()");
	if(getBasisSurface()!=NULL)
		return getBasisSurface()->getDim();
	else
		return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
FUNCTION IfcCurveDim
	(Curve : IfcCurve)
	: IfcDimensionCount;

    IF ('IFC2X3.IFCLINE' IN TYPEOF(Curve))
      THEN RETURN(Curve.Pnt.Dim);
    END_IF;
    IF ('IFC2X3.IFCCONIC' IN TYPEOF(Curve))
      THEN RETURN(Curve.Position.Dim);
    END_IF;
    IF ('IFC2X3.IFCPOLYLINE' IN TYPEOF(Curve))
      THEN RETURN(Curve.Points[1].Dim);
    END_IF;
    IF ('IFC2X3.IFCTRIMMEDCURVE' IN TYPEOF(Curve))
      THEN RETURN(IfcCurveDim(Curve.BasisCurve));
    END_IF;
    IF ('IFC2X3.IFCCOMPOSITECURVE' IN TYPEOF(Curve))
      THEN RETURN(Curve.Segments[1].Dim);
    END_IF;
    IF ('IFC2X3.IFCBSPLINECURVE' IN TYPEOF(Curve))
      THEN RETURN(Curve.ControlPointsList[1].Dim);
    END_IF;
    IF ('IFC2X3.IFCOFFSETCURVE2D' IN TYPEOF(Curve))
      THEN RETURN(2);
    END_IF;
    IF ('IFC2X3.IFCOFFSETCURVE3D' IN TYPEOF(Curve))
      THEN RETURN(3);
    END_IF;
  RETURN (?);
END_FUNCTION;
*/
IfcDimensionCount IfcCurveDim(const ifc2x3::IfcCurve* Curve)
{
	LOG_DEBUG("IfcCurveDim(const ifc2x3::IfcCurve* Curve)");
	LOG_DEBUG("Type Curve = "<<Curve->getType().getName());

	if(Curve->isOfType(ifc2x3::IfcLine::getClassType()))
	{
        const IfcLine * line = static_cast<const IfcLine *>(Curve);
        if(line->getPnt())
            return line->getPnt()->getDim();
	}

	else if(dynamic_cast<const ifc2x3::IfcConic *>(Curve) != NULL)
	{
		const IfcAxis2Placement* Axis2Placement = dynamic_cast<const ifc2x3::IfcConic *>(Curve)->getPosition();
		if(Axis2Placement!=NULL)
		{
			if(Axis2Placement->currentType()==IfcAxis2Placement::IFCAXIS2PLACEMENT2D)
				return Axis2Placement->getIfcAxis2Placement2D()->getDim();
			if(Axis2Placement->currentType()==IfcAxis2Placement::IFCAXIS2PLACEMENT3D)
				return Axis2Placement->getIfcAxis2Placement3D()->getDim();
		}
	}

	else if(dynamic_cast<const ifc2x3::IfcPolyline*> (Curve) != NULL)
	{
		if(!(static_cast<const ifc2x3::IfcPolyline* > (Curve))->getPoints().empty())
			return (static_cast<const ifc2x3::IfcPolyline* > (Curve))->getPoints()[0]->getDim();
	}

	else if(dynamic_cast<const ifc2x3::IfcTrimmedCurve*> (Curve) != NULL)
			return (IfcCurveDim(static_cast<const ifc2x3::IfcTrimmedCurve* > (Curve)->getBasisCurve()));

	else if(dynamic_cast<const ifc2x3::IfcCompositeCurve*> (Curve) != NULL)
	{
		if(!(static_cast<const ifc2x3::IfcCompositeCurve* > (Curve))->getSegments().empty())
			return (static_cast<const ifc2x3::IfcCompositeCurve* > (Curve))->getSegments()[0]->getDim();
	}

	else if(dynamic_cast<const ifc2x3::IfcBSplineCurve*> (Curve) != NULL)
	{
		if(!(static_cast<const ifc2x3::IfcBSplineCurve* > (Curve))->getControlPointsList().empty())
			return (static_cast<const ifc2x3::IfcBSplineCurve* > (Curve))->getControlPointsList()[0]->getDim();
	}

	else if(dynamic_cast<const ifc2x3::IfcOffsetCurve2D*> (Curve) != NULL)
		return 2;

	else if(dynamic_cast<const ifc2x3::IfcOffsetCurve3D*> (Curve) != NULL)
		return 3;

	return 0;
}

IfcDimensionCount IfcCurve::getDim() const
{
	LOG_DEBUG("IfcCurve::getDim()");
	return IfcCurveDim(this);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
FUNCTION IfcDeriveDimensionalExponents
	(x : IfcUnit)
	: IfcDimensionalExponents;
    LOCAL
      Result : IfcDimensionalExponents :=
               IfcDimensionalExponents(0, 0, 0, 0, 0, 0, 0);
    END_LOCAL;
    IF 'IFC2X3.IFCDERIVEDUNIT' IN TYPEOF(x) THEN
      REPEAT i := LOINDEX(x.Elements) TO HIINDEX(x.Elements);
        Result.LengthExponent :=        Result.LengthExponent +
          (x.Elements[i].Exponent *
           x.Elements[i].Unit.Dimensions.LengthExponent);
        Result.MassExponent :=        Result.MassExponent  +
          (x.Elements[i].Exponent *
           x.Elements[i].Unit.Dimensions.MassExponent);
        Result.TimeExponent :=        Result.TimeExponent +
          (x.Elements[i].Exponent *
           x.Elements[i].Unit.Dimensions.TimeExponent);
        Result.ElectricCurrentExponent :=        Result.ElectricCurrentExponent +
          (x.Elements[i].Exponent *
           x.Elements[i].Unit.Dimensions.ElectricCurrentExponent);
        Result.ThermodynamicTemperatureExponent :=
          Result.ThermodynamicTemperatureExponent +
          (x.Elements[i].Exponent *
           x.Elements[i].Unit.Dimensions.ThermodynamicTemperatureExponent);
        Result.AmountOfSubstanceExponent :=
          Result.AmountOfSubstanceExponent +        (x.Elements[i].Exponent *
           x.Elements[i].Unit.Dimensions.AmountOfSubstanceExponent);
        Result.LuminousIntensityExponent :=
          Result.LuminousIntensityExponent +        (x.Elements[i].Exponent *
           x.Elements[i].Unit.Dimensions.LuminousIntensityExponent);
      END_REPEAT;
    ELSE
      Result := x.Dimensions;
    END_IF;
  RETURN (Result);
END_FUNCTION;
*/

Step::RefPtr<IfcDimensionalExponents> IfcDeriveDimensionalExponentsFromDerivedUnit(const IfcDerivedUnit *DerivedUnit)
{
    Step::RefPtr<IfcDimensionalExponents> Result =  static_cast<ifc2x3::ExpressDataSet*>(DerivedUnit->getExpressDataSet())->createIfcDimensionalExponents(true);

    Result->setLengthExponent(0);
    Result->setMassExponent(0);
    Result->setTimeExponent(0);
    Result->setElectricCurrentExponent(0);
    Result->setThermodynamicTemperatureExponent(0);
    Result->setAmountOfSubstanceExponent(0);
    Result->setLuminousIntensityExponent(0);

    if(!DerivedUnit->getElements().empty())
    {
        Set_IfcDerivedUnitElement_1_n::const_iterator iteDerivedUnit = DerivedUnit->getElements().begin();

        while(iteDerivedUnit != DerivedUnit->getElements().end())
        {
            Step::Integer LengthExponent = (Result->getLengthExponent()+
                                            ((*iteDerivedUnit)->getExponent()*
                                             (*iteDerivedUnit)->getUnit()->getDimensions()->getLengthExponent()
                                            )
                                           );
            Result->setLengthExponent(LengthExponent);

            Step::Integer MassExponent = (Result->getMassExponent() +
                                          ((*iteDerivedUnit)->getExponent()*
                                           (*iteDerivedUnit)->getUnit()->getDimensions()->getMassExponent()
                                          )
                                         );
            Result->setMassExponent(MassExponent);

            Step::Integer TimeExponent = (Result->getTimeExponent() +
                                          ((*iteDerivedUnit)->getExponent()*
                                           (*iteDerivedUnit)->getUnit()->getDimensions()->getTimeExponent()
                                          )
                                         );
            Result->setTimeExponent(TimeExponent);

            Step::Integer ElectricCurrentExponent = (Result->getElectricCurrentExponent() +
                                                     ((*iteDerivedUnit)->getExponent()*
                                                      (*iteDerivedUnit)->getUnit()->getDimensions()->getElectricCurrentExponent()
                                                     )
                                                    );
            Result->setElectricCurrentExponent(ElectricCurrentExponent);

            Step::Integer ThermodynamicTemperatureExponent = (Result->getThermodynamicTemperatureExponent() +
                                                              ((*iteDerivedUnit)->getExponent()*
                                                               (*iteDerivedUnit)->getUnit()->getDimensions()->getThermodynamicTemperatureExponent()
                                                              )
                                                             );
            Result->setThermodynamicTemperatureExponent(ThermodynamicTemperatureExponent);

            Step::Integer AmountOfSubstanceExponent = (Result->getAmountOfSubstanceExponent() +
                                                       ((*iteDerivedUnit)->getExponent()*
                                                        (*iteDerivedUnit)->getUnit()->getDimensions()->getAmountOfSubstanceExponent()
                                                       )
                                                      );
            Result->setAmountOfSubstanceExponent(AmountOfSubstanceExponent);

            Step::Integer LuminousIntensityExponent = (Result->getLuminousIntensityExponent() +
                                                       ((*iteDerivedUnit)->getExponent()*
                                                        (*iteDerivedUnit)->getUnit()->getDimensions()->getLuminousIntensityExponent()
                                                       )
                                                      );
            Result->setLuminousIntensityExponent(LuminousIntensityExponent);

            iteDerivedUnit++;
        }
    }

    return Result;
}

Step::RefPtr<IfcDimensionalExponents> IfcDeriveDimensionalExponents(Step::RefPtr<IfcUnit> x)
{
	Step::RefPtr<IfcDimensionalExponents> Result =  static_cast<ifc2x3::ExpressDataSet*>(x->getExpressDataSet())->createIfcDimensionalExponents(true);

	//if(x->currentType() == ifc2x3::IfcUnit::IfcUnit_select::IFCDERIVEDUNIT)
	if(x->currentType()==IfcUnit::IFCDERIVEDUNIT)
	{
		Step::RefPtr<IfcDerivedUnit> DerivedUnit = x->getIfcDerivedUnit();
        Result = IfcDeriveDimensionalExponentsFromDerivedUnit(DerivedUnit.get());
	}
	else
	{
		if(x->currentType()==IfcUnit::IFCNAMEDUNIT)
		{
			Result = x->getIfcNamedUnit()->getDimensions();
		}
	}
	return Result;
}

IfcDimensionalExponents* IfcDerivedUnit::getDimensions() const
{
	LOG_DEBUG("IfcDerivedUnit::getDimensions()");
	IfcDimensionalExponents* ResultDE = IfcDeriveDimensionalExponentsFromDerivedUnit(this).release();
	return ResultDE;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

IfcDimensionCount IfcDirection::getDim() const
{
	LOG_DEBUG("IfcDirection::getDim()");
	return getDirectionRatios().size();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

Step::Integer IfcEdgeLoop::getNe() const
{
	LOG_DEBUG("IfcEdgeLoop::getNe()");
	return getEdgeList().size();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

IfcDimensionCount IfcElementarySurface::getDim() const
{
	LOG_DEBUG("IfcElementarySurface::getDim()");
	if(getPosition()!=NULL)
		return getPosition()->getDim();
	else
		return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

IfcDimensionCount IfcFaceBasedSurfaceModel::getDim() const
{
	LOG_DEBUG("IfcFaceBasedSurfaceModel::getDim()");
	return 3;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

IfcAxis2Placement* IfcGeometricRepresentationSubContext::getWorldCoordinateSystem()
{
	LOG_DEBUG("IfcGeometricRepresentationSubContext::getWorldCoordinateSystem()");
	Step::RefPtr<IfcGeometricRepresentationContext> GeometricRepresentationContextParent = getParentContext();
	LOG_DEBUG("IfcGeometricRepresentationSubContext::getWorldCoordinateSystem() Parent loaded");
	Step::RefPtr<IfcAxis2Placement> Axis2Placement = GeometricRepresentationContextParent->getWorldCoordinateSystem();
	LOG_DEBUG("IfcGeometricRepresentationSubContext::getWorldCoordinateSystem() Axis2Placement");
	return Axis2Placement.get();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

IfcDimensionCount IfcGeometricRepresentationSubContext::getCoordinateSpaceDimension()
{
	LOG_DEBUG("IfcGeometricRepresentationSubContext::getCoordinateSpaceDimension()");
	return getParentContext()->getCoordinateSpaceDimension();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

IfcDirection* IfcGeometricRepresentationSubContext::getTrueNorth()
{
	LOG_DEBUG("IfcGeometricRepresentationSubContext::getTrueNorth()");
	if(getParentContext()->getTrueNorth()->getDirectionRatios().empty())
	{
		if(getWorldCoordinateSystem()->currentType()==IfcAxis2Placement::IFCAXIS2PLACEMENT2D)
			return getWorldCoordinateSystem()->getIfcAxis2Placement2D()->getP()[1].get();
		if(getWorldCoordinateSystem()->currentType()==IfcAxis2Placement::IFCAXIS2PLACEMENT3D)
			return getWorldCoordinateSystem()->getIfcAxis2Placement3D()->getP()[1].get();
	}
	else
		return getParentContext()->getTrueNorth();
	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

Step::Real IfcGeometricRepresentationSubContext::getPrecision()
{
	LOG_DEBUG("IfcGeometricRepresentationSubContext::getPrecision()");
	if(getParentContext()->getPrecision())
		return getParentContext()->getPrecision();
	else
		return 0.00001;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

IfcDimensionCount IfcGeometricSet::getDim() const
{
	LOG_DEBUG("IfcGeometricSet::getDim()");
	if(getElements().empty())
		return 0;
	Set_IfcGeometricSetSelect_1_n::const_iterator iteGeo = getElements().begin();
	Step::RefPtr<IfcGeometricSetSelect> GeometricSetSelect = (*iteGeo);
	if(GeometricSetSelect->currentType() == IfcGeometricSetSelect::IFCPOINT)
	{
		IfcPoint* point = GeometricSetSelect->getIfcPoint();
		if (point->isOfType(IfcCartesianPoint::getClassType()))
			return ((IfcCartesianPoint*)point)->getDim();
		else
			if (point->isOfType(IfcPointOnCurve::getClassType()))
				return ((IfcPointOnCurve*)point)->getDim();
			else
				return ((IfcPointOnSurface*)point)->getDim();
	}
	if(GeometricSetSelect->currentType() == IfcGeometricSetSelect::IFCCURVE)
	{
		IfcCurve* Curve = GeometricSetSelect->getIfcCurve();

		if (Curve->isOfType(IfcBoundedCurve::getClassType()))
			return ((IfcBoundedCurve*)Curve)->getDim();
		else
			if (Curve->isOfType(IfcConic::getClassType()))
				return ((IfcConic*)Curve)->getDim();
			else
				if (Curve->isOfType(IfcLine::getClassType()))
					return ((IfcLine*)Curve)->getDim();
				else
					if (Curve->isOfType(IfcOffsetCurve2D::getClassType()))
						return ((IfcOffsetCurve2D*)Curve)->getDim();
					else
						return ((IfcOffsetCurve3D*)Curve)->getDim();

	}
	if(GeometricSetSelect->currentType() == IfcGeometricSetSelect::IFCSURFACE)
	{
		IfcSurface* Surface = GeometricSetSelect->getIfcSurface();
		if (Surface->isOfType(IfcBoundedSurface::getClassType()))
		{
			IfcBoundedSurface* BoundedSurface = ((IfcBoundedSurface*)Surface);
			if(BoundedSurface->isOfType(IfcCurveBoundedPlane::getClassType()))
				return ((IfcCurveBoundedPlane*)BoundedSurface)->getDim();
			else
				return ((IfcRectangularTrimmedSurface*)BoundedSurface)->getDim();
		}
		else
			if (Surface->isOfType(IfcElementarySurface::getClassType()))
				return ((IfcElementarySurface*)Surface)->getDim();
			else
				return ((IfcSweptSurface*)Surface)->getDim();
	}
	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

IfcDimensionCount IfcHalfSpaceSolid::getDim() const
{
	LOG_DEBUG("IfcHalfSpaceSolid::getDim()");
	return 3;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
FUNCTION IfcMlsTotalThickness
	(LayerSet : IfcMaterialLayerSet)
	: IfcLengthMeasure;
    LOCAL
      Max : IfcLengthMeasure := LayerSet.MaterialLayers[1].LayerThickness;
    END_LOCAL;

    IF SIZEOF(LayerSet.MaterialLayers) > 1 THEN
      REPEAT i := 2 TO HIINDEX(LayerSet.MaterialLayers);
         Max := Max + LayerSet.MaterialLayers[i].LayerThickness;
      END_REPEAT;
    END_IF;
    RETURN (Max);
END_FUNCTION;
*/
IfcLengthMeasure IfcMlsTotalThickness(const IfcMaterialLayerSet* LayerSet)
{
	IfcLengthMeasure Max;
	if(!LayerSet->getMaterialLayers().empty())
	{
		Max = LayerSet->getMaterialLayers()[0]->getLayerThickness();
		if(LayerSet->getMaterialLayers().size() > 1)
            for(int i = 1; i < int(LayerSet->getMaterialLayers().size()); i++)
				Max = Max + LayerSet->getMaterialLayers()[i]->getLayerThickness();
	}
	else
		Max = 0;
	return Max;
}

IfcLengthMeasure IfcMaterialLayerSet::getTotalThickness() const
{
	return IfcMlsTotalThickness(this);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
FUNCTION IfcBooleanChoose
	(B : BOOLEAN ;
       Choice1, Choice2 : Generic : Item)
	: Generic : Item;
    IF B THEN
       RETURN (Choice1);
    ELSE
       RETURN (Choice2);
    END_IF;
END_FUNCTION;
*/
/*template<typename T>
Step::RefPtr<T> IfcBooleanChoose(Step::Boolean B, Step::RefPtr<T> Choise1, Step::RefPtr<T> Choise2)
{
	Step::RefPtr<T> Item;
	if(B)
		return Choise1;
	else
		return Choise2;
}*/
Step::RefPtr<IfcVertex> IfcBooleanChoose(Step::Boolean B, Step::RefPtr<IfcVertex> Choise1, Step::RefPtr<IfcVertex> Choise2)
{
	LOG_DEBUG("IfcOrientedEdge::getEdgeStart::IfcBooleanChoose()");
	Step::RefPtr<IfcVertex> Item;
	if(B)
		return Choise1;
	else
		return Choise2;
}

IfcVertex* IfcOrientedEdge::getEdgeStart()
{
	LOG_DEBUG("IfcOrientedEdge::getEdgeStart()");
	if(getEdgeElement())
	{
		Step::RefPtr<IfcVertex> Vertex = IfcBooleanChoose(getOrientation(), getEdgeElement()->getEdgeStart(), getEdgeElement()->getEdgeEnd());
		return Vertex.get();
	}
	else
		return NULL;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

IfcVertex* IfcOrientedEdge::getEdgeEnd()
{
	LOG_DEBUG("IfcOrientedEdge::getEdgeEnd()");
	if(getEdgeElement())
	{
		Step::RefPtr<IfcVertex> Vertex = IfcBooleanChoose(getOrientation(), getEdgeElement()->getEdgeEnd(), getEdgeElement()->getEdgeStart());
		return Vertex.get();
	}
	else
		return NULL;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

IfcDimensionCount IfcPlacement::getDim() const
{
	LOG_DEBUG("IfcPlacement::getDim()");
	if(getLocation()!=NULL)
		return getLocation()->getDim();
	else
		return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

IfcDimensionCount IfcPointOnCurve::getDim() const
{
	LOG_DEBUG("IfcPointOnCurve::getDim()");
	if(getBasisCurve()==NULL)
		return 0;
	const IfcCurve* Curve = getBasisCurve();

	if (Curve->isOfType(IfcBoundedCurve::getClassType()))
		return ((const IfcBoundedCurve*)Curve)->getDim();
	else
		if (Curve->isOfType(IfcConic::getClassType()))
			return ((const IfcConic*)Curve)->getDim();
		else
			if (Curve->isOfType(IfcLine::getClassType()))
				return ((const IfcLine*)Curve)->getDim();
			else
				if (Curve->isOfType(IfcOffsetCurve2D::getClassType()))
					return ((const IfcOffsetCurve2D*)Curve)->getDim();
				else
					return ((const IfcOffsetCurve3D*)Curve)->getDim();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

IfcDimensionCount IfcPointOnSurface::getDim() const
{
	LOG_DEBUG("IfcPointOnSurface::getDim()");
	if(getBasisSurface()==NULL)
		return 0;

	const IfcSurface* Surface = getBasisSurface();
	if (Surface->isOfType(IfcBoundedSurface::getClassType()))
	{
		const IfcBoundedSurface* BoundedSurface = ((const IfcBoundedSurface*)Surface);
		if(BoundedSurface->isOfType(IfcCurveBoundedPlane::getClassType()))
			return ((const IfcCurveBoundedPlane*)BoundedSurface)->getDim();
		else
			return ((const IfcRectangularTrimmedSurface*)BoundedSurface)->getDim();
	}
	else
		if (Surface->isOfType(IfcElementarySurface::getClassType()))
			return ((const IfcElementarySurface*)Surface)->getDim();
		else
			return ((const IfcSweptSurface*)Surface)->getDim();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
FUNCTION IfcListToArray
	(Lis : LIST [0:?] OF GENERIC : T;
         Low,U : INTEGER)
	: ARRAY OF GENERIC : T;
     LOCAL
       N   : INTEGER;
       Res : ARRAY [Low:U] OF GENERIC : T;
     END_LOCAL;

     N := SIZEOF(Lis);
     IF (N <> (U-Low +1)) THEN
       RETURN(?);
     ELSE
       Res := [Lis[1] : N];
       REPEAT i := 2 TO N;
         Res[Low+i-1] := Lis[i];
       END_REPEAT;
       RETURN(Res);
     END_IF;
END_FUNCTION;
*/
Array_Real_0_255 IfcListToArray(List_Real_2_n Lis, Step::Integer Low, Step::Integer U)
{
	Step::Integer N;
	Array_Real_0_255 Res;

	N = Lis.size();
	if(N == (U-Low))
	{
		for(Step::Integer i=0; i<N; i++)
		{
			Res[i] = Lis[i];
		}
	}
	return Res;
}
Array_Real_0_255 IfcRationalBezierCurve::getWeights() const
{
	LOG_DEBUG("IfcRationalBezierCurve::getWeights()");
	Array_Real_0_255 Weights;
	if(getUpperIndexOnControlPoints())
		Weights = IfcListToArray(getWeightsData(),0 , getUpperIndexOnControlPoints());
	return Weights;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

IfcDimensionCount IfcRectangularTrimmedSurface::getDim() const
{
	LOG_DEBUG("IfcRectangularTrimmedSurface::getDim()");
	if(getBasisSurface()==NULL)
		return 0;

	const IfcSurface* Surface = getBasisSurface();
	if (Surface->isOfType(IfcBoundedSurface::getClassType()))
	{
		const IfcBoundedSurface* BoundedSurface = ((const IfcBoundedSurface*)Surface);
		if(BoundedSurface->isOfType(IfcCurveBoundedPlane::getClassType()))
			return ((const IfcCurveBoundedPlane*)BoundedSurface)->getDim();
		else
			return ((const IfcRectangularTrimmedSurface*)BoundedSurface)->getDim();
	}
	else
		if (Surface->isOfType(IfcElementarySurface::getClassType()))
			return ((const IfcElementarySurface*)Surface)->getDim();
		else
			return ((const IfcSweptSurface*)Surface)->getDim();
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
FUNCTION IfcNoOfLayers
	(Element : IfcElement )
	: INTEGER;

      LOCAL
        Association : BAG OF IfcRelAssociates := [];
        MaterialAssociation : SET OF IfcRelAssociatesMaterial := [];
      END_LOCAL;

      Association := USEDIN(Element, 'IFC2X3.IFCRELASSOCIATES.RELATEDOBJECTS');

      IF SIZEOF (Association) > 0 THEN
        REPEAT i := 1 TO HIINDEX(Association);
          IF ('IFC2X3.IFCRELASSOCIATESMATERIAL' IN TYPEOF(Association[i])) THEN
            MaterialAssociation := MaterialAssociation + Association[i];
          END_IF;
        END_REPEAT;
      END_IF;

      IF (SIZEOF(MaterialAssociation) <> 1) THEN
        RETURN (?);
      ELSE
        IF 'IFC2X3.IFCMATERIAL' IN TYPEOF(MaterialAssociation[1].RelatingMaterial) THEN
           RETURN (1);
        END_IF;
        IF 'IFC2X3.IFCMATERIALLAYERSETUSAGE' IN TYPEOF(MaterialAssociation[1].RelatingMaterial) THEN
           RETURN (SIZEOF(MaterialAssociation[1].RelatingMaterial.ForLayerSet.MaterialLayers));
        END_IF;
        IF 'IFC2X3.IFCMATERIALLIST' IN TYPEOF(MaterialAssociation[1].RelatingMaterial) THEN
           RETURN (?);
        END_IF;
      END_IF;

      RETURN (?);
END_FUNCTION;
*/
Step::Integer IfcNoOfLayers(Step::RefPtr<IfcElement> Element)
{
	Step::Bag<Step::RefPtr<IfcRelAssociates > > Association;
	Step::Set<Step::RefPtr<IfcRelAssociatesMaterial> >MaterialAssociation;

	ifc2x3::ExpressDataSet* eds = dynamic_cast<ifc2x3::ExpressDataSet*> (Element->getExpressDataSet());

	Step::RefLinkedList< IfcRelAssociates > &allIfcRelAssociates = eds->getAllIfcRelAssociates();
	Step::RefLinkedList< IfcRelAssociates >::iterator it_allIfcRelAssociates;
	for (it_allIfcRelAssociates = allIfcRelAssociates.begin();it_allIfcRelAssociates!=allIfcRelAssociates.end();++it_allIfcRelAssociates)
	{
		Set_IfcRoot_1_n::iterator iteRoot = (*it_allIfcRelAssociates).getRelatedObjects().begin();
		bool found=false;
		while(!found && iteRoot != (*it_allIfcRelAssociates).getRelatedObjects().end())
		{
			if((*iteRoot) == Element)
			{
				found=true;
				Association.insert(&(*it_allIfcRelAssociates));
			}
			++iteRoot;
		}
	}

	if(Association.size()>0)
	{
		Step::Bag<Step::RefPtr<IfcRelAssociates > >::iterator it_RelAssociates;
		for (it_RelAssociates = Association.begin();it_RelAssociates!=Association.end();++it_RelAssociates)
		{
			if((*it_RelAssociates)->isOfType(IfcRelAssociatesMaterial::getClassType()))
				MaterialAssociation.insert(*it_RelAssociates);
				//MaterialAssociation = MaterialAssociation + (*it_RelAssociates);
		}
	}

	if(MaterialAssociation.size() != 1)
		return 0;
	else
	{
		Step::Set<Step::RefPtr<IfcRelAssociatesMaterial> >::iterator it_RelAssociatesMaterial = MaterialAssociation.begin();
		//if((*it_RelAssociatesMaterial)->getRelatingMaterial()->isOfType(IfcMaterial::getClassType()))
		if((*it_RelAssociatesMaterial)->getRelatingMaterial()->currentType() == IfcMaterialSelect::IFCMATERIAL)
			return 1;

		//Step::Set<Step::RefPtr<IfcRelAssociatesMaterial> >::iterator it_RelAssociatesMaterial = MaterialAssociation.begin();
		//if((*it_RelAssociatesMaterial)->getRelatingMaterial()->isOfType(IfcMaterialLayerSetUsage::getClassType()))
		if((*it_RelAssociatesMaterial)->getRelatingMaterial()->currentType() == IfcMaterialSelect::IFCMATERIALLAYERSETUSAGE)
		{
			Step::RefPtr< IfcMaterialLayerSetUsage > MaterialLayerSetUsage = (*it_RelAssociatesMaterial)->getRelatingMaterial()->getIfcMaterialLayerSetUsage();
			if(MaterialLayerSetUsage->getForLayerSet()!=NULL)
			{
				Step::RefPtr< IfcMaterialLayerSet > MaterialLayerSet = MaterialLayerSetUsage->getForLayerSet();
				return MaterialLayerSet->getMaterialLayers().size();
			}
			else
				return 0;

		}
		//if((*it_RelAssociatesMaterial)->getRelatingMaterial()->isOfType(IfcMaterialList::getClassType()))
		if((*it_RelAssociatesMaterial)->getRelatingMaterial()->currentType() == IfcMaterialSelect::IFCMATERIALLIST)
			return 0;
	}
	return 0;
}

#ifdef IFC2X3_FINAL
Step::Integer IfcRelConnectsPathElements::getRelatedLayerCount() const
{
	LOG_DEBUG("IfcRelConnectsPathElements::getRelatedLayerCount()");
	if(getRelatedElement())
		return IfcNoOfLayers(getRelatedElement());
	else
		return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

Step::Integer IfcRelConnectsPathElements::getRelatingLayerCount() const
{
	LOG_DEBUG("IfcRelConnectsPathElements::getRelatingLayerCount()");
	if(getRelatingElement())
		return IfcNoOfLayers(getRelatingElement());
	else
		return 0;
}
#endif

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

IfcLine* IfcRevolvedAreaSolid::getAxisLine() const
{
	LOG_DEBUG("IfcRevolvedAreaSolid::getAxisLine()");
	if(getAxis()==NULL)
		return NULL;
	Step::RefPtr<IfcLine> Line = static_cast<ifc2x3::ExpressDataSet*>(getExpressDataSet())->createIfcLine(true);
	Step::RefPtr<IfcCartesianPoint> Pnt = static_cast<ifc2x3::ExpressDataSet*>(getExpressDataSet())->createIfcCartesianPoint(true);
	Line->setPnt(Pnt);
	Pnt->setCoordinates(getAxis()->getLocation()->getCoordinates());
	Step::RefPtr<IfcVector> Vect = static_cast<ifc2x3::ExpressDataSet*>(getExpressDataSet())->createIfcVector(true);
	Vect->setOrientation(getAxis()->getZ());
	Vect->setMagnitude(1);
	Line->setDir(Vect);
	return Line.release();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

IfcDimensionCount IfcSectionedSpine::getDim() const
{
	LOG_DEBUG("IfcSectionedSpine::getDim()");
	return 3;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

IfcDimensionCount IfcShellBasedSurfaceModel::getDim() const
{
	LOG_DEBUG("IfcShellBasedSurfaceModel::getDim()");
	return 3;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

Step::RefPtr<IfcDimensionalExponents> ReturnIfcDimensionalExponents(	ifc2x3::ExpressDataSet *_ExpressDataSet,
																		Step::Integer LengthExponent,
																		Step::Integer MassExponent,
																		Step::Integer TimeExponent,
																		Step::Integer ElectricCurrentExponent,
																		Step::Integer ThermodynamicTemperatureExponent,
																		Step::Integer AmountOfSubstanceExponent,
																		Step::Integer LuminousIntensityExponent
																	)
{
	Step::RefPtr<IfcDimensionalExponents> DimensionalExponents = dynamic_cast<ifc2x3::ExpressDataSet*>(_ExpressDataSet)->createIfcDimensionalExponents();
	DimensionalExponents->setLengthExponent(LengthExponent);
	DimensionalExponents->setMassExponent(MassExponent);
	DimensionalExponents->setTimeExponent(TimeExponent);
	DimensionalExponents->setElectricCurrentExponent(ElectricCurrentExponent);
	DimensionalExponents->setThermodynamicTemperatureExponent(ThermodynamicTemperatureExponent);
	DimensionalExponents->setAmountOfSubstanceExponent(AmountOfSubstanceExponent);
	DimensionalExponents->setLuminousIntensityExponent(LuminousIntensityExponent);
	return DimensionalExponents;
}

Step::RefPtr<IfcDimensionalExponents> IfcDimensionsForSiUnit(ifc2x3::ExpressDataSet *_ExpressDataSet, IfcSIUnitName n)
{
	switch(n)
	{
	case IfcSIUnitName_METRE :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,1, 0, 0, 0, 0, 0, 0);
	case IfcSIUnitName_SQUARE_METRE :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,2, 0, 0, 0, 0, 0, 0);
	case IfcSIUnitName_CUBIC_METRE :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,3, 0, 0, 0, 0, 0, 0);
	case IfcSIUnitName_GRAM :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,0, 1, 0, 0, 0, 0, 0);
	case IfcSIUnitName_SECOND :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,0, 0, 1, 0, 0, 0, 0);
	case IfcSIUnitName_AMPERE :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,0, 0, 0, 1, 0, 0, 0);
	case IfcSIUnitName_KELVIN :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,0, 0, 0, 0, 1, 0, 0);
	case IfcSIUnitName_MOLE :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,0, 0, 0, 0, 0, 1, 0);
	case IfcSIUnitName_CANDELA :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,0, 0, 0, 0, 0, 0, 1);
	case IfcSIUnitName_RADIAN :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,0, 0, 0, 0, 0, 0, 0);
	case IfcSIUnitName_STERADIAN :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,0, 0, 0, 0, 0, 0, 0);
	case IfcSIUnitName_HERTZ :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,0, 0, -1, 0, 0, 0, 0);
	case IfcSIUnitName_NEWTON :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,1, 1, -2, 0, 0, 0, 0);
	case IfcSIUnitName_PASCAL :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,-1, 1, -2, 0, 0, 0, 0);
	case IfcSIUnitName_JOULE :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,2, 1, -2, 0, 0, 0, 0);
	case IfcSIUnitName_WATT :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,2, 1, -3, 0, 0, 0, 0);
	case IfcSIUnitName_COULOMB :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,0, 0, 1, 1, 0, 0, 0);
	case IfcSIUnitName_VOLT :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,2, 1, -3, -1, 0, 0, 0);
	case IfcSIUnitName_FARAD :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,-2, -1, 4, 1, 0, 0, 0);
	case IfcSIUnitName_OHM :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,2, 1, -3, -2, 0, 0, 0);
	case IfcSIUnitName_SIEMENS :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,-2, -1, 3, 2, 0, 0, 0);
	case IfcSIUnitName_WEBER :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,2, 1, -2, -1, 0, 0, 0);
	case IfcSIUnitName_TESLA :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,0, 1, -2, -1, 0, 0, 0);
	case IfcSIUnitName_HENRY :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,2, 1, -2, -2, 0, 0, 0);
	case IfcSIUnitName_DEGREE_CELSIUS :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,0, 0, 0, 0, 1, 0, 0);
	case IfcSIUnitName_LUMEN :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,0, 0, 0, 0, 0, 0, 1);
	case IfcSIUnitName_LUX :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,-2, 0, 0, 0, 0, 0, 1);
	case IfcSIUnitName_BECQUEREL :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,0, 0, -1, 0, 0, 0, 0);
	case IfcSIUnitName_GRAY :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,2, 0, -2, 0, 0, 0, 0);
	case IfcSIUnitName_SIEVERT :
		return ReturnIfcDimensionalExponents(_ExpressDataSet,2, 0, -2, 0, 0, 0, 0);
    case IfcSIUnitName_UNSET:
    default:
        return ReturnIfcDimensionalExponents(_ExpressDataSet,0, 0, 0, 0, 0, 0, 0);
	}
}
/*
FUNCTION IfcDimensionsForSiUnit
	(n : IfcSiUnitName )
	: IfcDimensionalExponents;
    CASE n OF
      METRE          : RETURN (IfcDimensionalExponents
                               (1, 0, 0, 0, 0, 0, 0));
      SQUARE_METRE   : RETURN (IfcDimensionalExponents
                               (2, 0, 0, 0, 0, 0, 0));
      CUBIC_METRE    : RETURN (IfcDimensionalExponents
                               (3, 0, 0, 0, 0, 0, 0));
      GRAM           : RETURN (IfcDimensionalExponents
                               (0, 1, 0, 0, 0, 0, 0));
      SECOND         : RETURN (IfcDimensionalExponents
                               (0, 0, 1, 0, 0, 0, 0));
      AMPERE         : RETURN (IfcDimensionalExponents
                               (0, 0, 0, 1, 0, 0, 0));
      KELVIN         : RETURN (IfcDimensionalExponents
                               (0, 0, 0, 0, 1, 0, 0));
      MOLE           : RETURN (IfcDimensionalExponents
                               (0, 0, 0, 0, 0, 1, 0));
      CANDELA        : RETURN (IfcDimensionalExponents
                               (0, 0, 0, 0, 0, 0, 1));
      RADIAN         : RETURN (IfcDimensionalExponents
                               (0, 0, 0, 0, 0, 0, 0));
      STERADIAN      : RETURN (IfcDimensionalExponents
                               (0, 0, 0, 0, 0, 0, 0));
      HERTZ          : RETURN (IfcDimensionalExponents
                               (0, 0, -1, 0, 0, 0, 0));
      NEWTON         : RETURN (IfcDimensionalExponents
                               (1, 1, -2, 0, 0, 0, 0));
      PASCAL         : RETURN (IfcDimensionalExponents
                               (-1, 1, -2, 0, 0, 0, 0));
      JOULE          : RETURN (IfcDimensionalExponents
                               (2, 1, -2, 0, 0, 0, 0));
      WATT           : RETURN (IfcDimensionalExponents
                               (2, 1, -3, 0, 0, 0, 0));
      COULOMB        : RETURN (IfcDimensionalExponents
                               (0, 0, 1, 1, 0, 0, 0));
      VOLT           : RETURN (IfcDimensionalExponents
                               (2, 1, -3, -1, 0, 0, 0));
      FARAD          : RETURN (IfcDimensionalExponents
                               (-2, -1, 4, 1, 0, 0, 0));
      OHM            : RETURN (IfcDimensionalExponents
                               (2, 1, -3, -2, 0, 0, 0));
      SIEMENS        : RETURN (IfcDimensionalExponents
                               (-2, -1, 3, 2, 0, 0, 0));
      WEBER          : RETURN (IfcDimensionalExponents
                               (2, 1, -2, -1, 0, 0, 0));
      TESLA          : RETURN (IfcDimensionalExponents
                               (0, 1, -2, -1, 0, 0, 0));
      HENRY          : RETURN (IfcDimensionalExponents
                               (2, 1, -2, -2, 0, 0, 0));
      DEGREE_CELSIUS : RETURN (IfcDimensionalExponents
                               (0, 0, 0, 0, 1, 0, 0));
      LUMEN          : RETURN (IfcDimensionalExponents
                               (0, 0, 0, 0, 0, 0, 1));
      LUX            : RETURN (IfcDimensionalExponents
                               (-2, 0, 0, 0, 0, 0, 1));
      BECQUEREL      : RETURN (IfcDimensionalExponents
                               (0, 0, -1, 0, 0, 0, 0));
      GRAY           : RETURN (IfcDimensionalExponents
                               (2, 0, -2, 0, 0, 0, 0));
      SIEVERT        : RETURN (IfcDimensionalExponents
                               (2, 0, -2, 0, 0, 0, 0));
      OTHERWISE      : RETURN (IfcDimensionalExponents
                               (0, 0, 0, 0, 0, 0, 0));
    END_CASE;
END_FUNCTION;
*/
IfcDimensionalExponents* IfcSIUnit::getDimensions()
{
	LOG_DEBUG("IfcSIUnit::getDimensions()");
	return IfcDimensionsForSiUnit(static_cast<ifc2x3::ExpressDataSet*>(getExpressDataSet()), getName()).get();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

IfcDimensionCount IfcSolidModel::getDim() const
{
	LOG_DEBUG("IfcSolidModel::getDim()");
	return 3;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
UNCTION IfcAddToBeginOfList
	(AScalar : GENERIC;
       AList   : LIST OF GENERIC:AL)
	: LIST[1:?] OF GENERIC:AL;

      LOCAL
        Result : LIST OF GENERIC:AL := [];
      END_LOCAL;

    IF NOT(EXISTS(AScalar)) THEN
      Result := AList;
    ELSE
      Result := Result + AScalar;
      IF (HIINDEX(AList) >= 1) THEN
        REPEAT i:=1 TO HIINDEX(AList);
          Result[i+1] := AList[i];
        END_REPEAT;
      END_IF;
    END_IF;
    RETURN(Result);
END_FUNCTION;
*/
/*
template<int Low1, int Low2>
Step::List< Step::RefPtr< IfcStructuralLoad >, Low2> IfcAddToBeginOfList(Step::RefPtr< IfcStructuralLoad > AScalar, Step::List< Step::RefPtr< IfcStructuralLoad >, Low1> AList)
{
	Step::List< Step::RefPtr< IfcStructuralLoad >, Low2> Result;

	if(!AScalar.valid())
	{
		for(unsigned int i=0;i<AList.size();i++)
		{
			Result.push_back(AList[i]);
		}
	}
	else
	{
		Result.push_back(AScalar);
		if(AList.size() >= 1)
		{
			for(unsigned int i=0;i<AList.size();i++)
			{
				Result.push_back(AList[i]);
			}
		}
	}

	return Result;
}
*/
template<typename T, int Low1, int Low2>
Step::List< Step::RefPtr< T >, Low2> IfcAddToBeginOfList( const T* AScalar, const Step::List< Step::RefPtr< T > , Low1> AList)
{
	Step::List< Step::RefPtr< T > , Low2> Result;

	if(!Step::isUnset(AScalar))
	{
		Result.push_back(const_cast<T*>(AScalar));
    }
    for(unsigned int i=0;i<AList.size();i++)
    {
        Result.push_back(AList[(Step::Integer)i]);
    }

    return Result;
}

template<typename T, int Low1, int Low2>
Step::List< T, Low2> IfcAddToBeginOfList( const T AScalar, const Step::List< T , Low1> AList)
{
	Step::List< T , Low2> Result;
    Result.reserve(AList.size()+1);

	if(!Step::isUnset(AScalar))
	{
		Result.push_back(AScalar);
    }
    for(typename Step::List< T , Low2>::size_type i=0;i<AList.size();i++)
    {
        Result.push_back(AList[i]);
    }

    return Result;
}

List_IfcStructuralLoad_2_n IfcStructuralLinearActionVarying::getVaryingAppliedLoads() const
{
	LOG_DEBUG("IfcStructuralLinearActionVarying::getVaryingAppliedLoads()");
	//return IfcAddToBeginOfList<1,2>(getAppliedLoad(), getSubsequentAppliedLoads());
	return IfcAddToBeginOfList< IfcStructuralLoad ,1,2>(getAppliedLoad(), getSubsequentAppliedLoads());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

List_IfcStructuralLoad_3_n IfcStructuralPlanarActionVarying::getVaryingAppliedLoads() const
{
	LOG_DEBUG("IfcStructuralPlanarActionVarying::getVaryingAppliedLoads()");
	//return IfcAddToBeginOfList<2,3>(getAppliedLoad(), getSubsequentAppliedLoads());
	return IfcAddToBeginOfList< IfcStructuralLoad ,2,3>(getAppliedLoad(), getSubsequentAppliedLoads());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

List_IfcPositiveLengthMeasure_3_n IfcStructuralSurfaceMemberVarying::getVaryingThickness() const
{
	LOG_DEBUG("IfcStructuralSurfaceMemberVarying::getVaryingThickness()");
	return IfcAddToBeginOfList<IfcPositiveLengthMeasure,2,3>(getThickness(), getSubsequentThickness());

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

IfcVector* IfcSurfaceOfLinearExtrusion::getExtrusionAxis() const
{
	LOG_DEBUG("IfcSurfaceOfLinearExtrusion::getExtrusionAxis()");
	Step::RefPtr< IfcVector > Vec = static_cast< ExpressDataSet* > (getExpressDataSet())->createIfcVector();
	Vec->setMagnitude(getDepth());
   	Vec->setOrientation(const_cast<IfcDirection*>(getExtrudedDirection()));
	return Vec.get();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

IfcLine* IfcSurfaceOfRevolution::getAxisLine() const
{
	LOG_DEBUG("IfcSurfaceOfRevolution::getAxisLine()");
	if(getAxisPosition()==NULL)
		return NULL;
	Step::RefPtr<IfcLine> Line = static_cast<ifc2x3::ExpressDataSet*>(getExpressDataSet())->createIfcLine(true);
	Line->setPnt(const_cast<IfcCartesianPoint *>(getAxisPosition()->getLocation()));
	Step::RefPtr<IfcVector> Vect = static_cast<ifc2x3::ExpressDataSet*>(getExpressDataSet())->createIfcVector(true);
	Vect->setOrientation(getAxisPosition()->getZ());
	Vect->setMagnitude(1);
	Line->setDir(Vect);
	return Line.release();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

IfcDimensionCount IfcSweptSurface::getDim() const
{
	LOG_DEBUG("IfcSweptSurface::getDim()");
	if(Step::isUnset(getPosition()))
		return 0;
	else
		return getPosition()->getDim();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

Step::Integer IfcTable::getNumberOfCellsInRow() const
{
	LOG_DEBUG("IfcTable::getNumberOfCellsInRow()");
	if(testRows())
	{
	    if (getRows().size())
	        return getRows()[0]->getRowCells().size();
	    else
	        return 0;
	}
	else
		return 0;

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

Step::Integer IfcTable::getNumberOfHeadings() const
{
	LOG_DEBUG("IfcTable::getNumberOfHeadings()");
	Step::Integer Res=0;
    if(testRows())
	{
		List_IfcTableRow_1_n ListIfcTableRow = getRows();
        for(int i=0; i< int(ListIfcTableRow.size()); i++)
		{
			if(ListIfcTableRow[i]->getIsHeading()==Step::BTrue)
				Res++;
		}
	}
	return Res;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

Step::Integer IfcTable::getNumberOfDataRows() const
{
	LOG_DEBUG("IfcTable::getNumberOfDataRows()");
	Step::Integer Res=0;
    if(testRows())
	{
		List_IfcTableRow_1_n ListIfcTableRow = getRows();
		for(unsigned int i=0; i<ListIfcTableRow.size(); i++)
		{
            if(ListIfcTableRow[Step::Integer(i)]->getIsHeading()!=Step::BTrue)
				Res++;
		}
	}
	return Res;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

IfcDimensionCount IfcVector::getDim() const
{
	LOG_DEBUG("IfcVector::getDim()");
	if(!Step::isUnset(getOrientation()))
		return getOrientation()->getDim();
	else
		return 0;
}
