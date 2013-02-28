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

#ifndef IFC2X3_IFCCOMPOSITECURVE_H
#define IFC2X3_IFCCOMPOSITECURVE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcBoundedCurve.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <stdexcept>
#include <string>

namespace ifc2x3 {

    class IfcCompositeCurve;
    class IfcCompositeCurveSegment;

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcCompositeCurve_Segments_type : public List_IfcCompositeCurveSegment_1_n {
    public:
        /**
         */
        typedef List_IfcCompositeCurveSegment_1_n::iterator iterator;

        /**
         */
        Inverted_IfcCompositeCurve_Segments_type();
        /**
         * Insert a value in the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual void push_back(const Step::RefPtr< IfcCompositeCurveSegment > &value) throw(std::out_of_range);
        /**
         * Remove a value from the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual iterator erase(const Step::RefPtr< IfcCompositeCurveSegment > &value);
        /**
         * Remove all values from the aggregate.
         * 
         */
        void clear();
        friend class IfcCompositeCurve;

    protected:
        /**
         * The owner of this inverted aggregate.
         * 
         */
        IfcCompositeCurve *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcCompositeCurve *owner);

    };

    class CopyOp;

    /**
     * Generated class for the IfcCompositeCurve Entity.
     * 
     */
    class IFC2X3_EXPORT IfcCompositeCurve : public IfcBoundedCurve {
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
         * Gets the value of the explicit attribute 'Segments'.
         * 
         */
        virtual List_IfcCompositeCurveSegment_1_n &getSegments();
        /**
         * (const) Returns the value of the explicit attribute 'Segments'.
         * 
         * @return the value of the explicit attribute 'Segments'
         */
        virtual const List_IfcCompositeCurveSegment_1_n &getSegments() const;
        /**
         * unset the attribute 'Segments'.
         * 
         */
        virtual void unsetSegments();
        /**
         * Test if the attribute 'Segments' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSegments() const;
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
         * Gets the value of the derived attribute 'NSegments'.
         * 
         */
        virtual Step::Integer getNSegments() const;
        /**
         * Gets the value of the derived attribute 'ClosedCurve'.
         * 
         */
        virtual Step::Logical getClosedCurve() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCompositeCurve(Step::Id id, Step::SPFData *args);
        virtual ~IfcCompositeCurve();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCompositeCurve &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverted_IfcCompositeCurve_Segments_type m_segments;
        /**
         */
        Step::Logical m_selfIntersect;

    };

}

#endif // IFC2X3_IFCCOMPOSITECURVE_H
