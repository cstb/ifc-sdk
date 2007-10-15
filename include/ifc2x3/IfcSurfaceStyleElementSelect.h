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

#ifndef IFC2X3_IFCSURFACESTYLEELEMENTSELECT_H
#define IFC2X3_IFCSURFACESTYLEELEMENTSELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcExternallyDefinedSurfaceStyle;
    class IfcSurfaceStyleLighting;
    class IfcSurfaceStyleRefraction;
    class IfcSurfaceStyleShading;
    class IfcSurfaceStyleWithTextures;

    /**
     */
    class IFC2X3_DLL_DEF IfcSurfaceStyleElementSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcSurfaceStyleElementSelect_select {
            IFCSURFACESTYLESHADING,
            IFCSURFACESTYLELIGHTING,
            IFCSURFACESTYLEWITHTEXTURES,
            IFCEXTERNALLYDEFINEDSURFACESTYLE,
            IFCSURFACESTYLEREFRACTION,
            UNSET,
        };

        union IfcSurfaceStyleElementSelect_union {
            IfcSurfaceStyleShading *m_IfcSurfaceStyleShading;
            IfcSurfaceStyleLighting *m_IfcSurfaceStyleLighting;
            IfcSurfaceStyleWithTextures *m_IfcSurfaceStyleWithTextures;
            IfcExternallyDefinedSurfaceStyle *m_IfcExternallyDefinedSurfaceStyle;
            IfcSurfaceStyleRefraction *m_IfcSurfaceStyleRefraction;
        };
        /**
         */
        IfcSurfaceStyleElementSelect();
        virtual ~IfcSurfaceStyleElementSelect();
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
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSurfaceStyleElementSelect &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcSurfaceStyleElementSelect_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcSurfaceStyleShading *getIfcSurfaceStyleShading();
        /**
         * @param value
         */
        void setIfcSurfaceStyleShading(IfcSurfaceStyleShading *value);
        /**
         */
        IfcSurfaceStyleLighting *getIfcSurfaceStyleLighting();
        /**
         * @param value
         */
        void setIfcSurfaceStyleLighting(IfcSurfaceStyleLighting *value);
        /**
         */
        IfcSurfaceStyleWithTextures *getIfcSurfaceStyleWithTextures();
        /**
         * @param value
         */
        void setIfcSurfaceStyleWithTextures(IfcSurfaceStyleWithTextures *value);
        /**
         */
        IfcExternallyDefinedSurfaceStyle *getIfcExternallyDefinedSurfaceStyle();
        /**
         * @param value
         */
        void setIfcExternallyDefinedSurfaceStyle(IfcExternallyDefinedSurfaceStyle *value);
        /**
         */
        IfcSurfaceStyleRefraction *getIfcSurfaceStyleRefraction();
        /**
         * @param value
         */
        void setIfcSurfaceStyleRefraction(IfcSurfaceStyleRefraction *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcSurfaceStyleElementSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcSurfaceStyleElementSelect_select m_type;
        /**
         */
        IfcSurfaceStyleElementSelect_union m_IfcSurfaceStyleElementSelect_union;

    };

}

#endif // IFC2X3_IFCSURFACESTYLEELEMENTSELECT_H
