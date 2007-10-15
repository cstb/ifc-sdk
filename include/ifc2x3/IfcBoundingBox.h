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

#ifndef IFC2X3_IFCBOUNDINGBOX_H
#define IFC2X3_IFCBOUNDINGBOX_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCartesianPoint;

    /**
     */
    class IFC2X3_DLL_DEF IfcBoundingBox : public IfcGeometricRepresentationItem {
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
        IfcCartesianPoint *getCorner();
        /**
         * Sets the value of the explicit attribute 'Corner'.
         * 
         * @param value
         */
        void setCorner(const Step::RefPtr< IfcCartesianPoint > &value);
        /**
         */
        IfcPositiveLengthMeasure getXDim();
        /**
         * Sets the value of the explicit attribute 'XDim'.
         * 
         * @param value
         */
        void setXDim(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getYDim();
        /**
         * Sets the value of the explicit attribute 'YDim'.
         * 
         * @param value
         */
        void setYDim(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getZDim();
        /**
         * Sets the value of the explicit attribute 'ZDim'.
         * 
         * @param value
         */
        void setZDim(IfcPositiveLengthMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcBoundingBox(Step::Id id, Step::SPFData *args);
        virtual ~IfcBoundingBox();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcBoundingBox &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcCartesianPoint > m_corner;
        /**
         */
        Step::Real m_xDim;
        /**
         */
        Step::Real m_yDim;
        /**
         */
        Step::Real m_zDim;

    };

}

#endif // IFC2X3_IFCBOUNDINGBOX_H
