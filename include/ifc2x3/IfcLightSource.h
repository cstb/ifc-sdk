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

#ifndef IFC2X3_IFCLIGHTSOURCE_H
#define IFC2X3_IFCLIGHTSOURCE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcColourRgb;

    /**
     * Generated class for the IfcLightSource Entity.
     * 
     */
    class IFC2X3_EXPORT IfcLightSource : public IfcGeometricRepresentationItem {
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
         * Gets the value of the explicit attribute 'Name'.
         * 
         */
        virtual IfcLabel getName();
        /**
         * (const) Returns the value of the explicit attribute 'Name'.
         * 
         * @return the value of the explicit attribute 'Name'
         */
        virtual const IfcLabel getName() const;
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        virtual void setName(const IfcLabel &value);
        /**
         * unset the attribute 'Name'.
         * 
         */
        virtual void unsetName();
        /**
         * Test if the attribute 'Name' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testName() const;
        /**
         * Gets the value of the explicit attribute 'LightColour'.
         * 
         */
        virtual IfcColourRgb *getLightColour();
        /**
         * (const) Returns the value of the explicit attribute 'LightColour'.
         * 
         * @return the value of the explicit attribute 'LightColour'
         */
        virtual const IfcColourRgb *getLightColour() const;
        /**
         * Sets the value of the explicit attribute 'LightColour'.
         * 
         * @param value
         */
        virtual void setLightColour(const Step::RefPtr< IfcColourRgb > &value);
        /**
         * unset the attribute 'LightColour'.
         * 
         */
        virtual void unsetLightColour();
        /**
         * Test if the attribute 'LightColour' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLightColour() const;
        /**
         * Gets the value of the explicit attribute 'AmbientIntensity'.
         * 
         */
        virtual IfcNormalisedRatioMeasure getAmbientIntensity();
        /**
         * (const) Returns the value of the explicit attribute 'AmbientIntensity'.
         * 
         * @return the value of the explicit attribute 'AmbientIntensity'
         */
        virtual const IfcNormalisedRatioMeasure getAmbientIntensity() const;
        /**
         * Sets the value of the explicit attribute 'AmbientIntensity'.
         * 
         * @param value
         */
        virtual void setAmbientIntensity(IfcNormalisedRatioMeasure value);
        /**
         * unset the attribute 'AmbientIntensity'.
         * 
         */
        virtual void unsetAmbientIntensity();
        /**
         * Test if the attribute 'AmbientIntensity' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testAmbientIntensity() const;
        /**
         * Gets the value of the explicit attribute 'Intensity'.
         * 
         */
        virtual IfcNormalisedRatioMeasure getIntensity();
        /**
         * (const) Returns the value of the explicit attribute 'Intensity'.
         * 
         * @return the value of the explicit attribute 'Intensity'
         */
        virtual const IfcNormalisedRatioMeasure getIntensity() const;
        /**
         * Sets the value of the explicit attribute 'Intensity'.
         * 
         * @param value
         */
        virtual void setIntensity(IfcNormalisedRatioMeasure value);
        /**
         * unset the attribute 'Intensity'.
         * 
         */
        virtual void unsetIntensity();
        /**
         * Test if the attribute 'Intensity' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIntensity() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcLightSource(Step::Id id, Step::SPFData *args);
        virtual ~IfcLightSource();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcLightSource &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_name;
        /**
         */
        Step::RefPtr< IfcColourRgb > m_lightColour;
        /**
         */
        Step::Real m_ambientIntensity;
        /**
         */
        Step::Real m_intensity;

    };

}

#endif // IFC2X3_IFCLIGHTSOURCE_H
