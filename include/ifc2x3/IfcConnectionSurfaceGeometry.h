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

#ifndef IFC2X3_IFCCONNECTIONSURFACEGEOMETRY_H
#define IFC2X3_IFCCONNECTIONSURFACEGEOMETRY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcConnectionGeometry.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcSurfaceOrFaceSurface;

    /**
     */
    class IFC2X3_DLL_DEF IfcConnectionSurfaceGeometry : public IfcConnectionGeometry {
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
        IfcSurfaceOrFaceSurface *getSurfaceOnRelatingElement();
        /**
         * Sets the value of the explicit attribute 'SurfaceOnRelatingElement'.
         * 
         * @param value
         */
        void setSurfaceOnRelatingElement(const Step::RefPtr< IfcSurfaceOrFaceSurface > &value);
        /**
         */
        IfcSurfaceOrFaceSurface *getSurfaceOnRelatedElement();
        /**
         * Sets the value of the explicit attribute 'SurfaceOnRelatedElement'.
         * 
         * @param value
         */
        void setSurfaceOnRelatedElement(const Step::RefPtr< IfcSurfaceOrFaceSurface > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcConnectionSurfaceGeometry(Step::Id id, Step::SPFData *args);
        virtual ~IfcConnectionSurfaceGeometry();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcConnectionSurfaceGeometry &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcSurfaceOrFaceSurface > m_surfaceOnRelatingElement;
        /**
         */
        Step::RefPtr< IfcSurfaceOrFaceSurface > m_surfaceOnRelatedElement;

    };

}

#endif // IFC2X3_IFCCONNECTIONSURFACEGEOMETRY_H
