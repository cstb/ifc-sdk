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

#ifndef IFC2X3_IFCSURFACESTYLERENDERING_H
#define IFC2X3_IFCSURFACESTYLERENDERING_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include "ifc2x3/IfcSurfaceStyleShading.h"
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcColourOrFactor;
    class IfcSpecularHighlightSelect;

    /**
     */
    class IFC2X3_DLL_DEF IfcSurfaceStyleRendering : public IfcSurfaceStyleShading {
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
        IfcNormalisedRatioMeasure getTransparency();
        /**
         * Sets the value of the explicit attribute 'Transparency'.
         * 
         * @param value
         */
        void setTransparency(IfcNormalisedRatioMeasure value);
        /**
         */
        IfcColourOrFactor *getDiffuseColour();
        /**
         * Sets the value of the explicit attribute 'DiffuseColour'.
         * 
         * @param value
         */
        void setDiffuseColour(const Step::RefPtr< IfcColourOrFactor > &value);
        /**
         */
        IfcColourOrFactor *getTransmissionColour();
        /**
         * Sets the value of the explicit attribute 'TransmissionColour'.
         * 
         * @param value
         */
        void setTransmissionColour(const Step::RefPtr< IfcColourOrFactor > &value);
        /**
         */
        IfcColourOrFactor *getDiffuseTransmissionColour();
        /**
         * Sets the value of the explicit attribute 'DiffuseTransmissionColour'.
         * 
         * @param value
         */
        void setDiffuseTransmissionColour(const Step::RefPtr< IfcColourOrFactor > &value);
        /**
         */
        IfcColourOrFactor *getReflectionColour();
        /**
         * Sets the value of the explicit attribute 'ReflectionColour'.
         * 
         * @param value
         */
        void setReflectionColour(const Step::RefPtr< IfcColourOrFactor > &value);
        /**
         */
        IfcColourOrFactor *getSpecularColour();
        /**
         * Sets the value of the explicit attribute 'SpecularColour'.
         * 
         * @param value
         */
        void setSpecularColour(const Step::RefPtr< IfcColourOrFactor > &value);
        /**
         */
        IfcSpecularHighlightSelect *getSpecularHighlight();
        /**
         * Sets the value of the explicit attribute 'SpecularHighlight'.
         * 
         * @param value
         */
        void setSpecularHighlight(const Step::RefPtr< IfcSpecularHighlightSelect > &value);
        /**
         */
        IfcReflectanceMethodEnum getReflectanceMethod();
        /**
         * Sets the value of the explicit attribute 'ReflectanceMethod'.
         * 
         * @param value
         */
        void setReflectanceMethod(IfcReflectanceMethodEnum value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSurfaceStyleRendering(Step::Id id, Step::SPFData *args);
        virtual ~IfcSurfaceStyleRendering();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSurfaceStyleRendering &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_transparency;
        /**
         */
        Step::RefPtr< IfcColourOrFactor > m_diffuseColour;
        /**
         */
        Step::RefPtr< IfcColourOrFactor > m_transmissionColour;
        /**
         */
        Step::RefPtr< IfcColourOrFactor > m_diffuseTransmissionColour;
        /**
         */
        Step::RefPtr< IfcColourOrFactor > m_reflectionColour;
        /**
         */
        Step::RefPtr< IfcColourOrFactor > m_specularColour;
        /**
         */
        Step::RefPtr< IfcSpecularHighlightSelect > m_specularHighlight;
        /**
         */
        IfcReflectanceMethodEnum m_reflectanceMethod;

    };

}

#endif // IFC2X3_IFCSURFACESTYLERENDERING_H
