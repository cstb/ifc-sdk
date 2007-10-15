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

#ifndef IFC2X3_IFCLIGHTSOURCE_H
#define IFC2X3_IFCLIGHTSOURCE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include <Step/SPFData.h>
#include <string>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcColourRgb;

    /**
     */
    class IFC2X3_DLL_DEF IfcLightSource : public IfcGeometricRepresentationItem {
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
        IfcLabel getName();
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        void setName(const IfcLabel &value);
        /**
         */
        IfcColourRgb *getLightColour();
        /**
         * Sets the value of the explicit attribute 'LightColour'.
         * 
         * @param value
         */
        void setLightColour(const Step::RefPtr< IfcColourRgb > &value);
        /**
         */
        IfcNormalisedRatioMeasure getAmbientIntensity();
        /**
         * Sets the value of the explicit attribute 'AmbientIntensity'.
         * 
         * @param value
         */
        void setAmbientIntensity(IfcNormalisedRatioMeasure value);
        /**
         */
        IfcNormalisedRatioMeasure getIntensity();
        /**
         * Sets the value of the explicit attribute 'Intensity'.
         * 
         * @param value
         */
        void setIntensity(IfcNormalisedRatioMeasure value);
        /**
         */
        virtual void release();
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
        std::string m_name;
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
