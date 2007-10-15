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

#ifndef IFC2X3_IFCSTRUCTURALPROFILEPROPERTIES_H
#define IFC2X3_IFCSTRUCTURALPROFILEPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcGeneralProfileProperties.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcStructuralProfileProperties : public IfcGeneralProfileProperties {
    public:
        /**
         * Accepts a read/write DatatypeVisitor.
         * 
         * @param v the read/write DatatypeVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *v);
        /**
         */
        virtual const std::string &type();
        /**
         */
        static Step::ClassType getClassType();
        /**
         */
        virtual Step::ClassType getType() const;
        /**
         * @param t
         */
        virtual bool isOfType(Step::ClassType t);
        /**
         */
        IfcMomentOfInertiaMeasure getTorsionalConstantX();
        /**
         * Sets the value of the explicit attribute 'TorsionalConstantX'.
         * 
         * @param value
         */
        void setTorsionalConstantX(IfcMomentOfInertiaMeasure value);
        /**
         */
        IfcMomentOfInertiaMeasure getMomentOfInertiaYZ();
        /**
         * Sets the value of the explicit attribute 'MomentOfInertiaYZ'.
         * 
         * @param value
         */
        void setMomentOfInertiaYZ(IfcMomentOfInertiaMeasure value);
        /**
         */
        IfcMomentOfInertiaMeasure getMomentOfInertiaY();
        /**
         * Sets the value of the explicit attribute 'MomentOfInertiaY'.
         * 
         * @param value
         */
        void setMomentOfInertiaY(IfcMomentOfInertiaMeasure value);
        /**
         */
        IfcMomentOfInertiaMeasure getMomentOfInertiaZ();
        /**
         * Sets the value of the explicit attribute 'MomentOfInertiaZ'.
         * 
         * @param value
         */
        void setMomentOfInertiaZ(IfcMomentOfInertiaMeasure value);
        /**
         */
        IfcWarpingConstantMeasure getWarpingConstant();
        /**
         * Sets the value of the explicit attribute 'WarpingConstant'.
         * 
         * @param value
         */
        void setWarpingConstant(IfcWarpingConstantMeasure value);
        /**
         */
        IfcLengthMeasure getShearCentreZ();
        /**
         * Sets the value of the explicit attribute 'ShearCentreZ'.
         * 
         * @param value
         */
        void setShearCentreZ(IfcLengthMeasure value);
        /**
         */
        IfcLengthMeasure getShearCentreY();
        /**
         * Sets the value of the explicit attribute 'ShearCentreY'.
         * 
         * @param value
         */
        void setShearCentreY(IfcLengthMeasure value);
        /**
         */
        IfcAreaMeasure getShearDeformationAreaZ();
        /**
         * Sets the value of the explicit attribute 'ShearDeformationAreaZ'.
         * 
         * @param value
         */
        void setShearDeformationAreaZ(IfcAreaMeasure value);
        /**
         */
        IfcAreaMeasure getShearDeformationAreaY();
        /**
         * Sets the value of the explicit attribute 'ShearDeformationAreaY'.
         * 
         * @param value
         */
        void setShearDeformationAreaY(IfcAreaMeasure value);
        /**
         */
        IfcSectionModulusMeasure getMaximumSectionModulusY();
        /**
         * Sets the value of the explicit attribute 'MaximumSectionModulusY'.
         * 
         * @param value
         */
        void setMaximumSectionModulusY(IfcSectionModulusMeasure value);
        /**
         */
        IfcSectionModulusMeasure getMinimumSectionModulusY();
        /**
         * Sets the value of the explicit attribute 'MinimumSectionModulusY'.
         * 
         * @param value
         */
        void setMinimumSectionModulusY(IfcSectionModulusMeasure value);
        /**
         */
        IfcSectionModulusMeasure getMaximumSectionModulusZ();
        /**
         * Sets the value of the explicit attribute 'MaximumSectionModulusZ'.
         * 
         * @param value
         */
        void setMaximumSectionModulusZ(IfcSectionModulusMeasure value);
        /**
         */
        IfcSectionModulusMeasure getMinimumSectionModulusZ();
        /**
         * Sets the value of the explicit attribute 'MinimumSectionModulusZ'.
         * 
         * @param value
         */
        void setMinimumSectionModulusZ(IfcSectionModulusMeasure value);
        /**
         */
        IfcSectionModulusMeasure getTorsionalSectionModulus();
        /**
         * Sets the value of the explicit attribute 'TorsionalSectionModulus'.
         * 
         * @param value
         */
        void setTorsionalSectionModulus(IfcSectionModulusMeasure value);
        /**
         */
        IfcLengthMeasure getCentreOfGravityInX();
        /**
         * Sets the value of the explicit attribute 'CentreOfGravityInX'.
         * 
         * @param value
         */
        void setCentreOfGravityInX(IfcLengthMeasure value);
        /**
         */
        IfcLengthMeasure getCentreOfGravityInY();
        /**
         * Sets the value of the explicit attribute 'CentreOfGravityInY'.
         * 
         * @param value
         */
        void setCentreOfGravityInY(IfcLengthMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralProfileProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralProfileProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralProfileProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_torsionalConstantX;
        /**
         */
        Step::Real m_momentOfInertiaYZ;
        /**
         */
        Step::Real m_momentOfInertiaY;
        /**
         */
        Step::Real m_momentOfInertiaZ;
        /**
         */
        Step::Real m_warpingConstant;
        /**
         */
        Step::Real m_shearCentreZ;
        /**
         */
        Step::Real m_shearCentreY;
        /**
         */
        Step::Real m_shearDeformationAreaZ;
        /**
         */
        Step::Real m_shearDeformationAreaY;
        /**
         */
        Step::Real m_maximumSectionModulusY;
        /**
         */
        Step::Real m_minimumSectionModulusY;
        /**
         */
        Step::Real m_maximumSectionModulusZ;
        /**
         */
        Step::Real m_minimumSectionModulusZ;
        /**
         */
        Step::Real m_torsionalSectionModulus;
        /**
         */
        Step::Real m_centreOfGravityInX;
        /**
         */
        Step::Real m_centreOfGravityInY;

    };

}

#endif // IFC2X3_IFCSTRUCTURALPROFILEPROPERTIES_H
