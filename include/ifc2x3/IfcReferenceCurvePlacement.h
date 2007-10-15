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

#ifndef IFC2X3_IFCREFERENCECURVEPLACEMENT_H
#define IFC2X3_IFCREFERENCECURVEPLACEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcReferencePlacement.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcDirection;
    class IfcReferenceCurvePlacementSystem;

    /**
     */
    class IFC2X3_DLL_DEF IfcReferenceCurvePlacement : public IfcReferencePlacement {
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
        IfcLengthMeasure getCurvilinearAbscissa();
        /**
         * Sets the value of the explicit attribute 'CurvilinearAbscissa'.
         * 
         * @param value
         */
        void setCurvilinearAbscissa(IfcLengthMeasure value);
        /**
         */
        IfcDirection *getAxis();
        /**
         * Sets the value of the explicit attribute 'Axis'.
         * 
         * @param value
         */
        void setAxis(const Step::RefPtr< IfcDirection > &value);
        /**
         */
        IfcDirection *getRefDirection();
        /**
         * Sets the value of the explicit attribute 'RefDirection'.
         * 
         * @param value
         */
        void setRefDirection(const Step::RefPtr< IfcDirection > &value);
        /**
         */
        IfcReferenceCurvePlacementSystem *getRelativeTo();
        /**
         * Sets the value of the explicit attribute 'RelativeTo'.
         * 
         * @param value
         */
        void setRelativeTo(const Step::RefPtr< IfcReferenceCurvePlacementSystem > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcReferenceCurvePlacement(Step::Id id, Step::SPFData *args);
        virtual ~IfcReferenceCurvePlacement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcReferenceCurvePlacement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_curvilinearAbscissa;
        /**
         */
        Step::RefPtr< IfcDirection > m_axis;
        /**
         */
        Step::RefPtr< IfcDirection > m_refDirection;
        /**
         */
        Step::RefPtr< IfcReferenceCurvePlacementSystem > m_relativeTo;

    };

}

#endif // IFC2X3_IFCREFERENCECURVEPLACEMENT_H
