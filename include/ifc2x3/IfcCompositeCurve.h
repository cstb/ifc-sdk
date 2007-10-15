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

#ifndef IFC2X3_IFCCOMPOSITECURVE_H
#define IFC2X3_IFCCOMPOSITECURVE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Aggregation.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcBoundedCurve.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCompositeCurveSegment;

    /**
     */
    class IFC2X3_DLL_DEF IfcCompositeCurve : public IfcBoundedCurve {
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
        Step::List< Step::RefPtr< IfcCompositeCurveSegment > > &getSegments();
        /**
         */
        Step::Logical getSelfIntersect();
        /**
         * Sets the value of the explicit attribute 'SelfIntersect'.
         * 
         * @param value
         */
        void setSelfIntersect(Step::Logical value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        /**
         */
        class Inverted_Segments_type : public Step::List< Step::RefPtr< IfcCompositeCurveSegment > > {
        public:
            /**
             */
            IfcCompositeCurve *mOwner;
            /**
             */
            Inverted_Segments_type();
            /**
             * @param owner
             */
            void setOwner(IfcCompositeCurve *owner);
            /**
             * @param value
             */
            virtual void push_back(const Step::RefPtr< IfcCompositeCurveSegment > &value);

        };


    protected:
        /**
         * @param id
         * @param args
         */
        IfcCompositeCurve(Step::Id id, Step::SPFData *args);
        virtual ~IfcCompositeCurve();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCompositeCurve &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverted_Segments_type m_segments;
        /**
         */
        Step::Logical m_selfIntersect;

    };

}

#endif // IFC2X3_IFCCOMPOSITECURVE_H
