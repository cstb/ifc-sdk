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

#ifndef IFC2X3_IFCSURFACEOFLINEAREXTRUSION_H
#define IFC2X3_IFCSURFACEOFLINEAREXTRUSION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>
#include "ifc2x3/IfcSweptSurface.h"

namespace ifc2x3 {

    class CopyOp;
    class IfcDirection;

    /**
     */
    class IFC2X3_DLL_DEF IfcSurfaceOfLinearExtrusion : public IfcSweptSurface {
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
        IfcDirection *getExtrudedDirection();
        /**
         * Sets the value of the explicit attribute 'ExtrudedDirection'.
         * 
         * @param value
         */
        void setExtrudedDirection(const Step::RefPtr< IfcDirection > &value);
        /**
         */
        IfcLengthMeasure getDepth();
        /**
         * Sets the value of the explicit attribute 'Depth'.
         * 
         * @param value
         */
        void setDepth(IfcLengthMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSurfaceOfLinearExtrusion(Step::Id id, Step::SPFData *args);
        virtual ~IfcSurfaceOfLinearExtrusion();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSurfaceOfLinearExtrusion &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcDirection > m_extrudedDirection;
        /**
         */
        Step::Real m_depth;

    };

}

#endif // IFC2X3_IFCSURFACEOFLINEAREXTRUSION_H
