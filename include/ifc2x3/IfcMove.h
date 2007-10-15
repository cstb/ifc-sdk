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

#ifndef IFC2X3_IFCMOVE_H
#define IFC2X3_IFCMOVE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include "ifc2x3/IfcTask.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcSpatialStructureElement;

    /**
     */
    class IFC2X3_DLL_DEF IfcMove : public IfcTask {
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
        IfcSpatialStructureElement *getMoveFrom();
        /**
         * Sets the value of the explicit attribute 'MoveFrom'.
         * 
         * @param value
         */
        void setMoveFrom(const Step::RefPtr< IfcSpatialStructureElement > &value);
        /**
         */
        IfcSpatialStructureElement *getMoveTo();
        /**
         * Sets the value of the explicit attribute 'MoveTo'.
         * 
         * @param value
         */
        void setMoveTo(const Step::RefPtr< IfcSpatialStructureElement > &value);
        /**
         */
        Step::List< IfcText > &getPunchList();
        /**
         * Sets the value of the explicit attribute 'PunchList'.
         * 
         * @param value
         */
        void setPunchList(const Step::List< IfcText > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcMove(Step::Id id, Step::SPFData *args);
        virtual ~IfcMove();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMove &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcSpatialStructureElement > m_moveFrom;
        /**
         */
        Step::RefPtr< IfcSpatialStructureElement > m_moveTo;
        /**
         */
        Step::List< IfcText > m_punchList;

    };

}

#endif // IFC2X3_IFCMOVE_H
