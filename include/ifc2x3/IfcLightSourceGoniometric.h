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

#ifndef IFC2X3_IFCLIGHTSOURCEGONIOMETRIC_H
#define IFC2X3_IFCLIGHTSOURCEGONIOMETRIC_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcLightSource.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcAxis2Placement3D;
    class IfcColourRgb;
    class IfcLightDistributionDataSourceSelect;

    /**
     * Generated class for the IfcLightSourceGoniometric Entity.
     * 
     */
    class IFC2X3_EXPORT IfcLightSourceGoniometric : public IfcLightSource {
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
         * unset the attribute 'Position'.
         * 
         */
        virtual void unsetPosition();
        /**
         * Test if the attribute 'Position' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPosition() const;
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
         * unset the attribute 'ColourAppearance'.
         * 
         */
        virtual void unsetColourAppearance();
        /**
         * Test if the attribute 'ColourAppearance' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testColourAppearance() const;
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
         * unset the attribute 'ColourTemperature'.
         * 
         */
        virtual void unsetColourTemperature();
        /**
         * Test if the attribute 'ColourTemperature' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testColourTemperature() const;
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
         * unset the attribute 'LuminousFlux'.
         * 
         */
        virtual void unsetLuminousFlux();
        /**
         * Test if the attribute 'LuminousFlux' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLuminousFlux() const;
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
         * unset the attribute 'LightEmissionSource'.
         * 
         */
        virtual void unsetLightEmissionSource();
        /**
         * Test if the attribute 'LightEmissionSource' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLightEmissionSource() const;
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
        /**
         * unset the attribute 'LightDistributionDataSource'.
         * 
         */
        virtual void unsetLightDistributionDataSource();
        /**
         * Test if the attribute 'LightDistributionDataSource' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLightDistributionDataSource() const;
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
