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

#ifndef IFC2X3_IFCRECTANGULARPYRAMID_H
#define IFC2X3_IFCRECTANGULARPYRAMID_H
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
     * Generated class for the IfcRectangularPyramid Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcRectangularPyramid : public IfcCsgPrimitive3D {
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
         * Gets the value of the explicit attribute 'XLength'.
         * 
         */
        virtual IfcPositiveLengthMeasure getXLength();
        /**
         * (const) Returns the value of the explicit attribute 'XLength'.
         * 
         * @return the value of the explicit attribute 'XLength'
         */
        virtual const IfcPositiveLengthMeasure getXLength() const;
        /**
         * Sets the value of the explicit attribute 'XLength'.
         * 
         * @param value
         */
        virtual void setXLength(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'XLength'.
         * 
         */
        virtual void unsetXLength();
        /**
         * Test if the attribute 'XLength' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testXLength() const;
        /**
         * Gets the value of the explicit attribute 'YLength'.
         * 
         */
        virtual IfcPositiveLengthMeasure getYLength();
        /**
         * (const) Returns the value of the explicit attribute 'YLength'.
         * 
         * @return the value of the explicit attribute 'YLength'
         */
        virtual const IfcPositiveLengthMeasure getYLength() const;
        /**
         * Sets the value of the explicit attribute 'YLength'.
         * 
         * @param value
         */
        virtual void setYLength(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'YLength'.
         * 
         */
        virtual void unsetYLength();
        /**
         * Test if the attribute 'YLength' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testYLength() const;
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
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRectangularPyramid(Step::Id id, Step::SPFData *args);
        virtual ~IfcRectangularPyramid();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRectangularPyramid &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_xLength;
        /**
         */
        Step::Real m_yLength;
        /**
         */
        Step::Real m_height;

    };

}

#endif // IFC2X3_IFCRECTANGULARPYRAMID_H
