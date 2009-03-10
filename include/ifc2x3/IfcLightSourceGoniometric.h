/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
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
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'Position'.
         * 
         */
        virtual IfcAxis2Placement3D *getPosition();
        /**
         * (const) Returns the value of the explicit attribute 'Position'.
         * 
         * @return the value of the explicit attribute 'Position'
         */
        virtual const IfcAxis2Placement3D *getPosition() const;
        /**
         * Sets the value of the explicit attribute 'Position'.
         * 
         * @param value
         */
        virtual void setPosition(const Step::RefPtr< IfcAxis2Placement3D > &value);
        /**
         * Gets the value of the explicit attribute 'ColourAppearance'.
         * 
         */
        virtual IfcColourRgb *getColourAppearance();
        /**
         * (const) Returns the value of the explicit attribute 'ColourAppearance'.
         * 
         * @return the value of the explicit attribute 'ColourAppearance'
         */
        virtual const IfcColourRgb *getColourAppearance() const;
        /**
         * Sets the value of the explicit attribute 'ColourAppearance'.
         * 
         * @param value
         */
        virtual void setColourAppearance(const Step::RefPtr< IfcColourRgb > &value);
        /**
         * Gets the value of the explicit attribute 'ColourTemperature'.
         * 
         */
        virtual IfcThermodynamicTemperatureMeasure getColourTemperature();
        /**
         * (const) Returns the value of the explicit attribute 'ColourTemperature'.
         * 
         * @return the value of the explicit attribute 'ColourTemperature'
         */
        virtual const IfcThermodynamicTemperatureMeasure getColourTemperature() const;
        /**
         * Sets the value of the explicit attribute 'ColourTemperature'.
         * 
         * @param value
         */
        virtual void setColourTemperature(IfcThermodynamicTemperatureMeasure value);
        /**
         * Gets the value of the explicit attribute 'LuminousFlux'.
         * 
         */
        virtual IfcLuminousFluxMeasure getLuminousFlux();
        /**
         * (const) Returns the value of the explicit attribute 'LuminousFlux'.
         * 
         * @return the value of the explicit attribute 'LuminousFlux'
         */
        virtual const IfcLuminousFluxMeasure getLuminousFlux() const;
        /**
         * Sets the value of the explicit attribute 'LuminousFlux'.
         * 
         * @param value
         */
        virtual void setLuminousFlux(IfcLuminousFluxMeasure value);
        /**
         * Gets the value of the explicit attribute 'LightEmissionSource'.
         * 
         */
        virtual IfcLightEmissionSourceEnum getLightEmissionSource();
        /**
         * (const) Returns the value of the explicit attribute 'LightEmissionSource'.
         * 
         * @return the value of the explicit attribute 'LightEmissionSource'
         */
        virtual const IfcLightEmissionSourceEnum getLightEmissionSource() const;
        /**
         * Sets the value of the explicit attribute 'LightEmissionSource'.
         * 
         * @param value
         */
        virtual void setLightEmissionSource(IfcLightEmissionSourceEnum value);
        /**
         * Gets the value of the explicit attribute 'LightDistributionDataSource'.
         * 
         */
        virtual IfcLightDistributionDataSourceSelect *getLightDistributionDataSource();
        /**
         * (const) Returns the value of the explicit attribute 'LightDistributionDataSource'.
         * 
         * @return the value of the explicit attribute 'LightDistributionDataSource'
         */
        virtual const IfcLightDistributionDataSourceSelect *getLightDistributionDataSource() const;
        /**
         * Sets the value of the explicit attribute 'LightDistributionDataSource'.
         * 
         * @param value
         */
        virtual void setLightDistributionDataSource(const Step::RefPtr< IfcLightDistributionDataSourceSelect > &value);
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
