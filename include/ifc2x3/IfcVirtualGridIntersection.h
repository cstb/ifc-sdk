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

#ifndef IFC2X3_IFCVIRTUALGRIDINTERSECTION_H
#define IFC2X3_IFCVIRTUALGRIDINTERSECTION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcGridAxis;

    /**
     */
    class IFC2X3_DLL_DEF IfcVirtualGridIntersection : public Step::BaseEntity {
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
        Step::List< Step::RefPtr< IfcGridAxis > > &getIntersectingAxes();
        /**
         */
        Step::List< IfcLengthMeasure > &getOffsetDistances();
        /**
         * Sets the value of the explicit attribute 'OffsetDistances'.
         * 
         * @param value
         */
        void setOffsetDistances(const Step::List< IfcLengthMeasure > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        /**
         */
        class Inverted_IntersectingAxes_type : public Step::List< Step::RefPtr< IfcGridAxis > > {
        public:
            /**
             */
            IfcVirtualGridIntersection *mOwner;
            /**
             */
            Inverted_IntersectingAxes_type();
            /**
             * @param owner
             */
            void setOwner(IfcVirtualGridIntersection *owner);
            /**
             * @param value
             */
            virtual void push_back(const Step::RefPtr< IfcGridAxis > &value);

        };


    protected:
        /**
         * @param id
         * @param args
         */
        IfcVirtualGridIntersection(Step::Id id, Step::SPFData *args);
        virtual ~IfcVirtualGridIntersection();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcVirtualGridIntersection &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverted_IntersectingAxes_type m_intersectingAxes;
        /**
         */
        Step::List< IfcLengthMeasure > m_offsetDistances;

    };

}

#endif // IFC2X3_IFCVIRTUALGRIDINTERSECTION_H
