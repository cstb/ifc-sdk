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

#ifndef IFC2X3_IFCVIRTUALGRIDINTERSECTION_H
#define IFC2X3_IFCVIRTUALGRIDINTERSECTION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <stdexcept>
#include <string>

namespace ifc2x3 {

    class IfcGridAxis;
    class IfcVirtualGridIntersection;

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcVirtualGridIntersection_IntersectingAxes_type : public List_IfcGridAxis_2_2 {
    public:
        /**
         */
        typedef List_IfcGridAxis_2_2::iterator iterator;

        /**
         */
        Inverted_IfcVirtualGridIntersection_IntersectingAxes_type();
        /**
         * Insert a value in the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual void push_back(const Step::RefPtr< IfcGridAxis > &value) throw(std::out_of_range);
        /**
         * Remove a value from the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual iterator erase(const Step::RefPtr< IfcGridAxis > &value);
        /**
         * Remove all values from the aggregate.
         * 
         */
        void clear();
        friend class IfcVirtualGridIntersection;

    protected:
        /**
         * The owner of this inverted aggregate.
         * 
         */
        IfcVirtualGridIntersection *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcVirtualGridIntersection *owner);

    };

    class CopyOp;

    /**
     * Generated class for the IfcVirtualGridIntersection Entity.
     * 
     */
    class IFC2X3_EXPORT IfcVirtualGridIntersection : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'IntersectingAxes'.
         * 
         */
        virtual List_IfcGridAxis_2_2 &getIntersectingAxes();
        /**
         * (const) Returns the value of the explicit attribute 'IntersectingAxes'.
         * 
         * @return the value of the explicit attribute 'IntersectingAxes'
         */
        virtual const List_IfcGridAxis_2_2 &getIntersectingAxes() const;
        /**
         * unset the attribute 'IntersectingAxes'.
         * 
         */
        virtual void unsetIntersectingAxes();
        /**
         * Test if the attribute 'IntersectingAxes' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIntersectingAxes() const;
        /**
         * Gets the value of the explicit attribute 'OffsetDistances'.
         * 
         */
        virtual List_IfcLengthMeasure_2_3 &getOffsetDistances();
        /**
         * (const) Returns the value of the explicit attribute 'OffsetDistances'.
         * 
         * @return the value of the explicit attribute 'OffsetDistances'
         */
        virtual const List_IfcLengthMeasure_2_3 &getOffsetDistances() const;
        /**
         * Sets the value of the explicit attribute 'OffsetDistances'.
         * 
         * @param value
         */
        virtual void setOffsetDistances(const List_IfcLengthMeasure_2_3 &value);
        /**
         * unset the attribute 'OffsetDistances'.
         * 
         */
        virtual void unsetOffsetDistances();
        /**
         * Test if the attribute 'OffsetDistances' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testOffsetDistances() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcVirtualGridIntersection(Step::Id id, Step::SPFData *args);
        virtual ~IfcVirtualGridIntersection();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcVirtualGridIntersection &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverted_IfcVirtualGridIntersection_IntersectingAxes_type m_intersectingAxes;
        /**
         */
        List_IfcLengthMeasure_2_3 m_offsetDistances;

    };

}

#endif // IFC2X3_IFCVIRTUALGRIDINTERSECTION_H
