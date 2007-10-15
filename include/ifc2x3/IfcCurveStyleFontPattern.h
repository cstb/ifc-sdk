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

#ifndef IFC2X3_IFCCURVESTYLEFONTPATTERN_H
#define IFC2X3_IFCCURVESTYLEFONTPATTERN_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcCurveStyleFontPattern : public Step::BaseEntity {
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
        IfcLengthMeasure getVisibleSegmentLength();
        /**
         * Sets the value of the explicit attribute 'VisibleSegmentLength'.
         * 
         * @param value
         */
        void setVisibleSegmentLength(IfcLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getInvisibleSegmentLength();
        /**
         * Sets the value of the explicit attribute 'InvisibleSegmentLength'.
         * 
         * @param value
         */
        void setInvisibleSegmentLength(IfcPositiveLengthMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCurveStyleFontPattern(Step::Id id, Step::SPFData *args);
        virtual ~IfcCurveStyleFontPattern();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCurveStyleFontPattern &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_visibleSegmentLength;
        /**
         */
        Step::Real m_invisibleSegmentLength;

    };

}

#endif // IFC2X3_IFCCURVESTYLEFONTPATTERN_H
