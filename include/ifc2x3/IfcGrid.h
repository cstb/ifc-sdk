#pragma once

// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009-2018 CSTB   
//   
// For further information please contact
//                                       
//         eveBIM-support@cstb.fr        
//   or                                  
//         CSTB DTI/MIC                  
//         290, route des Lucioles       
//         BP 209                        
//         06904 Sophia Antipolis, France
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


#include <ifc2x3/Export.h>

#include <ifc2x3/IfcProduct.h>

namespace ifc2x3
{
    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     *
     */
    class Inverted_IfcGrid_VAxes_type : public List_IfcGridAxis_1_n
    {

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
    #ifdef STEP_CHECK_RANGE
        virtual void push_back(const Step::RefPtr< IfcGridAxis > &value) throw(std::out_of_range);
    #else
        virtual void push_back(const Step::RefPtr< IfcGridAxis > &value);
    #endif

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
    class Inverted_IfcGrid_UAxes_type : public List_IfcGridAxis_1_n
    {

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
    #ifdef STEP_CHECK_RANGE
        virtual void push_back(const Step::RefPtr< IfcGridAxis > &value) throw(std::out_of_range);
    #else
        virtual void push_back(const Step::RefPtr< IfcGridAxis > &value);
    #endif

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
    class Inverted_IfcGrid_WAxes_type : public List_IfcGridAxis_1_n
    {

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
    #ifdef STEP_CHECK_RANGE
        virtual void push_back(const Step::RefPtr< IfcGridAxis > &value) throw(std::out_of_range);
    #else
        virtual void push_back(const Step::RefPtr< IfcGridAxis > &value);
    #endif

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
     * Generated class for the IfcGrid Entity.
     *
     */
    class IFC2X3_EXPORT IfcGrid : public IfcProduct
    {

        // InvertedAttributes
        Inverted_IfcGrid_VAxes_type m_VAxes;
        Inverted_IfcGrid_UAxes_type m_UAxes;
        Inverted_IfcGrid_WAxes_type m_WAxes;
        // InverseAttributes
        Inverse_Set_IfcRelContainedInSpatialStructure_0_1 m_ContainedInStructure;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute VAxes
        /// @{
        virtual List_IfcGridAxis_1_n &getVAxes();
        virtual const List_IfcGridAxis_1_n &getVAxes() const;
        virtual void unsetVAxes();
        virtual bool testVAxes() const;
        /// @}

        /// Attribute UAxes
        /// @{
        virtual List_IfcGridAxis_1_n &getUAxes();
        virtual const List_IfcGridAxis_1_n &getUAxes() const;
        virtual void unsetUAxes();
        virtual bool testUAxes() const;
        /// @}

        /// Attribute WAxes
        /// @{
        virtual List_IfcGridAxis_1_n &getWAxes();
        virtual const List_IfcGridAxis_1_n &getWAxes() const;
        virtual void unsetWAxes();
        virtual bool testWAxes() const;
        /// @}

        /// Inverse attribute ContainedInStructure
        /// @{
        virtual Inverse_Set_IfcRelContainedInSpatialStructure_0_1 &getContainedInStructure();
        virtual const Inverse_Set_IfcRelContainedInSpatialStructure_0_1 &getContainedInStructure() const;
        virtual bool testContainedInStructure() const;

        friend class IfcRelContainedInSpatialStructure;
        /// @}



        friend class Inverted_IfcRelContainedInSpatialStructure_RelatedElements_type;


        friend class ExpressDataSet;

    protected:

        IfcGrid(Step::Id id, Step::SPFData *args);
        virtual ~IfcGrid();

        virtual bool init();

        virtual void copy(const IfcGrid &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3