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

#ifndef IFC2X3_IFCGRIDAXIS_H
#define IFC2X3_IFCGRIDAXIS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <string>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCurve;
    class IfcGrid;
    class IfcVirtualGridIntersection;

    /**
     */
    class IFC2X3_DLL_DEF IfcGridAxis : public Step::BaseEntity {
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
        IfcLabel getAxisTag();
        /**
         * Sets the value of the explicit attribute 'AxisTag'.
         * 
         * @param value
         */
        void setAxisTag(const IfcLabel &value);
        /**
         */
        IfcCurve *getAxisCurve();
        /**
         * Sets the value of the explicit attribute 'AxisCurve'.
         * 
         * @param value
         */
        void setAxisCurve(const Step::RefPtr< IfcCurve > &value);
        /**
         */
        IfcBoolean getSameSense();
        /**
         * Sets the value of the explicit attribute 'SameSense'.
         * 
         * @param value
         */
        void setSameSense(IfcBoolean value);
        /**
         */
        Step::Set< Step::ObsPtr< IfcGrid > > &getPartOfW();
        /**
         */
        Step::Set< Step::ObsPtr< IfcGrid > > &getPartOfV();
        /**
         */
        Step::Set< Step::ObsPtr< IfcGrid > > &getPartOfU();
        /**
         */
        Step::Set< Step::ObsPtr< IfcVirtualGridIntersection > > &getHasIntersections();
        /**
         */
        virtual void release();
        friend class IfcVirtualGridIntersection;
        friend class IfcGrid;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcGridAxis(Step::Id id, Step::SPFData *args);
        virtual ~IfcGridAxis();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcGridAxis &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_axisTag;
        /**
         */
        Step::RefPtr< IfcCurve > m_axisCurve;
        /**
         */
        Step::Bool m_sameSense;
        /**
         */
        Step::Set< Step::ObsPtr< IfcGrid > > m_partOfW;
        /**
         */
        Step::Set< Step::ObsPtr< IfcGrid > > m_partOfV;
        /**
         */
        Step::Set< Step::ObsPtr< IfcGrid > > m_partOfU;
        /**
         */
        Step::Set< Step::ObsPtr< IfcVirtualGridIntersection > > m_hasIntersections;

    };

}

#endif // IFC2X3_IFCGRIDAXIS_H
