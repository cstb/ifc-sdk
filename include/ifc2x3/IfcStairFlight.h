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

#ifndef IFC2X3_IFCSTAIRFLIGHT_H
#define IFC2X3_IFCSTAIRFLIGHT_H
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
    class IFC2X3_DLL_DEF IfcStairFlight : public IfcBuildingElement {
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
         * Gets the value of the explicit attribute 'NumberOfRiser'.
         * 
         */
        virtual Step::Integer getNumberOfRiser();
        /**
         * (const) Returns the value of the explicit attribute 'NumberOfRiser'.
         * 
         * @return the value of the explicit attribute 'NumberOfRiser'
         */
        virtual const Step::Integer getNumberOfRiser() const;
        /**
         * Sets the value of the explicit attribute 'NumberOfRiser'.
         * 
         * @param value
         */
        virtual void setNumberOfRiser(Step::Integer value);
        /**
         * Gets the value of the explicit attribute 'NumberOfTreads'.
         * 
         */
        virtual Step::Integer getNumberOfTreads();
        /**
         * (const) Returns the value of the explicit attribute 'NumberOfTreads'.
         * 
         * @return the value of the explicit attribute 'NumberOfTreads'
         */
        virtual const Step::Integer getNumberOfTreads() const;
        /**
         * Sets the value of the explicit attribute 'NumberOfTreads'.
         * 
         * @param value
         */
        virtual void setNumberOfTreads(Step::Integer value);
        /**
         * Gets the value of the explicit attribute 'RiserHeight'.
         * 
         */
        virtual IfcPositiveLengthMeasure getRiserHeight();
        /**
         * (const) Returns the value of the explicit attribute 'RiserHeight'.
         * 
         * @return the value of the explicit attribute 'RiserHeight'
         */
        virtual const IfcPositiveLengthMeasure getRiserHeight() const;
        /**
         * Sets the value of the explicit attribute 'RiserHeight'.
         * 
         * @param value
         */
        virtual void setRiserHeight(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'TreadLength'.
         * 
         */
        virtual IfcPositiveLengthMeasure getTreadLength();
        /**
         * (const) Returns the value of the explicit attribute 'TreadLength'.
         * 
         * @return the value of the explicit attribute 'TreadLength'
         */
        virtual const IfcPositiveLengthMeasure getTreadLength() const;
        /**
         * Sets the value of the explicit attribute 'TreadLength'.
         * 
         * @param value
         */
        virtual void setTreadLength(IfcPositiveLengthMeasure value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStairFlight(Step::Id id, Step::SPFData *args);
        virtual ~IfcStairFlight();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStairFlight &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Integer m_numberOfRiser;
        /**
         */
        Step::Integer m_numberOfTreads;
        /**
         */
        Step::Real m_riserHeight;
        /**
         */
        Step::Real m_treadLength;

    };

}

#endif // IFC2X3_IFCSTAIRFLIGHT_H
