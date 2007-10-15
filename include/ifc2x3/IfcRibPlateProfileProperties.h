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

#ifndef IFC2X3_IFCRIBPLATEPROFILEPROPERTIES_H
#define IFC2X3_IFCRIBPLATEPROFILEPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcProfileProperties.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcRibPlateProfileProperties : public IfcProfileProperties {
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
        IfcPositiveLengthMeasure getThickness();
        /**
         * Sets the value of the explicit attribute 'Thickness'.
         * 
         * @param value
         */
        void setThickness(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getRibHeight();
        /**
         * Sets the value of the explicit attribute 'RibHeight'.
         * 
         * @param value
         */
        void setRibHeight(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getRibWidth();
        /**
         * Sets the value of the explicit attribute 'RibWidth'.
         * 
         * @param value
         */
        void setRibWidth(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getRibSpacing();
        /**
         * Sets the value of the explicit attribute 'RibSpacing'.
         * 
         * @param value
         */
        void setRibSpacing(IfcPositiveLengthMeasure value);
        /**
         */
        IfcRibPlateDirectionEnum getDirection();
        /**
         * Sets the value of the explicit attribute 'Direction'.
         * 
         * @param value
         */
        void setDirection(IfcRibPlateDirectionEnum value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRibPlateProfileProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcRibPlateProfileProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRibPlateProfileProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_thickness;
        /**
         */
        Step::Real m_ribHeight;
        /**
         */
        Step::Real m_ribWidth;
        /**
         */
        Step::Real m_ribSpacing;
        /**
         */
        IfcRibPlateDirectionEnum m_direction;

    };

}

#endif // IFC2X3_IFCRIBPLATEPROFILEPROPERTIES_H
