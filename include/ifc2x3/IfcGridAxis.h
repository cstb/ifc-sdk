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

#ifndef IFC2X3_IFCGRIDAXIS_H
#define IFC2X3_IFCGRIDAXIS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/String.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCurve;

    /**
     */
    class IFC2X3_DLL_DEF IfcGridAxis : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'AxisTag'.
         * 
         */
        virtual IfcLabel getAxisTag();
        /**
         * (const) Returns the value of the explicit attribute 'AxisTag'.
         * 
         * @return the value of the explicit attribute 'AxisTag'
         */
        virtual const IfcLabel getAxisTag() const;
        /**
         * Sets the value of the explicit attribute 'AxisTag'.
         * 
         * @param value
         */
        virtual void setAxisTag(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'AxisCurve'.
         * 
         */
        virtual IfcCurve *getAxisCurve();
        /**
         * (const) Returns the value of the explicit attribute 'AxisCurve'.
         * 
         * @return the value of the explicit attribute 'AxisCurve'
         */
        virtual const IfcCurve *getAxisCurve() const;
        /**
         * Sets the value of the explicit attribute 'AxisCurve'.
         * 
         * @param value
         */
        virtual void setAxisCurve(const Step::RefPtr< IfcCurve > &value);
        /**
         * Gets the value of the explicit attribute 'SameSense'.
         * 
         */
        virtual IfcBoolean getSameSense();
        /**
         * (const) Returns the value of the explicit attribute 'SameSense'.
         * 
         * @return the value of the explicit attribute 'SameSense'
         */
        virtual const IfcBoolean getSameSense() const;
        /**
         * Sets the value of the explicit attribute 'SameSense'.
         * 
         * @param value
         */
        virtual void setSameSense(IfcBoolean value);
        /**
         * Gets the value of the inverse attribute 'PartOfW'.
         * 
         */
        Inverse_Set_IfcGrid_0_1 &getPartOfW();
        /**
         * (const) Returns the value of the explicit attribute 'PartOfW'.
         * 
         * @return the value of the explicit attribute 'PartOfW'
         */
        virtual const Inverse_Set_IfcGrid_0_1 &getPartOfW() const;
        /**
         * Gets the value of the inverse attribute 'PartOfV'.
         * 
         */
        Inverse_Set_IfcGrid_0_1 &getPartOfV();
        /**
         * (const) Returns the value of the explicit attribute 'PartOfV'.
         * 
         * @return the value of the explicit attribute 'PartOfV'
         */
        virtual const Inverse_Set_IfcGrid_0_1 &getPartOfV() const;
        /**
         * Gets the value of the inverse attribute 'PartOfU'.
         * 
         */
        Inverse_Set_IfcGrid_0_1 &getPartOfU();
        /**
         * (const) Returns the value of the explicit attribute 'PartOfU'.
         * 
         * @return the value of the explicit attribute 'PartOfU'
         */
        virtual const Inverse_Set_IfcGrid_0_1 &getPartOfU() const;
        /**
         * Gets the value of the inverse attribute 'HasIntersections'.
         * 
         */
        Inverse_Set_IfcVirtualGridIntersection_0_n &getHasIntersections();
        /**
         * (const) Returns the value of the explicit attribute 'HasIntersections'.
         * 
         * @return the value of the explicit attribute 'HasIntersections'
         */
        virtual const Inverse_Set_IfcVirtualGridIntersection_0_n &getHasIntersections() const;
        friend class Inverted_IfcGrid_UAxes_type;
        friend class IfcVirtualGridIntersection;
        friend class IfcGrid;
        friend class ExpressDataSet;
        friend class Inverted_IfcVirtualGridIntersection_IntersectingAxes_type;
        friend class Inverted_IfcGrid_WAxes_type;
        friend class Inverted_IfcGrid_VAxes_type;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcGridAxis(Step::Id id, Step::SPFData *args);
        virtual ~IfcGridAxis();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcGridAxis &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_axisTag;
        /**
         */
        Step::RefPtr< IfcCurve > m_axisCurve;
        /**
         */
        Step::Boolean m_sameSense;
        /**
         */
        Inverse_Set_IfcGrid_0_1 m_partOfW;
        /**
         */
        Inverse_Set_IfcGrid_0_1 m_partOfV;
        /**
         */
        Inverse_Set_IfcGrid_0_1 m_partOfU;
        /**
         */
        Inverse_Set_IfcVirtualGridIntersection_0_n m_hasIntersections;

    };

}

#endif // IFC2X3_IFCGRIDAXIS_H
