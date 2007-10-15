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

#ifndef IFC2X3_IFCSURFACESTYLELIGHTING_H
#define IFC2X3_IFCSURFACESTYLELIGHTING_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcColourRgb;

    /**
     */
    class IFC2X3_DLL_DEF IfcSurfaceStyleLighting : public Step::BaseEntity {
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
        IfcColourRgb *getDiffuseTransmissionColour();
        /**
         * Sets the value of the explicit attribute 'DiffuseTransmissionColour'.
         * 
         * @param value
         */
        void setDiffuseTransmissionColour(const Step::RefPtr< IfcColourRgb > &value);
        /**
         */
        IfcColourRgb *getDiffuseReflectionColour();
        /**
         * Sets the value of the explicit attribute 'DiffuseReflectionColour'.
         * 
         * @param value
         */
        void setDiffuseReflectionColour(const Step::RefPtr< IfcColourRgb > &value);
        /**
         */
        IfcColourRgb *getTransmissionColour();
        /**
         * Sets the value of the explicit attribute 'TransmissionColour'.
         * 
         * @param value
         */
        void setTransmissionColour(const Step::RefPtr< IfcColourRgb > &value);
        /**
         */
        IfcColourRgb *getReflectanceColour();
        /**
         * Sets the value of the explicit attribute 'ReflectanceColour'.
         * 
         * @param value
         */
        void setReflectanceColour(const Step::RefPtr< IfcColourRgb > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSurfaceStyleLighting(Step::Id id, Step::SPFData *args);
        virtual ~IfcSurfaceStyleLighting();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSurfaceStyleLighting &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcColourRgb > m_diffuseTransmissionColour;
        /**
         */
        Step::RefPtr< IfcColourRgb > m_diffuseReflectionColour;
        /**
         */
        Step::RefPtr< IfcColourRgb > m_transmissionColour;
        /**
         */
        Step::RefPtr< IfcColourRgb > m_reflectanceColour;

    };

}

#endif // IFC2X3_IFCSURFACESTYLELIGHTING_H
