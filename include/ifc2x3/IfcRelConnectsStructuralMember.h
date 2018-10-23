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

#include <ifc2x3/IfcRelConnects.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcRelConnectsStructuralMember Entity.
     *
     */
    class IFC2X3_EXPORT IfcRelConnectsStructuralMember : public IfcRelConnects
    {

        // Attributes
        Step::RefPtr< IfcBoundaryCondition > m_AppliedCondition;
        Step::RefPtr< IfcStructuralConnectionCondition > m_AdditionalConditions;
        IfcLengthMeasure m_SupportedLength;
        Step::RefPtr< IfcAxis2Placement3D > m_ConditionCoordinateSystem;
        // InvertedAttributes
        Step::RefPtr< IfcStructuralMember > m_RelatingStructuralMember;
        Step::RefPtr< IfcStructuralConnection > m_RelatedStructuralConnection;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute AppliedCondition
        /// @{
        virtual IfcBoundaryCondition *getAppliedCondition();
        virtual const IfcBoundaryCondition *getAppliedCondition() const;
        virtual void setAppliedCondition(const Step::RefPtr< IfcBoundaryCondition > &value);
        virtual void unsetAppliedCondition();
        virtual bool testAppliedCondition() const;
        /// @}

        /// Attribute AdditionalConditions
        /// @{
        virtual IfcStructuralConnectionCondition *getAdditionalConditions();
        virtual const IfcStructuralConnectionCondition *getAdditionalConditions() const;
        virtual void setAdditionalConditions(const Step::RefPtr< IfcStructuralConnectionCondition > &value);
        virtual void unsetAdditionalConditions();
        virtual bool testAdditionalConditions() const;
        /// @}

        /// Attribute SupportedLength
        /// @{
        virtual IfcLengthMeasure getSupportedLength();
        virtual IfcLengthMeasure getSupportedLength() const;
        virtual void setSupportedLength(IfcLengthMeasure value);
        virtual void unsetSupportedLength();
        virtual bool testSupportedLength() const;
        /// @}

        /// Attribute ConditionCoordinateSystem
        /// @{
        virtual IfcAxis2Placement3D *getConditionCoordinateSystem();
        virtual const IfcAxis2Placement3D *getConditionCoordinateSystem() const;
        virtual void setConditionCoordinateSystem(const Step::RefPtr< IfcAxis2Placement3D > &value);
        virtual void unsetConditionCoordinateSystem();
        virtual bool testConditionCoordinateSystem() const;
        /// @}

        /// Attribute RelatingStructuralMember
        /// @{
        virtual IfcStructuralMember *getRelatingStructuralMember();
        virtual const IfcStructuralMember *getRelatingStructuralMember() const;
        virtual void setRelatingStructuralMember(const Step::RefPtr< IfcStructuralMember > &value);
        virtual void unsetRelatingStructuralMember();
        virtual bool testRelatingStructuralMember() const;
        /// @}

        /// Attribute RelatedStructuralConnection
        /// @{
        virtual IfcStructuralConnection *getRelatedStructuralConnection();
        virtual const IfcStructuralConnection *getRelatedStructuralConnection() const;
        virtual void setRelatedStructuralConnection(const Step::RefPtr< IfcStructuralConnection > &value);
        virtual void unsetRelatedStructuralConnection();
        virtual bool testRelatedStructuralConnection() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcRelConnectsStructuralMember(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelConnectsStructuralMember();

        virtual bool init();

        virtual void copy(const IfcRelConnectsStructuralMember &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3