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

#ifndef IFC2X3_IFCSTRUCTURALSTEELPROFILEPROPERTIES_H
#define IFC2X3_IFCSTRUCTURALSTEELPROFILEPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcStructuralProfileProperties.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcStructuralSteelProfileProperties : public IfcStructuralProfileProperties {
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
        IfcAreaMeasure getShearAreaZ();
        /**
         * Sets the value of the explicit attribute 'ShearAreaZ'.
         * 
         * @param value
         */
        void setShearAreaZ(IfcAreaMeasure value);
        /**
         */
        IfcAreaMeasure getShearAreaY();
        /**
         * Sets the value of the explicit attribute 'ShearAreaY'.
         * 
         * @param value
         */
        void setShearAreaY(IfcAreaMeasure value);
        /**
         */
        IfcPositiveRatioMeasure getPlasticShapeFactorY();
        /**
         * Sets the value of the explicit attribute 'PlasticShapeFactorY'.
         * 
         * @param value
         */
        void setPlasticShapeFactorY(IfcPositiveRatioMeasure value);
        /**
         */
        IfcPositiveRatioMeasure getPlasticShapeFactorZ();
        /**
         * Sets the value of the explicit attribute 'PlasticShapeFactorZ'.
         * 
         * @param value
         */
        void setPlasticShapeFactorZ(IfcPositiveRatioMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralSteelProfileProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralSteelProfileProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralSteelProfileProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_shearAreaZ;
        /**
         */
        Step::Real m_shearAreaY;
        /**
         */
        Step::Real m_plasticShapeFactorY;
        /**
         */
        Step::Real m_plasticShapeFactorZ;

    };

}

#endif // IFC2X3_IFCSTRUCTURALSTEELPROFILEPROPERTIES_H
