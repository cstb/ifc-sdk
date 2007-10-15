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

#ifndef IFC2X3_IFCBRIDGESEGMENT_H
#define IFC2X3_IFCBRIDGESEGMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include "ifc2x3/IfcBridgeElement.h"
#include <Step/ClassType.h>
#include <Step/Aggregation.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCivilElementPart;

    /**
     */
    class IFC2X3_DLL_DEF IfcBridgeSegment : public IfcBridgeElement {
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
        IfcBridgeSegmentType getSegmentType();
        /**
         * Sets the value of the explicit attribute 'SegmentType'.
         * 
         * @param value
         */
        void setSegmentType(IfcBridgeSegmentType value);
        /**
         */
        Step::Set< Step::RefPtr< IfcCivilElementPart > > &getSegmentParts();
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        /**
         */
        class Inverted_SegmentParts_type : public Step::Set< Step::RefPtr< IfcCivilElementPart > > {
        public:
            /**
             */
            IfcBridgeSegment *mOwner;
            /**
             */
            Inverted_SegmentParts_type();
            /**
             * @param owner
             */
            void setOwner(IfcBridgeSegment *owner);
            /**
             * @param value
             */
            virtual void insert(const Step::RefPtr< IfcCivilElementPart > &value);

        };


    protected:
        /**
         * @param id
         * @param args
         */
        IfcBridgeSegment(Step::Id id, Step::SPFData *args);
        virtual ~IfcBridgeSegment();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcBridgeSegment &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcBridgeSegmentType m_segmentType;
        /**
         */
        Inverted_SegmentParts_type m_segmentParts;

    };

}

#endif // IFC2X3_IFCBRIDGESEGMENT_H
