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

#ifndef IFC2X3_IFCSLIPPAGECONNECTIONCONDITION_H
#define IFC2X3_IFCSLIPPAGECONNECTIONCONDITION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcStructuralConnectionCondition.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcSlippageConnectionCondition : public IfcStructuralConnectionCondition {
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
        IfcLengthMeasure getSlippageX();
        /**
         * Sets the value of the explicit attribute 'SlippageX'.
         * 
         * @param value
         */
        void setSlippageX(IfcLengthMeasure value);
        /**
         */
        IfcLengthMeasure getSlippageY();
        /**
         * Sets the value of the explicit attribute 'SlippageY'.
         * 
         * @param value
         */
        void setSlippageY(IfcLengthMeasure value);
        /**
         */
        IfcLengthMeasure getSlippageZ();
        /**
         * Sets the value of the explicit attribute 'SlippageZ'.
         * 
         * @param value
         */
        void setSlippageZ(IfcLengthMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSlippageConnectionCondition(Step::Id id, Step::SPFData *args);
        virtual ~IfcSlippageConnectionCondition();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSlippageConnectionCondition &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_slippageX;
        /**
         */
        Step::Real m_slippageY;
        /**
         */
        Step::Real m_slippageZ;

    };

}

#endif // IFC2X3_IFCSLIPPAGECONNECTIONCONDITION_H
