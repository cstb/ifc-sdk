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

#ifndef IFC2X3_IFCCOLOURRGB_H
#define IFC2X3_IFCCOLOURRGB_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcColourSpecification.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcColourRgb : public IfcColourSpecification {
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
         * Gets the value of the explicit attribute 'Red'.
         * 
         */
        virtual IfcNormalisedRatioMeasure getRed();
        /**
         * (const) Returns the value of the explicit attribute 'Red'.
         * 
         * @return the value of the explicit attribute 'Red'
         */
        virtual const IfcNormalisedRatioMeasure getRed() const;
        /**
         * Sets the value of the explicit attribute 'Red'.
         * 
         * @param value
         */
        virtual void setRed(IfcNormalisedRatioMeasure value);
        /**
         * Gets the value of the explicit attribute 'Green'.
         * 
         */
        virtual IfcNormalisedRatioMeasure getGreen();
        /**
         * (const) Returns the value of the explicit attribute 'Green'.
         * 
         * @return the value of the explicit attribute 'Green'
         */
        virtual const IfcNormalisedRatioMeasure getGreen() const;
        /**
         * Sets the value of the explicit attribute 'Green'.
         * 
         * @param value
         */
        virtual void setGreen(IfcNormalisedRatioMeasure value);
        /**
         * Gets the value of the explicit attribute 'Blue'.
         * 
         */
        virtual IfcNormalisedRatioMeasure getBlue();
        /**
         * (const) Returns the value of the explicit attribute 'Blue'.
         * 
         * @return the value of the explicit attribute 'Blue'
         */
        virtual const IfcNormalisedRatioMeasure getBlue() const;
        /**
         * Sets the value of the explicit attribute 'Blue'.
         * 
         * @param value
         */
        virtual void setBlue(IfcNormalisedRatioMeasure value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcColourRgb(Step::Id id, Step::SPFData *args);
        virtual ~IfcColourRgb();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcColourRgb &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_red;
        /**
         */
        Step::Real m_green;
        /**
         */
        Step::Real m_blue;

    };

}

#endif // IFC2X3_IFCCOLOURRGB_H
