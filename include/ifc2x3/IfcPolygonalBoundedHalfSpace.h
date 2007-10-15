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

#ifndef IFC2X3_IFCPOLYGONALBOUNDEDHALFSPACE_H
#define IFC2X3_IFCPOLYGONALBOUNDEDHALFSPACE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include "ifc2x3/IfcHalfSpaceSolid.h"
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcAxis2Placement3D;
    class IfcBoundedCurve;

    /**
     */
    class IFC2X3_DLL_DEF IfcPolygonalBoundedHalfSpace : public IfcHalfSpaceSolid {
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
        IfcAxis2Placement3D *getPosition();
        /**
         * Sets the value of the explicit attribute 'Position'.
         * 
         * @param value
         */
        void setPosition(const Step::RefPtr< IfcAxis2Placement3D > &value);
        /**
         */
        IfcBoundedCurve *getPolygonalBoundary();
        /**
         * Sets the value of the explicit attribute 'PolygonalBoundary'.
         * 
         * @param value
         */
        void setPolygonalBoundary(const Step::RefPtr< IfcBoundedCurve > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPolygonalBoundedHalfSpace(Step::Id id, Step::SPFData *args);
        virtual ~IfcPolygonalBoundedHalfSpace();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPolygonalBoundedHalfSpace &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcAxis2Placement3D > m_position;
        /**
         */
        Step::RefPtr< IfcBoundedCurve > m_polygonalBoundary;

    };

}

#endif // IFC2X3_IFCPOLYGONALBOUNDEDHALFSPACE_H
