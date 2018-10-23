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

#include <ifc2x3/IfcSystem.h>

namespace ifc2x3
{
    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     *
     */
    class Inverted_IfcStructuralAnalysisModel_LoadedBy_type : public Set_IfcStructuralLoadGroup_1_n
    {

    public:
        /**
         */
        typedef Set_IfcStructuralLoadGroup_1_n::size_type size_type;

        /**
         */
        Inverted_IfcStructuralAnalysisModel_LoadedBy_type();
        
        /**
         * Insert a value in the aggregate.
         *
         * @param value The object to act upon.
         */
    #ifdef STEP_CHECK_RANGE
        virtual void insert(const Step::RefPtr< IfcStructuralLoadGroup > &value) throw(std::out_of_range);
    #else
        virtual void insert(const Step::RefPtr< IfcStructuralLoadGroup > &value);
    #endif

        /**
         * Remove a value from the aggregate.
         *
         * @param value The object to act upon.
         */
        virtual size_type erase(const Step::RefPtr< IfcStructuralLoadGroup > &value);
        
        /**
         * Remove all values from the aggregate.
         *
         */
        void clear();
        friend class IfcStructuralAnalysisModel;

    protected:
        /**
         * The owner of this inverted aggregate.
         *
         */
       IfcStructuralAnalysisModel *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcStructuralAnalysisModel *owner);
    };
    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     *
     */
    class Inverted_IfcStructuralAnalysisModel_HasResults_type : public Set_IfcStructuralResultGroup_1_n
    {

    public:
        /**
         */
        typedef Set_IfcStructuralResultGroup_1_n::size_type size_type;

        /**
         */
        Inverted_IfcStructuralAnalysisModel_HasResults_type();
        
        /**
         * Insert a value in the aggregate.
         *
         * @param value The object to act upon.
         */
    #ifdef STEP_CHECK_RANGE
        virtual void insert(const Step::RefPtr< IfcStructuralResultGroup > &value) throw(std::out_of_range);
    #else
        virtual void insert(const Step::RefPtr< IfcStructuralResultGroup > &value);
    #endif

        /**
         * Remove a value from the aggregate.
         *
         * @param value The object to act upon.
         */
        virtual size_type erase(const Step::RefPtr< IfcStructuralResultGroup > &value);
        
        /**
         * Remove all values from the aggregate.
         *
         */
        void clear();
        friend class IfcStructuralAnalysisModel;

    protected:
        /**
         * The owner of this inverted aggregate.
         *
         */
       IfcStructuralAnalysisModel *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcStructuralAnalysisModel *owner);
    };


    /**
     * Generated class for the IfcStructuralAnalysisModel Entity.
     *
     */
    class IFC2X3_EXPORT IfcStructuralAnalysisModel : public IfcSystem
    {

        // Attributes
        IfcAnalysisModelTypeEnum m_PredefinedType;
        Step::RefPtr< IfcAxis2Placement3D > m_OrientationOf2DPlane;
        // InvertedAttributes
        Inverted_IfcStructuralAnalysisModel_LoadedBy_type m_LoadedBy;
        Inverted_IfcStructuralAnalysisModel_HasResults_type m_HasResults;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute PredefinedType
        /// @{
        virtual IfcAnalysisModelTypeEnum getPredefinedType();
        virtual IfcAnalysisModelTypeEnum getPredefinedType() const;
        virtual void setPredefinedType(IfcAnalysisModelTypeEnum value);
        virtual void unsetPredefinedType();
        virtual bool testPredefinedType() const;
        /// @}

        /// Attribute OrientationOf2DPlane
        /// @{
        virtual IfcAxis2Placement3D *getOrientationOf2DPlane();
        virtual const IfcAxis2Placement3D *getOrientationOf2DPlane() const;
        virtual void setOrientationOf2DPlane(const Step::RefPtr< IfcAxis2Placement3D > &value);
        virtual void unsetOrientationOf2DPlane();
        virtual bool testOrientationOf2DPlane() const;
        /// @}

        /// Attribute LoadedBy
        /// @{
        virtual Set_IfcStructuralLoadGroup_1_n &getLoadedBy();
        virtual const Set_IfcStructuralLoadGroup_1_n &getLoadedBy() const;
        virtual void unsetLoadedBy();
        virtual bool testLoadedBy() const;
        /// @}

        /// Attribute HasResults
        /// @{
        virtual Set_IfcStructuralResultGroup_1_n &getHasResults();
        virtual const Set_IfcStructuralResultGroup_1_n &getHasResults() const;
        virtual void unsetHasResults();
        virtual bool testHasResults() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcStructuralAnalysisModel(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralAnalysisModel();

        virtual bool init();

        virtual void copy(const IfcStructuralAnalysisModel &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3