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
 *     Copyright (C) 2009 CSTB                                             *
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

#ifndef IFC2X3_IFCRIGHTCIRCULARCYLINDER_H
#define IFC2X3_IFCRIGHTCIRCULARCYLINDER_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcCsgPrimitive3D.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcRightCircularCylinder Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcRightCircularCylinder : public IfcCsgPrimitive3D {
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
         * Gets the value of the explicit attribute 'Height'.
         * 
         */
        virtual IfcPositiveLengthMeasure getHeight();
        /**
         * (const) Returns the value of the explicit attribute 'Height'.
         * 
         * @return the value of the explicit attribute 'Height'
         */
        virtual const IfcPositiveLengthMeasure getHeight() const;
        /**
         * Sets the value of the explicit attribute 'Height'.
         * 
         * @param value
         */
        virtual void setHeight(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'Height'.
         * 
         */
        virtual void unsetHeight();
        /**
         * Test if the attribute 'Height' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHeight() const;
        /**
         * Gets the value of the explicit attribute 'Radius'.
         * 
         */
        virtual IfcPositiveLengthMeasure getRadius();
        /**
         * (const) Returns the value of the explicit attribute 'Radius'.
         * 
         * @return the value of the explicit attribute 'Radius'
         */
        virtual const IfcPositiveLengthMeasure getRadius() const;
        /**
         * Sets the value of the explicit attribute 'Radius'.
         * 
         * @param value
         */
        virtual void setRadius(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'Radius'.
         * 
         */
        virtual void unsetRadius();
        /**
         * Test if the attribute 'Radius' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRadius() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRightCircularCylinder(Step::Id id, Step::SPFData *args);
        virtual ~IfcRightCircularCylinder();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRightCircularCylinder &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_height;
        /**
         */
        Step::Real m_radius;

    };

}

#endif // IFC2X3_IFCRIGHTCIRCULARCYLINDER_H
