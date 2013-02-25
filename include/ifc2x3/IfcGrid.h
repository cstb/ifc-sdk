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

#ifndef IFC2X3_IFCGRID_H
#define IFC2X3_IFCGRID_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcProduct.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <stdexcept>
#include <string>

namespace ifc2x3 {

    class IfcGrid;
    class IfcGridAxis;

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcGrid_UAxes_type : public List_IfcGridAxis_1_n {
    public:
        /**
         */
        typedef List_IfcGridAxis_1_n::iterator iterator;

        /**
         */
        Inverted_IfcGrid_UAxes_type();
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
        friend class IfcGrid;

    protected:
        /**
         * The owner of this inverted aggregate.
         * 
         */
        IfcGrid *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcGrid *owner);

    };

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcGrid_VAxes_type : public List_IfcGridAxis_1_n {
    public:
        /**
         */
        typedef List_IfcGridAxis_1_n::iterator iterator;

        /**
         */
        Inverted_IfcGrid_VAxes_type();
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
        friend class IfcGrid;

    protected:
        /**
         * The owner of this inverted aggregate.
         * 
         */
        IfcGrid *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcGrid *owner);

    };

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcGrid_WAxes_type : public List_IfcGridAxis_1_n {
    public:
        /**
         */
        typedef List_IfcGridAxis_1_n::iterator iterator;

        /**
         */
        Inverted_IfcGrid_WAxes_type();
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
        friend class IfcGrid;

    protected:
        /**
         * The owner of this inverted aggregate.
         * 
         */
        IfcGrid *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcGrid *owner);

    };

    class CopyOp;

    /**
     * Generated class for the IfcGrid Entity.
     * 
     */
    class IFC2X3_EXPORT IfcGrid : public IfcProduct {
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
         * Gets the value of the explicit attribute 'UAxes'.
         * 
         */
        virtual List_IfcGridAxis_1_n &getUAxes();
        /**
         * (const) Returns the value of the explicit attribute 'UAxes'.
         * 
         * @return the value of the explicit attribute 'UAxes'
         */
        virtual const List_IfcGridAxis_1_n &getUAxes() const;
        /**
         * unset the attribute 'UAxes'.
         * 
         */
        virtual void unsetUAxes();
        /**
         * Test if the attribute 'UAxes' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUAxes() const;
        /**
         * Gets the value of the explicit attribute 'VAxes'.
         * 
         */
        virtual List_IfcGridAxis_1_n &getVAxes();
        /**
         * (const) Returns the value of the explicit attribute 'VAxes'.
         * 
         * @return the value of the explicit attribute 'VAxes'
         */
        virtual const List_IfcGridAxis_1_n &getVAxes() const;
        /**
         * unset the attribute 'VAxes'.
         * 
         */
        virtual void unsetVAxes();
        /**
         * Test if the attribute 'VAxes' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testVAxes() const;
        /**
         * Gets the value of the explicit attribute 'WAxes'.
         * 
         */
        virtual List_IfcGridAxis_1_n &getWAxes();
        /**
         * (const) Returns the value of the explicit attribute 'WAxes'.
         * 
         * @return the value of the explicit attribute 'WAxes'
         */
        virtual const List_IfcGridAxis_1_n &getWAxes() const;
        /**
         * unset the attribute 'WAxes'.
         * 
         */
        virtual void unsetWAxes();
        /**
         * Test if the attribute 'WAxes' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testWAxes() const;
        /**
         * Gets the value of the inverse attribute 'ContainedInStructure'.
         * 
         */
        virtual Inverse_Set_IfcRelContainedInSpatialStructure_0_1 &getContainedInStructure();
        /**
         * (const) Returns the value of the explicit attribute 'ContainedInStructure'.
         * 
         * @return the value of the explicit attribute 'ContainedInStructure'
         */
        const virtual Inverse_Set_IfcRelContainedInSpatialStructure_0_1 &getContainedInStructure() const;
        /**
         * Test if the attribute 'ContainedInStructure' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testContainedInStructure() const;
        friend class Inverted_IfcRelContainedInSpatialStructure_RelatedElements_type;
        friend class ExpressDataSet;
        friend class IfcRelContainedInSpatialStructure;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcGrid(Step::Id id, Step::SPFData *args);
        virtual ~IfcGrid();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcGrid &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverted_IfcGrid_UAxes_type m_uAxes;
        /**
         */
        Inverted_IfcGrid_VAxes_type m_vAxes;
        /**
         */
        Inverted_IfcGrid_WAxes_type m_wAxes;
        /**
         */
        Inverse_Set_IfcRelContainedInSpatialStructure_0_1 m_containedInStructure;

    };

}

#endif // IFC2X3_IFCGRID_H
