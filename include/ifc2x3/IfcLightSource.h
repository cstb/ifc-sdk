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

#ifndef IFC2X3_IFCLIGHTSOURCE_H
#define IFC2X3_IFCLIGHTSOURCE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcColourRgb;

    /**
     */
    class IFC2X3_DLL_DEF IfcLightSource : public IfcGeometricRepresentationItem {
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
