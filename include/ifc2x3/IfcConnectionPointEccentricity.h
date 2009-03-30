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

#ifndef IFC2X3_IFCCONNECTIONPOINTECCENTRICITY_H
#define IFC2X3_IFCCONNECTIONPOINTECCENTRICITY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcConnectionPointGeometry.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcConnectionPointEccentricity Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcConnectionPointEccentricity : public IfcConnectionPointGeometry {
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
         * Gets the value of the explicit attribute 'EccentricityInX'.
         * 
         */
        virtual IfcLengthMeasure getEccentricityInX();
        /**
         * (const) Returns the value of the explicit attribute 'EccentricityInX'.
         * 
         * @return the value of the explicit attribute 'EccentricityInX'
         */
        virtual const IfcLengthMeasure getEccentricityInX() const;
        /**
         * Sets the value of the explicit attribute 'EccentricityInX'.
         * 
         * @param value
         */
        virtual void setEccentricityInX(IfcLengthMeasure value);
        /**
         * unset the attribute 'EccentricityInX'.
         * 
         */
        virtual void unsetEccentricityInX();
        /**
         * Test if the attribute 'EccentricityInX' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testEccentricityInX() const;
        /**
         * Gets the value of the explicit attribute 'EccentricityInY'.
         * 
         */
        virtual IfcLengthMeasure getEccentricityInY();
        /**
         * (const) Returns the value of the explicit attribute 'EccentricityInY'.
         * 
         * @return the value of the explicit attribute 'EccentricityInY'
         */
        virtual const IfcLengthMeasure getEccentricityInY() const;
        /**
         * Sets the value of the explicit attribute 'EccentricityInY'.
         * 
         * @param value
         */
        virtual void setEccentricityInY(IfcLengthMeasure value);
        /**
         * unset the attribute 'EccentricityInY'.
         * 
         */
        virtual void unsetEccentricityInY();
        /**
         * Test if the attribute 'EccentricityInY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testEccentricityInY() const;
        /**
         * Gets the value of the explicit attribute 'EccentricityInZ'.
         * 
         */
        virtual IfcLengthMeasure getEccentricityInZ();
        /**
         * (const) Returns the value of the explicit attribute 'EccentricityInZ'.
         * 
         * @return the value of the explicit attribute 'EccentricityInZ'
         */
        virtual const IfcLengthMeasure getEccentricityInZ() const;
        /**
         * Sets the value of the explicit attribute 'EccentricityInZ'.
         * 
         * @param value
         */
        virtual void setEccentricityInZ(IfcLengthMeasure value);
        /**
         * unset the attribute 'EccentricityInZ'.
         * 
         */
        virtual void unsetEccentricityInZ();
        /**
         * Test if the attribute 'EccentricityInZ' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testEccentricityInZ() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcConnectionPointEccentricity(Step::Id id, Step::SPFData *args);
        virtual ~IfcConnectionPointEccentricity();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcConnectionPointEccentricity &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_eccentricityInX;
        /**
         */
        Step::Real m_eccentricityInY;
        /**
         */
        Step::Real m_eccentricityInZ;

    };

}

#endif // IFC2X3_IFCCONNECTIONPOINTECCENTRICITY_H
