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

#ifndef IFC2X3_IFCDOOR_H
#define IFC2X3_IFCDOOR_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcBuildingElement.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcDoor : public IfcBuildingElement {
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
         * Gets the value of the explicit attribute 'OverallHeight'.
         * 
         */
        virtual IfcPositiveLengthMeasure getOverallHeight();
        /**
         * (const) Returns the value of the explicit attribute 'OverallHeight'.
         * 
         * @return the value of the explicit attribute 'OverallHeight'
         */
        virtual const IfcPositiveLengthMeasure getOverallHeight() const;
        /**
         * Sets the value of the explicit attribute 'OverallHeight'.
         * 
         * @param value
         */
        virtual void setOverallHeight(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'OverallWidth'.
         * 
         */
        virtual IfcPositiveLengthMeasure getOverallWidth();
        /**
         * (const) Returns the value of the explicit attribute 'OverallWidth'.
         * 
         * @return the value of the explicit attribute 'OverallWidth'
         */
        virtual const IfcPositiveLengthMeasure getOverallWidth() const;
        /**
         * Sets the value of the explicit attribute 'OverallWidth'.
         * 
         * @param value
         */
        virtual void setOverallWidth(IfcPositiveLengthMeasure value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcDoor(Step::Id id, Step::SPFData *args);
        virtual ~IfcDoor();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDoor &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_overallHeight;
        /**
         */
        Step::Real m_overallWidth;

    };

}

#endif // IFC2X3_IFCDOOR_H
