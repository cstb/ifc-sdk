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

#ifndef IFC2X3_IFCVECTOR_H
#define IFC2X3_IFCVECTOR_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcDirection;

    /**
     * Generated class for the IfcVector Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcVector : public IfcGeometricRepresentationItem {
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
         * Gets the value of the explicit attribute 'Orientation'.
         * 
         */
        virtual IfcDirection *getOrientation();
        /**
         * (const) Returns the value of the explicit attribute 'Orientation'.
         * 
         * @return the value of the explicit attribute 'Orientation'
         */
        virtual const IfcDirection *getOrientation() const;
        /**
         * Sets the value of the explicit attribute 'Orientation'.
         * 
         * @param value
         */
        virtual void setOrientation(const Step::RefPtr< IfcDirection > &value);
        /**
         * unset the attribute 'Orientation'.
         * 
         */
        virtual void unsetOrientation();
        /**
         * Test if the attribute 'Orientation' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testOrientation() const;
        /**
         * Gets the value of the explicit attribute 'Magnitude'.
         * 
         */
        virtual IfcLengthMeasure getMagnitude();
        /**
         * (const) Returns the value of the explicit attribute 'Magnitude'.
         * 
         * @return the value of the explicit attribute 'Magnitude'
         */
        virtual const IfcLengthMeasure getMagnitude() const;
        /**
         * Sets the value of the explicit attribute 'Magnitude'.
         * 
         * @param value
         */
        virtual void setMagnitude(IfcLengthMeasure value);
        /**
         * unset the attribute 'Magnitude'.
         * 
         */
        virtual void unsetMagnitude();
        /**
         * Test if the attribute 'Magnitude' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMagnitude() const;
        /**
         * Gets the value of the derived attribute 'Dim'.
         * 
         */
        virtual IfcDimensionCount getDim() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcVector(Step::Id id, Step::SPFData *args);
        virtual ~IfcVector();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcVector &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcDirection > m_orientation;
        /**
         */
        Step::Real m_magnitude;

    };

}

#endif // IFC2X3_IFCVECTOR_H
