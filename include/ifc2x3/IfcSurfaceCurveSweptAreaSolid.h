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

#ifndef IFC2X3_IFCSURFACECURVESWEPTAREASOLID_H
#define IFC2X3_IFCSURFACECURVESWEPTAREASOLID_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcSweptAreaSolid.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCurve;
    class IfcSurface;

    /**
     */
    class IFC2X3_DLL_DEF IfcSurfaceCurveSweptAreaSolid : public IfcSweptAreaSolid {
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
        IfcCurve *getDirectrix();
        /**
         * Sets the value of the explicit attribute 'Directrix'.
         * 
         * @param value
         */
        void setDirectrix(const Step::RefPtr< IfcCurve > &value);
        /**
         */
        IfcParameterValue getStartParam();
        /**
         * Sets the value of the explicit attribute 'StartParam'.
         * 
         * @param value
         */
        void setStartParam(IfcParameterValue value);
        /**
         */
        IfcParameterValue getEndParam();
        /**
         * Sets the value of the explicit attribute 'EndParam'.
         * 
         * @param value
         */
        void setEndParam(IfcParameterValue value);
        /**
         */
        IfcSurface *getReferenceSurface();
        /**
         * Sets the value of the explicit attribute 'ReferenceSurface'.
         * 
         * @param value
         */
        void setReferenceSurface(const Step::RefPtr< IfcSurface > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSurfaceCurveSweptAreaSolid(Step::Id id, Step::SPFData *args);
        virtual ~IfcSurfaceCurveSweptAreaSolid();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSurfaceCurveSweptAreaSolid &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcCurve > m_directrix;
        /**
         */
        Step::Real m_startParam;
        /**
         */
        Step::Real m_endParam;
        /**
         */
        Step::RefPtr< IfcSurface > m_referenceSurface;

    };

}

#endif // IFC2X3_IFCSURFACECURVESWEPTAREASOLID_H
