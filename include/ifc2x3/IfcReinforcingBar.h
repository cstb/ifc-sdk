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

#ifndef IFC2X3_IFCREINFORCINGBAR_H
#define IFC2X3_IFCREINFORCINGBAR_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcReinforcingElement.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcReinforcingBar : public IfcReinforcingElement {
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
        IfcPositiveLengthMeasure getNominalDiameter();
        /**
         * Sets the value of the explicit attribute 'NominalDiameter'.
         * 
         * @param value
         */
        void setNominalDiameter(IfcPositiveLengthMeasure value);
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
        IfcPositiveLengthMeasure getBarLength();
        /**
         * Sets the value of the explicit attribute 'BarLength'.
         * 
         * @param value
         */
        void setBarLength(IfcPositiveLengthMeasure value);
        /**
         */
        IfcReinforcingBarRoleEnum getBarRole();
        /**
         * Sets the value of the explicit attribute 'BarRole'.
         * 
         * @param value
         */
        void setBarRole(IfcReinforcingBarRoleEnum value);
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
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcReinforcingBar(Step::Id id, Step::SPFData *args);
        virtual ~IfcReinforcingBar();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcReinforcingBar &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_nominalDiameter;
        /**
         */
        Step::Real m_crossSectionArea;
        /**
         */
        Step::Real m_barLength;
        /**
         */
        IfcReinforcingBarRoleEnum m_barRole;
        /**
         */
        IfcReinforcingBarSurfaceEnum m_barSurface;

    };

}

#endif // IFC2X3_IFCREINFORCINGBAR_H
