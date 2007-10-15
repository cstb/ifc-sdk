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

#ifndef IFC2X3_IFCREINFORCEMENTBARPROPERTIES_H
#define IFC2X3_IFCREINFORCEMENTBARPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>
#include <Step/BaseEntity.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcReinforcementBarProperties : public Step::BaseEntity {
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
        IfcAreaMeasure getTotalCrossSectionArea();
        /**
         * Sets the value of the explicit attribute 'TotalCrossSectionArea'.
         * 
         * @param value
         */
        void setTotalCrossSectionArea(IfcAreaMeasure value);
        /**
         */
        IfcLabel getSteelGrade();
        /**
         * Sets the value of the explicit attribute 'SteelGrade'.
         * 
         * @param value
         */
        void setSteelGrade(const IfcLabel &value);
        /**
         */
        IfcReinforcingBarSurfaceEnum getBarSurface();
        /**
         * Sets the value of the explicit attribute 'BarSurface'.
         * 
         * @param value
         */
        void setBarSurface(IfcReinforcingBarSurfaceEnum value);
        /**
         */
        IfcLengthMeasure getEffectiveDepth();
        /**
         * Sets the value of the explicit attribute 'EffectiveDepth'.
         * 
         * @param value
         */
        void setEffectiveDepth(IfcLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getNominalBarDiameter();
        /**
         * Sets the value of the explicit attribute 'NominalBarDiameter'.
         * 
         * @param value
         */
        void setNominalBarDiameter(IfcPositiveLengthMeasure value);
        /**
         */
        IfcCountMeasure getBarCount();
        /**
         * Sets the value of the explicit attribute 'BarCount'.
         * 
         * @param value
         */
        void setBarCount(IfcCountMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcReinforcementBarProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcReinforcementBarProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcReinforcementBarProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_totalCrossSectionArea;
        /**
         */
        std::string m_steelGrade;
        /**
         */
        IfcReinforcingBarSurfaceEnum m_barSurface;
        /**
         */
        Step::Real m_effectiveDepth;
        /**
         */
        Step::Real m_nominalBarDiameter;
        /**
         */
        Step::Integer m_barCount;

    };

}

#endif // IFC2X3_IFCREINFORCEMENTBARPROPERTIES_H
