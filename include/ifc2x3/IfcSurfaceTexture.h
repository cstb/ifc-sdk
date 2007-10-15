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

#ifndef IFC2X3_IFCSURFACETEXTURE_H
#define IFC2X3_IFCSURFACETEXTURE_H
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
    class IfcCartesianTransformationOperator2D;

    /**
     */
    class IFC2X3_DLL_DEF IfcSurfaceTexture : public Step::BaseEntity {
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
        Step::Bool getRepeatS();
        /**
         * Sets the value of the explicit attribute 'RepeatS'.
         * 
         * @param value
         */
        void setRepeatS(Step::Bool value);
        /**
         */
        Step::Bool getRepeatT();
        /**
         * Sets the value of the explicit attribute 'RepeatT'.
         * 
         * @param value
         */
        void setRepeatT(Step::Bool value);
        /**
         */
        IfcSurfaceTextureEnum getTextureType();
        /**
         * Sets the value of the explicit attribute 'TextureType'.
         * 
         * @param value
         */
        void setTextureType(IfcSurfaceTextureEnum value);
        /**
         */
        IfcCartesianTransformationOperator2D *getTextureTransform();
        /**
         * Sets the value of the explicit attribute 'TextureTransform'.
         * 
         * @param value
         */
        void setTextureTransform(const Step::RefPtr< IfcCartesianTransformationOperator2D > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSurfaceTexture(Step::Id id, Step::SPFData *args);
        virtual ~IfcSurfaceTexture();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSurfaceTexture &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Bool m_repeatS;
        /**
         */
        Step::Bool m_repeatT;
        /**
         */
        IfcSurfaceTextureEnum m_textureType;
        /**
         */
        Step::RefPtr< IfcCartesianTransformationOperator2D > m_textureTransform;

    };

}

#endif // IFC2X3_IFCSURFACETEXTURE_H
