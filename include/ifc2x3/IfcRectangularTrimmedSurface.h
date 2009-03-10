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

#ifndef IFC2X3_IFCRECTANGULARTRIMMEDSURFACE_H
#define IFC2X3_IFCRECTANGULARTRIMMEDSURFACE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcBoundedSurface.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcSurface;

    /**
     */
    class IFC2X3_DLL_DEF IfcRectangularTrimmedSurface : public IfcBoundedSurface {
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
         * Gets the value of the explicit attribute 'U1'.
         * 
         */
        virtual IfcParameterValue getU1();
        /**
         * (const) Returns the value of the explicit attribute 'U1'.
         * 
         * @return the value of the explicit attribute 'U1'
         */
        virtual const IfcParameterValue getU1() const;
        /**
         * Sets the value of the explicit attribute 'U1'.
         * 
         * @param value
         */
        virtual void setU1(IfcParameterValue value);
        /**
         * Gets the value of the explicit attribute 'V1'.
         * 
         */
        virtual IfcParameterValue getV1();
        /**
         * (const) Returns the value of the explicit attribute 'V1'.
         * 
         * @return the value of the explicit attribute 'V1'
         */
        virtual const IfcParameterValue getV1() const;
        /**
         * Sets the value of the explicit attribute 'V1'.
         * 
         * @param value
         */
        virtual void setV1(IfcParameterValue value);
        /**
         * Gets the value of the explicit attribute 'U2'.
         * 
         */
        virtual IfcParameterValue getU2();
        /**
         * (const) Returns the value of the explicit attribute 'U2'.
         * 
         * @return the value of the explicit attribute 'U2'
         */
        virtual const IfcParameterValue getU2() const;
        /**
         * Sets the value of the explicit attribute 'U2'.
         * 
         * @param value
         */
        virtual void setU2(IfcParameterValue value);
        /**
         * Gets the value of the explicit attribute 'V2'.
         * 
         */
        virtual IfcParameterValue getV2();
        /**
         * (const) Returns the value of the explicit attribute 'V2'.
         * 
         * @return the value of the explicit attribute 'V2'
         */
        virtual const IfcParameterValue getV2() const;
        /**
         * Sets the value of the explicit attribute 'V2'.
         * 
         * @param value
         */
        virtual void setV2(IfcParameterValue value);
        /**
         * Gets the value of the explicit attribute 'Usense'.
         * 
         */
        virtual Step::Boolean getUsense();
        /**
         * (const) Returns the value of the explicit attribute 'Usense'.
         * 
         * @return the value of the explicit attribute 'Usense'
         */
        virtual const Step::Boolean getUsense() const;
        /**
         * Sets the value of the explicit attribute 'Usense'.
         * 
         * @param value
         */
        virtual void setUsense(Step::Boolean value);
        /**
         * Gets the value of the explicit attribute 'Vsense'.
         * 
         */
        virtual Step::Boolean getVsense();
        /**
         * (const) Returns the value of the explicit attribute 'Vsense'.
         * 
         * @return the value of the explicit attribute 'Vsense'
         */
        virtual const Step::Boolean getVsense() const;
        /**
         * Sets the value of the explicit attribute 'Vsense'.
         * 
         * @param value
         */
        virtual void setVsense(Step::Boolean value);
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
        IfcRectangularTrimmedSurface(Step::Id id, Step::SPFData *args);
        virtual ~IfcRectangularTrimmedSurface();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRectangularTrimmedSurface &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcSurface > m_basisSurface;
        /**
         */
        Step::Real m_u1;
        /**
         */
        Step::Real m_v1;
        /**
         */
        Step::Real m_u2;
        /**
         */
        Step::Real m_v2;
        /**
         */
        Step::Boolean m_usense;
        /**
         */
        Step::Boolean m_vsense;

    };

}

#endif // IFC2X3_IFCRECTANGULARTRIMMEDSURFACE_H
