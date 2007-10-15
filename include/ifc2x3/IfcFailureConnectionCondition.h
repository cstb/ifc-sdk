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

#ifndef IFC2X3_IFCFAILURECONNECTIONCONDITION_H
#define IFC2X3_IFCFAILURECONNECTIONCONDITION_H
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
    class IFC2X3_DLL_DEF IfcFailureConnectionCondition : public IfcStructuralConnectionCondition {
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
        IfcForceMeasure getTensionFailureX();
        /**
         * Sets the value of the explicit attribute 'TensionFailureX'.
         * 
         * @param value
         */
        void setTensionFailureX(IfcForceMeasure value);
        /**
         */
        IfcForceMeasure getTensionFailureY();
        /**
         * Sets the value of the explicit attribute 'TensionFailureY'.
         * 
         * @param value
         */
        void setTensionFailureY(IfcForceMeasure value);
        /**
         */
        IfcForceMeasure getTensionFailureZ();
        /**
         * Sets the value of the explicit attribute 'TensionFailureZ'.
         * 
         * @param value
         */
        void setTensionFailureZ(IfcForceMeasure value);
        /**
         */
        IfcForceMeasure getCompressionFailureX();
        /**
         * Sets the value of the explicit attribute 'CompressionFailureX'.
         * 
         * @param value
         */
        void setCompressionFailureX(IfcForceMeasure value);
        /**
         */
        IfcForceMeasure getCompressionFailureY();
        /**
         * Sets the value of the explicit attribute 'CompressionFailureY'.
         * 
         * @param value
         */
        void setCompressionFailureY(IfcForceMeasure value);
        /**
         */
        IfcForceMeasure getCompressionFailureZ();
        /**
         * Sets the value of the explicit attribute 'CompressionFailureZ'.
         * 
         * @param value
         */
        void setCompressionFailureZ(IfcForceMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcFailureConnectionCondition(Step::Id id, Step::SPFData *args);
        virtual ~IfcFailureConnectionCondition();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcFailureConnectionCondition &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_tensionFailureX;
        /**
         */
        Step::Real m_tensionFailureY;
        /**
         */
        Step::Real m_tensionFailureZ;
        /**
         */
        Step::Real m_compressionFailureX;
        /**
         */
        Step::Real m_compressionFailureY;
        /**
         */
        Step::Real m_compressionFailureZ;

    };

}

#endif // IFC2X3_IFCFAILURECONNECTIONCONDITION_H
