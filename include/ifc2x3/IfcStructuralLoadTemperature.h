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

#ifndef IFC2X3_IFCSTRUCTURALLOADTEMPERATURE_H
#define IFC2X3_IFCSTRUCTURALLOADTEMPERATURE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcStructuralLoadStatic.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcStructuralLoadTemperature : public IfcStructuralLoadStatic {
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
        IfcThermodynamicTemperatureMeasure getDeltaT_Constant();
        /**
         * Sets the value of the explicit attribute 'DeltaT_Constant'.
         * 
         * @param value
         */
        void setDeltaT_Constant(IfcThermodynamicTemperatureMeasure value);
        /**
         */
        IfcThermodynamicTemperatureMeasure getDeltaT_Y();
        /**
         * Sets the value of the explicit attribute 'DeltaT_Y'.
         * 
         * @param value
         */
        void setDeltaT_Y(IfcThermodynamicTemperatureMeasure value);
        /**
         */
        IfcThermodynamicTemperatureMeasure getDeltaT_Z();
        /**
         * Sets the value of the explicit attribute 'DeltaT_Z'.
         * 
         * @param value
         */
        void setDeltaT_Z(IfcThermodynamicTemperatureMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralLoadTemperature(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralLoadTemperature();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralLoadTemperature &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_deltaT_Constant;
        /**
         */
        Step::Real m_deltaT_Y;
        /**
         */
        Step::Real m_deltaT_Z;

    };

}

#endif // IFC2X3_IFCSTRUCTURALLOADTEMPERATURE_H
