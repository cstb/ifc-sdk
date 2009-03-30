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

#ifndef IFC2X3_IFCPOINTONSURFACE_H
#define IFC2X3_IFCPOINTONSURFACE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcPoint.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcSurface;

    /**
     * Generated class for the IfcPointOnSurface Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcPointOnSurface : public IfcPoint {
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
         * Gets the value of the explicit attribute 'BasisSurface'.
         * 
         */
        virtual IfcSurface *getBasisSurface();
        /**
         * (const) Returns the value of the explicit attribute 'BasisSurface'.
         * 
         * @return the value of the explicit attribute 'BasisSurface'
         */
        virtual const IfcSurface *getBasisSurface() const;
        /**
         * Sets the value of the explicit attribute 'BasisSurface'.
         * 
         * @param value
         */
        virtual void setBasisSurface(const Step::RefPtr< IfcSurface > &value);
        /**
         * unset the attribute 'BasisSurface'.
         * 
         */
        virtual void unsetBasisSurface();
        /**
         * Test if the attribute 'BasisSurface' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testBasisSurface() const;
        /**
         * Gets the value of the explicit attribute 'PointParameterU'.
         * 
         */
        virtual IfcParameterValue getPointParameterU();
        /**
         * (const) Returns the value of the explicit attribute 'PointParameterU'.
         * 
         * @return the value of the explicit attribute 'PointParameterU'
         */
        virtual const IfcParameterValue getPointParameterU() const;
        /**
         * Sets the value of the explicit attribute 'PointParameterU'.
         * 
         * @param value
         */
        virtual void setPointParameterU(IfcParameterValue value);
        /**
         * unset the attribute 'PointParameterU'.
         * 
         */
        virtual void unsetPointParameterU();
        /**
         * Test if the attribute 'PointParameterU' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPointParameterU() const;
        /**
         * Gets the value of the explicit attribute 'PointParameterV'.
         * 
         */
        virtual IfcParameterValue getPointParameterV();
        /**
         * (const) Returns the value of the explicit attribute 'PointParameterV'.
         * 
         * @return the value of the explicit attribute 'PointParameterV'
         */
        virtual const IfcParameterValue getPointParameterV() const;
        /**
         * Sets the value of the explicit attribute 'PointParameterV'.
         * 
         * @param value
         */
        virtual void setPointParameterV(IfcParameterValue value);
        /**
         * unset the attribute 'PointParameterV'.
         * 
         */
        virtual void unsetPointParameterV();
        /**
         * Test if the attribute 'PointParameterV' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPointParameterV() const;
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
        IfcPointOnSurface(Step::Id id, Step::SPFData *args);
        virtual ~IfcPointOnSurface();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPointOnSurface &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcSurface > m_basisSurface;
        /**
         */
        Step::Real m_pointParameterU;
        /**
         */
        Step::Real m_pointParameterV;

    };

}

#endif // IFC2X3_IFCPOINTONSURFACE_H
