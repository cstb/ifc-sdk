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

#ifndef IFC2X3_IFCCOMPOSITECURVESEGMENT_H
#define IFC2X3_IFCCOMPOSITECURVESEGMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcCurve;

    /**
     * Generated class for the IfcCompositeCurveSegment Entity.
     * 
     */
    class IFC2X3_EXPORT IfcCompositeCurveSegment : public IfcGeometricRepresentationItem {
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
         * Gets the value of the explicit attribute 'Transition'.
         * 
         */
        virtual IfcTransitionCode getTransition();
        /**
         * (const) Returns the value of the explicit attribute 'Transition'.
         * 
         * @return the value of the explicit attribute 'Transition'
         */
        virtual const IfcTransitionCode getTransition() const;
        /**
         * Sets the value of the explicit attribute 'Transition'.
         * 
         * @param value
         */
        virtual void setTransition(IfcTransitionCode value);
        /**
         * unset the attribute 'Transition'.
         * 
         */
        virtual void unsetTransition();
        /**
         * Test if the attribute 'Transition' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTransition() const;
        /**
         * Gets the value of the explicit attribute 'SameSense'.
         * 
         */
        virtual Step::Boolean getSameSense();
        /**
         * (const) Returns the value of the explicit attribute 'SameSense'.
         * 
         * @return the value of the explicit attribute 'SameSense'
         */
        virtual const Step::Boolean getSameSense() const;
        /**
         * Sets the value of the explicit attribute 'SameSense'.
         * 
         * @param value
         */
        virtual void setSameSense(Step::Boolean value);
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
         * Gets the value of the explicit attribute 'ParentCurve'.
         * 
         */
        virtual IfcCurve *getParentCurve();
        /**
         * (const) Returns the value of the explicit attribute 'ParentCurve'.
         * 
         * @return the value of the explicit attribute 'ParentCurve'
         */
        virtual const IfcCurve *getParentCurve() const;
        /**
         * Sets the value of the explicit attribute 'ParentCurve'.
         * 
         * @param value
         */
        virtual void setParentCurve(const Step::RefPtr< IfcCurve > &value);
        /**
         * unset the attribute 'ParentCurve'.
         * 
         */
        virtual void unsetParentCurve();
        /**
         * Test if the attribute 'ParentCurve' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testParentCurve() const;
        /**
         * Gets the value of the inverse attribute 'UsingCurves'.
         * 
         */
        virtual Inverse_Set_IfcCompositeCurve_1_n &getUsingCurves();
        /**
         * (const) Returns the value of the explicit attribute 'UsingCurves'.
         * 
         * @return the value of the explicit attribute 'UsingCurves'
         */
        const virtual Inverse_Set_IfcCompositeCurve_1_n &getUsingCurves() const;
        /**
         * Test if the attribute 'UsingCurves' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUsingCurves() const;
        /**
         * Gets the value of the derived attribute 'Dim'.
         * 
         */
        virtual IfcDimensionCount getDim() const;
        friend class ExpressDataSet;
        friend class Inverted_IfcCompositeCurve_Segments_type;
        friend class IfcCompositeCurve;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCompositeCurveSegment(Step::Id id, Step::SPFData *args);
        virtual ~IfcCompositeCurveSegment();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCompositeCurveSegment &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcTransitionCode m_transition;
        /**
         */
        Step::Boolean m_sameSense;
        /**
         */
        Step::RefPtr< IfcCurve > m_parentCurve;
        /**
         */
        Inverse_Set_IfcCompositeCurve_1_n m_usingCurves;

    };

}

#endif // IFC2X3_IFCCOMPOSITECURVESEGMENT_H
