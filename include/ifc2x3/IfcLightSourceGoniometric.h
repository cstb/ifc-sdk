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

#ifndef IFC2X3_IFCLIGHTSOURCEGONIOMETRIC_H
#define IFC2X3_IFCLIGHTSOURCEGONIOMETRIC_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcLightSource.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcAxis2Placement3D;
    class IfcColourRgb;
    class IfcLightDistributionDataSourceSelect;

    /**
     */
    class IFC2X3_DLL_DEF IfcLightSourceGoniometric : public IfcLightSource {
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
        IfcAxis2Placement3D *getPosition();
        /**
         * Sets the value of the explicit attribute 'Position'.
         * 
         * @param value
         */
        void setPosition(const Step::RefPtr< IfcAxis2Placement3D > &value);
        /**
         */
        IfcColourRgb *getColourAppearance();
        /**
         * Sets the value of the explicit attribute 'ColourAppearance'.
         * 
         * @param value
         */
        void setColourAppearance(const Step::RefPtr< IfcColourRgb > &value);
        /**
         */
        IfcThermodynamicTemperatureMeasure getColourTemperature();
        /**
         * Sets the value of the explicit attribute 'ColourTemperature'.
         * 
         * @param value
         */
        void setColourTemperature(IfcThermodynamicTemperatureMeasure value);
        /**
         */
        IfcLuminousFluxMeasure getLuminousFlux();
        /**
         * Sets the value of the explicit attribute 'LuminousFlux'.
         * 
         * @param value
         */
        void setLuminousFlux(IfcLuminousFluxMeasure value);
        /**
         */
        IfcLightEmissionSourceEnum getLightEmissionSource();
        /**
         * Sets the value of the explicit attribute 'LightEmissionSource'.
         * 
         * @param value
         */
        void setLightEmissionSource(IfcLightEmissionSourceEnum value);
        /**
         */
        IfcLightDistributionDataSourceSelect *getLightDistributionDataSource();
        /**
         * Sets the value of the explicit attribute 'LightDistributionDataSource'.
         * 
         * @param value
         */
        void setLightDistributionDataSource(const Step::RefPtr< IfcLightDistributionDataSourceSelect > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcLightSourceGoniometric(Step::Id id, Step::SPFData *args);
        virtual ~IfcLightSourceGoniometric();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcLightSourceGoniometric &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcAxis2Placement3D > m_position;
        /**
         */
        Step::RefPtr< IfcColourRgb > m_colourAppearance;
        /**
         */
        Step::Real m_colourTemperature;
        /**
         */
        Step::Real m_luminousFlux;
        /**
         */
        IfcLightEmissionSourceEnum m_lightEmissionSource;
        /**
         */
        Step::RefPtr< IfcLightDistributionDataSourceSelect > m_lightDistributionDataSource;

    };

}

#endif // IFC2X3_IFCLIGHTSOURCEGONIOMETRIC_H
