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

#ifndef IFC2X3_IFCTRANSPORTELEMENT_H
#define IFC2X3_IFCTRANSPORTELEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcElement.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcTransportElement : public IfcElement {
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
        IfcTransportElementTypeEnum getOperationType();
        /**
         * Sets the value of the explicit attribute 'OperationType'.
         * 
         * @param value
         */
        void setOperationType(IfcTransportElementTypeEnum value);
        /**
         */
        IfcMassMeasure getCapacityByWeight();
        /**
         * Sets the value of the explicit attribute 'CapacityByWeight'.
         * 
         * @param value
         */
        void setCapacityByWeight(IfcMassMeasure value);
        /**
         */
        IfcCountMeasure getCapacityByNumber();
        /**
         * Sets the value of the explicit attribute 'CapacityByNumber'.
         * 
         * @param value
         */
        void setCapacityByNumber(IfcCountMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTransportElement(Step::Id id, Step::SPFData *args);
        virtual ~IfcTransportElement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTransportElement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcTransportElementTypeEnum m_operationType;
        /**
         */
        Step::Real m_capacityByWeight;
        /**
         */
        Step::Integer m_capacityByNumber;

    };

}

#endif // IFC2X3_IFCTRANSPORTELEMENT_H
