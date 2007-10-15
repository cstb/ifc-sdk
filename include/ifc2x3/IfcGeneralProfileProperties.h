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

#ifndef IFC2X3_IFCGENERALPROFILEPROPERTIES_H
#define IFC2X3_IFCGENERALPROFILEPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcProfileProperties.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcGeneralProfileProperties : public IfcProfileProperties {
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
        IfcMassPerLengthMeasure getPhysicalWeight();
        /**
         * Sets the value of the explicit attribute 'PhysicalWeight'.
         * 
         * @param value
         */
        void setPhysicalWeight(IfcMassPerLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getPerimeter();
        /**
         * Sets the value of the explicit attribute 'Perimeter'.
         * 
         * @param value
         */
        void setPerimeter(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getMinimumPlateThickness();
        /**
         * Sets the value of the explicit attribute 'MinimumPlateThickness'.
         * 
         * @param value
         */
        void setMinimumPlateThickness(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getMaximumPlateThickness();
        /**
         * Sets the value of the explicit attribute 'MaximumPlateThickness'.
         * 
         * @param value
         */
        void setMaximumPlateThickness(IfcPositiveLengthMeasure value);
        /**
         */
        IfcAreaMeasure getCrossSectionArea();
        /**
         * Sets the value of the explicit attribute 'CrossSectionArea'.
         * 
         * @param value
         */
        void setCrossSectionArea(IfcAreaMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcGeneralProfileProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcGeneralProfileProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcGeneralProfileProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_physicalWeight;
        /**
         */
        Step::Real m_perimeter;
        /**
         */
        Step::Real m_minimumPlateThickness;
        /**
         */
        Step::Real m_maximumPlateThickness;
        /**
         */
        Step::Real m_crossSectionArea;

    };

}

#endif // IFC2X3_IFCGENERALPROFILEPROPERTIES_H
