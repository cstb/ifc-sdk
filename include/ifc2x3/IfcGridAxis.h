// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

#ifndef IFC2X3_IFCGRIDAXIS_H
#define IFC2X3_IFCGRIDAXIS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcCurve;

    /**
     * Generated class for the IfcGridAxis Entity.
     * 
     */
    class IFC2X3_EXPORT IfcGridAxis : public Step::BaseEntity {
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
         * unset the attribute 'AxisTag'.
         * 
         */
        virtual void unsetAxisTag();
        /**
         * Test if the attribute 'AxisTag' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testAxisTag() const;
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
         * unset the attribute 'AxisCurve'.
         * 
         */
        virtual void unsetAxisCurve();
        /**
         * Test if the attribute 'AxisCurve' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testAxisCurve() const;
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
         * unset the attribute 'SameSense'.
         * 
         */
        virtual void unsetSameSense();
        /**
         * Test if the attribute 'SameSense' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSameSense() const;
        /**
         * Gets the value of the inverse attribute 'PartOfW'.
         * 
         */
        virtual Inverse_Set_IfcGrid_0_1 &getPartOfW();
        /**
         * (const) Returns the value of the explicit attribute 'PartOfW'.
         * 
         * @return the value of the explicit attribute 'PartOfW'
         */
        const virtual Inverse_Set_IfcGrid_0_1 &getPartOfW() const;
        /**
         * Test if the attribute 'PartOfW' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPartOfW() const;
        /**
         * Gets the value of the inverse attribute 'PartOfV'.
         * 
         */
        virtual Inverse_Set_IfcGrid_0_1 &getPartOfV();
        /**
         * (const) Returns the value of the explicit attribute 'PartOfV'.
         * 
         * @return the value of the explicit attribute 'PartOfV'
         */
        const virtual Inverse_Set_IfcGrid_0_1 &getPartOfV() const;
        /**
         * Test if the attribute 'PartOfV' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPartOfV() const;
        /**
         * Gets the value of the inverse attribute 'PartOfU'.
         * 
         */
        virtual Inverse_Set_IfcGrid_0_1 &getPartOfU();
        /**
         * (const) Returns the value of the explicit attribute 'PartOfU'.
         * 
         * @return the value of the explicit attribute 'PartOfU'
         */
        const virtual Inverse_Set_IfcGrid_0_1 &getPartOfU() const;
        /**
         * Test if the attribute 'PartOfU' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPartOfU() const;
        /**
         * Gets the value of the inverse attribute 'HasIntersections'.
         * 
         */
        virtual Inverse_Set_IfcVirtualGridIntersection_0_n &getHasIntersections();
        /**
         * (const) Returns the value of the explicit attribute 'HasIntersections'.
         * 
         * @return the value of the explicit attribute 'HasIntersections'
         */
        const virtual Inverse_Set_IfcVirtualGridIntersection_0_n &getHasIntersections() const;
        /**
         * Test if the attribute 'HasIntersections' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHasIntersections() const;
        friend class IfcVirtualGridIntersection;
        friend class Inverted_IfcGrid_WAxes_type;
        friend class Inverted_IfcGrid_UAxes_type;
        friend class ExpressDataSet;
        friend class Inverted_IfcVirtualGridIntersection_IntersectingAxes_type;
        friend class IfcGrid;
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
