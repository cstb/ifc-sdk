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

#ifndef IFC2X3_IFCMECHANICALFASTENER_H
#define IFC2X3_IFCMECHANICALFASTENER_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcFastener.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcMechanicalFastener Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcMechanicalFastener : public IfcFastener {
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
         * Gets the value of the explicit attribute 'NominalDiameter'.
         * 
         */
        virtual IfcPositiveLengthMeasure getNominalDiameter();
        /**
         * (const) Returns the value of the explicit attribute 'NominalDiameter'.
         * 
         * @return the value of the explicit attribute 'NominalDiameter'
         */
        virtual const IfcPositiveLengthMeasure getNominalDiameter() const;
        /**
         * Sets the value of the explicit attribute 'NominalDiameter'.
         * 
         * @param value
         */
        virtual void setNominalDiameter(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'NominalDiameter'.
         * 
         */
        virtual void unsetNominalDiameter();
        /**
         * Test if the attribute 'NominalDiameter' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testNominalDiameter() const;
        /**
         * Gets the value of the explicit attribute 'NominalLength'.
         * 
         */
        virtual IfcPositiveLengthMeasure getNominalLength();
        /**
         * (const) Returns the value of the explicit attribute 'NominalLength'.
         * 
         * @return the value of the explicit attribute 'NominalLength'
         */
        virtual const IfcPositiveLengthMeasure getNominalLength() const;
        /**
         * Sets the value of the explicit attribute 'NominalLength'.
         * 
         * @param value
         */
        virtual void setNominalLength(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'NominalLength'.
         * 
         */
        virtual void unsetNominalLength();
        /**
         * Test if the attribute 'NominalLength' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testNominalLength() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcMechanicalFastener(Step::Id id, Step::SPFData *args);
        virtual ~IfcMechanicalFastener();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMechanicalFastener &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_nominalDiameter;
        /**
         */
        Step::Real m_nominalLength;

    };

}

#endif // IFC2X3_IFCMECHANICALFASTENER_H
