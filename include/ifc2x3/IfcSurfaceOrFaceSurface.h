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

#ifndef IFC2X3_IFCSURFACEORFACESURFACE_H
#define IFC2X3_IFCSURFACEORFACESURFACE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcFaceBasedSurfaceModel;
    class IfcFaceSurface;
    class IfcSurface;

    /**
     */
    class IFC2X3_DLL_DEF IfcSurfaceOrFaceSurface : public Step::BaseObject {
    public:
        /**
 */
enum IfcSurfaceOrFaceSurface_select {
            IFCSURFACE,
            IFCFACESURFACE,
            IFCFACEBASEDSURFACEMODEL,
            UNSET,
        };

        union IfcSurfaceOrFaceSurface_union {
            IfcSurface *m_IfcSurface;
            IfcFaceSurface *m_IfcFaceSurface;
            IfcFaceBasedSurfaceModel *m_IfcFaceBasedSurfaceModel;
        };
        /**
         */
        IfcSurfaceOrFaceSurface();
        virtual ~IfcSurfaceOrFaceSurface();
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
        virtual void copy(const IfcSurfaceOrFaceSurface &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcSurfaceOrFaceSurface_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcSurface *getIfcSurface();
        /**
         * @param value
         */
        void setIfcSurface(IfcSurface *value);
        /**
         */
        IfcFaceSurface *getIfcFaceSurface();
        /**
         * @param value
         */
        void setIfcFaceSurface(IfcFaceSurface *value);
        /**
         */
        IfcFaceBasedSurfaceModel *getIfcFaceBasedSurfaceModel();
        /**
         * @param value
         */
        void setIfcFaceBasedSurfaceModel(IfcFaceBasedSurfaceModel *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcSurfaceOrFaceSurface(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcSurfaceOrFaceSurface_select m_type;
        /**
         */
        IfcSurfaceOrFaceSurface_union m_IfcSurfaceOrFaceSurface_union;

    };

}

#endif // IFC2X3_IFCSURFACEORFACESURFACE_H
