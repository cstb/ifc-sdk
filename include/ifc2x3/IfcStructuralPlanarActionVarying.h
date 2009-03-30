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

#ifndef IFC2X3_IFCSTRUCTURALPLANARACTIONVARYING_H
#define IFC2X3_IFCSTRUCTURALPLANARACTIONVARYING_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcStructuralPlanarAction.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcShapeAspect;

    /**
     * Generated class for the IfcStructuralPlanarActionVarying Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcStructuralPlanarActionVarying : public IfcStructuralPlanarAction {
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
         * Gets the value of the explicit attribute 'VaryingAppliedLoadLocation'.
         * 
         */
        virtual IfcShapeAspect *getVaryingAppliedLoadLocation();
        /**
         * (const) Returns the value of the explicit attribute 'VaryingAppliedLoadLocation'.
         * 
         * @return the value of the explicit attribute 'VaryingAppliedLoadLocation'
         */
        virtual const IfcShapeAspect *getVaryingAppliedLoadLocation() const;
        /**
         * Sets the value of the explicit attribute 'VaryingAppliedLoadLocation'.
         * 
         * @param value
         */
        virtual void setVaryingAppliedLoadLocation(const Step::RefPtr< IfcShapeAspect > &value);
        /**
         * unset the attribute 'VaryingAppliedLoadLocation'.
         * 
         */
        virtual void unsetVaryingAppliedLoadLocation();
        /**
         * Test if the attribute 'VaryingAppliedLoadLocation' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testVaryingAppliedLoadLocation() const;
        /**
         * Gets the value of the explicit attribute 'SubsequentAppliedLoads'.
         * 
         */
        virtual List_IfcStructuralLoad_2_n &getSubsequentAppliedLoads();
        /**
         * (const) Returns the value of the explicit attribute 'SubsequentAppliedLoads'.
         * 
         * @return the value of the explicit attribute 'SubsequentAppliedLoads'
         */
        virtual const List_IfcStructuralLoad_2_n &getSubsequentAppliedLoads() const;
        /**
         * Sets the value of the explicit attribute 'SubsequentAppliedLoads'.
         * 
         * @param value
         */
        virtual void setSubsequentAppliedLoads(const List_IfcStructuralLoad_2_n &value);
        /**
         * unset the attribute 'SubsequentAppliedLoads'.
         * 
         */
        virtual void unsetSubsequentAppliedLoads();
        /**
         * Test if the attribute 'SubsequentAppliedLoads' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSubsequentAppliedLoads() const;
        /**
         * Gets the value of the derived attribute 'VaryingAppliedLoads'.
         * 
         */
        virtual List_IfcStructuralLoad_3_n getVaryingAppliedLoads() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralPlanarActionVarying(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralPlanarActionVarying();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralPlanarActionVarying &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcShapeAspect > m_varyingAppliedLoadLocation;
        /**
         */
        List_IfcStructuralLoad_2_n m_subsequentAppliedLoads;

    };

}

#endif // IFC2X3_IFCSTRUCTURALPLANARACTIONVARYING_H
