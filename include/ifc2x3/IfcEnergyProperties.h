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

#ifndef IFC2X3_IFCENERGYPROPERTIES_H
#define IFC2X3_IFCENERGYPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>
#include "ifc2x3/IfcPropertySetDefinition.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcEnergyProperties : public IfcPropertySetDefinition {
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
        IfcEnergySequenceEnum getEnergySequence();
        /**
         * Sets the value of the explicit attribute 'EnergySequence'.
         * 
         * @param value
         */
        void setEnergySequence(IfcEnergySequenceEnum value);
        /**
         */
        IfcLabel getUserDefinedEnergySequence();
        /**
         * Sets the value of the explicit attribute 'UserDefinedEnergySequence'.
         * 
         * @param value
         */
        void setUserDefinedEnergySequence(const IfcLabel &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcEnergyProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcEnergyProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcEnergyProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcEnergySequenceEnum m_energySequence;
        /**
         */
        std::string m_userDefinedEnergySequence;

    };

}

#endif // IFC2X3_IFCENERGYPROPERTIES_H
