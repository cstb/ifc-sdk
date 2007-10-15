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
        Step::Integer getNumberOfRiser();
        /**
         * Sets the value of the explicit attribute 'NumberOfRiser'.
         * 
         * @param value
         */
        void setNumberOfRiser(Step::Integer value);
        /**
         */
        Step::Integer getNumberOfTreads();
        /**
         * Sets the value of the explicit attribute 'NumberOfTreads'.
         * 
         * @param value
         */
        void setNumberOfTreads(Step::Integer value);
        /**
         */
        IfcPositiveLengthMeasure getRiserHeight();
        /**
         * Sets the value of the explicit attribute 'RiserHeight'.
         * 
         * @param value
         */
        void setRiserHeight(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getTreadLength();
        /**
         * Sets the value of the explicit attribute 'TreadLength'.
         * 
         * @param value
         */
        void setTreadLength(IfcPositiveLengthMeasure value);
        /**
         */
        virtual void release();
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
