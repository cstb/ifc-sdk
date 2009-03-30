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

#ifndef IFC2X3_IFCASYMMETRICISHAPEPROFILEDEF_H
#define IFC2X3_IFCASYMMETRICISHAPEPROFILEDEF_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcIShapeProfileDef.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcAsymmetricIShapeProfileDef Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcAsymmetricIShapeProfileDef : public IfcIShapeProfileDef {
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
         * Gets the value of the explicit attribute 'TopFlangeWidth'.
         * 
         */
        virtual IfcPositiveLengthMeasure getTopFlangeWidth();
        /**
         * (const) Returns the value of the explicit attribute 'TopFlangeWidth'.
         * 
         * @return the value of the explicit attribute 'TopFlangeWidth'
         */
        virtual const IfcPositiveLengthMeasure getTopFlangeWidth() const;
        /**
         * Sets the value of the explicit attribute 'TopFlangeWidth'.
         * 
         * @param value
         */
        virtual void setTopFlangeWidth(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'TopFlangeWidth'.
         * 
         */
        virtual void unsetTopFlangeWidth();
        /**
         * Test if the attribute 'TopFlangeWidth' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTopFlangeWidth() const;
        /**
         * Gets the value of the explicit attribute 'TopFlangeThickness'.
         * 
         */
        virtual IfcPositiveLengthMeasure getTopFlangeThickness();
        /**
         * (const) Returns the value of the explicit attribute 'TopFlangeThickness'.
         * 
         * @return the value of the explicit attribute 'TopFlangeThickness'
         */
        virtual const IfcPositiveLengthMeasure getTopFlangeThickness() const;
        /**
         * Sets the value of the explicit attribute 'TopFlangeThickness'.
         * 
         * @param value
         */
        virtual void setTopFlangeThickness(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'TopFlangeThickness'.
         * 
         */
        virtual void unsetTopFlangeThickness();
        /**
         * Test if the attribute 'TopFlangeThickness' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTopFlangeThickness() const;
        /**
         * Gets the value of the explicit attribute 'TopFlangeFilletRadius'.
         * 
         */
        virtual IfcPositiveLengthMeasure getTopFlangeFilletRadius();
        /**
         * (const) Returns the value of the explicit attribute 'TopFlangeFilletRadius'.
         * 
         * @return the value of the explicit attribute 'TopFlangeFilletRadius'
         */
        virtual const IfcPositiveLengthMeasure getTopFlangeFilletRadius() const;
        /**
         * Sets the value of the explicit attribute 'TopFlangeFilletRadius'.
         * 
         * @param value
         */
        virtual void setTopFlangeFilletRadius(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'TopFlangeFilletRadius'.
         * 
         */
        virtual void unsetTopFlangeFilletRadius();
        /**
         * Test if the attribute 'TopFlangeFilletRadius' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTopFlangeFilletRadius() const;
        /**
         * Gets the value of the explicit attribute 'CentreOfGravityInY'.
         * 
         */
        virtual IfcPositiveLengthMeasure getCentreOfGravityInY();
        /**
         * (const) Returns the value of the explicit attribute 'CentreOfGravityInY'.
         * 
         * @return the value of the explicit attribute 'CentreOfGravityInY'
         */
        virtual const IfcPositiveLengthMeasure getCentreOfGravityInY() const;
        /**
         * Sets the value of the explicit attribute 'CentreOfGravityInY'.
         * 
         * @param value
         */
        virtual void setCentreOfGravityInY(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'CentreOfGravityInY'.
         * 
         */
        virtual void unsetCentreOfGravityInY();
        /**
         * Test if the attribute 'CentreOfGravityInY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCentreOfGravityInY() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcAsymmetricIShapeProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcAsymmetricIShapeProfileDef();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcAsymmetricIShapeProfileDef &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_topFlangeWidth;
        /**
         */
        Step::Real m_topFlangeThickness;
        /**
         */
        Step::Real m_topFlangeFilletRadius;
        /**
         */
        Step::Real m_centreOfGravityInY;

    };

}

#endif // IFC2X3_IFCASYMMETRICISHAPEPROFILEDEF_H
