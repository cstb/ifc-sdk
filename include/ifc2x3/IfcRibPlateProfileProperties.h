/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
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
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'Thickness'.
         * 
         */
        virtual IfcPositiveLengthMeasure getThickness();
        /**
         * (const) Returns the value of the explicit attribute 'Thickness'.
         * 
         * @return the value of the explicit attribute 'Thickness'
         */
        virtual const IfcPositiveLengthMeasure getThickness() const;
        /**
         * Sets the value of the explicit attribute 'Thickness'.
         * 
         * @param value
         */
        virtual void setThickness(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'RibHeight'.
         * 
         */
        virtual IfcPositiveLengthMeasure getRibHeight();
        /**
         * (const) Returns the value of the explicit attribute 'RibHeight'.
         * 
         * @return the value of the explicit attribute 'RibHeight'
         */
        virtual const IfcPositiveLengthMeasure getRibHeight() const;
        /**
         * Sets the value of the explicit attribute 'RibHeight'.
         * 
         * @param value
         */
        virtual void setRibHeight(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'RibWidth'.
         * 
         */
        virtual IfcPositiveLengthMeasure getRibWidth();
        /**
         * (const) Returns the value of the explicit attribute 'RibWidth'.
         * 
         * @return the value of the explicit attribute 'RibWidth'
         */
        virtual const IfcPositiveLengthMeasure getRibWidth() const;
        /**
         * Sets the value of the explicit attribute 'RibWidth'.
         * 
         * @param value
         */
        virtual void setRibWidth(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'RibSpacing'.
         * 
         */
        virtual IfcPositiveLengthMeasure getRibSpacing();
        /**
         * (const) Returns the value of the explicit attribute 'RibSpacing'.
         * 
         * @return the value of the explicit attribute 'RibSpacing'
         */
        virtual const IfcPositiveLengthMeasure getRibSpacing() const;
        /**
         * Sets the value of the explicit attribute 'RibSpacing'.
         * 
         * @param value
         */
        virtual void setRibSpacing(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'Direction'.
         * 
         */
        virtual IfcRibPlateDirectionEnum getDirection();
        /**
         * (const) Returns the value of the explicit attribute 'Direction'.
         * 
         * @return the value of the explicit attribute 'Direction'
         */
        virtual const IfcRibPlateDirectionEnum getDirection() const;
        /**
         * Sets the value of the explicit attribute 'Direction'.
         * 
         * @param value
         */
        virtual void setDirection(IfcRibPlateDirectionEnum value);
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
