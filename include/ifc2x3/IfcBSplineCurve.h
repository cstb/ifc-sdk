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

#ifndef IFC2X3_IFCBSPLINECURVE_H
#define IFC2X3_IFCBSPLINECURVE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcBoundedCurve.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcBSplineCurve Entity.
     * 
     */
    class IFC2X3_EXPORT IfcBSplineCurve : public IfcBoundedCurve {
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
         * Gets the value of the explicit attribute 'Degree'.
         * 
         */
        virtual Step::Integer getDegree();
        /**
         * (const) Returns the value of the explicit attribute 'Degree'.
         * 
         * @return the value of the explicit attribute 'Degree'
         */
        virtual const Step::Integer getDegree() const;
        /**
         * Sets the value of the explicit attribute 'Degree'.
         * 
         * @param value
         */
        virtual void setDegree(Step::Integer value);
        /**
         * unset the attribute 'Degree'.
         * 
         */
        virtual void unsetDegree();
        /**
         * Test if the attribute 'Degree' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDegree() const;
        /**
         * Gets the value of the explicit attribute 'ControlPointsList'.
         * 
         */
        virtual List_IfcCartesianPoint_2_n &getControlPointsList();
        /**
         * (const) Returns the value of the explicit attribute 'ControlPointsList'.
         * 
         * @return the value of the explicit attribute 'ControlPointsList'
         */
        virtual const List_IfcCartesianPoint_2_n &getControlPointsList() const;
        /**
         * Sets the value of the explicit attribute 'ControlPointsList'.
         * 
         * @param value
         */
        virtual void setControlPointsList(const List_IfcCartesianPoint_2_n &value);
        /**
         * unset the attribute 'ControlPointsList'.
         * 
         */
        virtual void unsetControlPointsList();
        /**
         * Test if the attribute 'ControlPointsList' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testControlPointsList() const;
        /**
         * Gets the value of the explicit attribute 'CurveForm'.
         * 
         */
        virtual IfcBSplineCurveForm getCurveForm();
        /**
         * (const) Returns the value of the explicit attribute 'CurveForm'.
         * 
         * @return the value of the explicit attribute 'CurveForm'
         */
        virtual const IfcBSplineCurveForm getCurveForm() const;
        /**
         * Sets the value of the explicit attribute 'CurveForm'.
         * 
         * @param value
         */
        virtual void setCurveForm(IfcBSplineCurveForm value);
        /**
         * unset the attribute 'CurveForm'.
         * 
         */
        virtual void unsetCurveForm();
        /**
         * Test if the attribute 'CurveForm' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCurveForm() const;
        /**
         * Gets the value of the explicit attribute 'ClosedCurve'.
         * 
         */
        virtual Step::Logical getClosedCurve();
        /**
         * (const) Returns the value of the explicit attribute 'ClosedCurve'.
         * 
         * @return the value of the explicit attribute 'ClosedCurve'
         */
        virtual const Step::Logical getClosedCurve() const;
        /**
         * Sets the value of the explicit attribute 'ClosedCurve'.
         * 
         * @param value
         */
        virtual void setClosedCurve(Step::Logical value);
        /**
         * unset the attribute 'ClosedCurve'.
         * 
         */
        virtual void unsetClosedCurve();
        /**
         * Test if the attribute 'ClosedCurve' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testClosedCurve() const;
        /**
         * Gets the value of the explicit attribute 'SelfIntersect'.
         * 
         */
        virtual Step::Logical getSelfIntersect();
        /**
         * (const) Returns the value of the explicit attribute 'SelfIntersect'.
         * 
         * @return the value of the explicit attribute 'SelfIntersect'
         */
        virtual const Step::Logical getSelfIntersect() const;
        /**
         * Sets the value of the explicit attribute 'SelfIntersect'.
         * 
         * @param value
         */
        virtual void setSelfIntersect(Step::Logical value);
        /**
         * unset the attribute 'SelfIntersect'.
         * 
         */
        virtual void unsetSelfIntersect();
        /**
         * Test if the attribute 'SelfIntersect' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSelfIntersect() const;
        /**
         * Gets the value of the derived attribute 'ControlPoints'.
         * 
         */
        virtual Array_IfcCartesianPoint_0_255 getControlPoints() const;
        /**
         * Gets the value of the derived attribute 'UpperIndexOnControlPoints'.
         * 
         */
        virtual Step::Integer getUpperIndexOnControlPoints() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcBSplineCurve(Step::Id id, Step::SPFData *args);
        virtual ~IfcBSplineCurve();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcBSplineCurve &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Integer m_degree;
        /**
         */
        List_IfcCartesianPoint_2_n m_controlPointsList;
        /**
         */
        IfcBSplineCurveForm m_curveForm;
        /**
         */
        Step::Logical m_closedCurve;
        /**
         */
        Step::Logical m_selfIntersect;

    };

}

#endif // IFC2X3_IFCBSPLINECURVE_H
