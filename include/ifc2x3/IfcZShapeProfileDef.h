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

#ifndef IFC2X3_IFCZSHAPEPROFILEDEF_H
#define IFC2X3_IFCZSHAPEPROFILEDEF_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcParameterizedProfileDef.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcZShapeProfileDef : public IfcParameterizedProfileDef {
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
         * Gets the value of the explicit attribute 'Depth'.
         * 
         */
        virtual IfcPositiveLengthMeasure getDepth();
        /**
         * (const) Returns the value of the explicit attribute 'Depth'.
         * 
         * @return the value of the explicit attribute 'Depth'
         */
        virtual const IfcPositiveLengthMeasure getDepth() const;
        /**
         * Sets the value of the explicit attribute 'Depth'.
         * 
         * @param value
         */
        virtual void setDepth(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'FlangeWidth'.
         * 
         */
        virtual IfcPositiveLengthMeasure getFlangeWidth();
        /**
         * (const) Returns the value of the explicit attribute 'FlangeWidth'.
         * 
         * @return the value of the explicit attribute 'FlangeWidth'
         */
        virtual const IfcPositiveLengthMeasure getFlangeWidth() const;
        /**
         * Sets the value of the explicit attribute 'FlangeWidth'.
         * 
         * @param value
         */
        virtual void setFlangeWidth(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'WebThickness'.
         * 
         */
        virtual IfcPositiveLengthMeasure getWebThickness();
        /**
         * (const) Returns the value of the explicit attribute 'WebThickness'.
         * 
         * @return the value of the explicit attribute 'WebThickness'
         */
        virtual const IfcPositiveLengthMeasure getWebThickness() const;
        /**
         * Sets the value of the explicit attribute 'WebThickness'.
         * 
         * @param value
         */
        virtual void setWebThickness(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'FlangeThickness'.
         * 
         */
        virtual IfcPositiveLengthMeasure getFlangeThickness();
        /**
         * (const) Returns the value of the explicit attribute 'FlangeThickness'.
         * 
         * @return the value of the explicit attribute 'FlangeThickness'
         */
        virtual const IfcPositiveLengthMeasure getFlangeThickness() const;
        /**
         * Sets the value of the explicit attribute 'FlangeThickness'.
         * 
         * @param value
         */
        virtual void setFlangeThickness(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'FilletRadius'.
         * 
         */
        virtual IfcPositiveLengthMeasure getFilletRadius();
        /**
         * (const) Returns the value of the explicit attribute 'FilletRadius'.
         * 
         * @return the value of the explicit attribute 'FilletRadius'
         */
        virtual const IfcPositiveLengthMeasure getFilletRadius() const;
        /**
         * Sets the value of the explicit attribute 'FilletRadius'.
         * 
         * @param value
         */
        virtual void setFilletRadius(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'EdgeRadius'.
         * 
         */
        virtual IfcPositiveLengthMeasure getEdgeRadius();
        /**
         * (const) Returns the value of the explicit attribute 'EdgeRadius'.
         * 
         * @return the value of the explicit attribute 'EdgeRadius'
         */
        virtual const IfcPositiveLengthMeasure getEdgeRadius() const;
        /**
         * Sets the value of the explicit attribute 'EdgeRadius'.
         * 
         * @param value
         */
        virtual void setEdgeRadius(IfcPositiveLengthMeasure value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcZShapeProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcZShapeProfileDef();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcZShapeProfileDef &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_depth;
        /**
         */
        Step::Real m_flangeWidth;
        /**
         */
        Step::Real m_webThickness;
        /**
         */
        Step::Real m_flangeThickness;
        /**
         */
        Step::Real m_filletRadius;
        /**
         */
        Step::Real m_edgeRadius;

    };

}

#endif // IFC2X3_IFCZSHAPEPROFILEDEF_H
