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

#include <ifc2x3/IfcProfileDef.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcDerivedProfileDef Entity.
     *
     */
    class IFC2X3_EXPORT IfcDerivedProfileDef : public IfcProfileDef
    {

        // Attributes
        Step::RefPtr< IfcProfileDef > m_ParentProfile;
        Step::RefPtr< IfcCartesianTransformationOperator2D > m_Operator;
        IfcLabel m_Label;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute ParentProfile
        /// @{
        virtual IfcProfileDef *getParentProfile();
        virtual const IfcProfileDef *getParentProfile() const;
        virtual void setParentProfile(const Step::RefPtr< IfcProfileDef > &value);
        virtual void unsetParentProfile();
        virtual bool testParentProfile() const;
        /// @}

        /// Attribute Operator
        /// @{
        virtual IfcCartesianTransformationOperator2D *getOperator();
        virtual const IfcCartesianTransformationOperator2D *getOperator() const;
        virtual void setOperator(const Step::RefPtr< IfcCartesianTransformationOperator2D > &value);
        virtual void unsetOperator();
        virtual bool testOperator() const;
        /// @}

        /// Attribute Label
        /// @{
        virtual IfcLabel getLabel();
        virtual const IfcLabel getLabel() const;
        virtual void setLabel(const IfcLabel &value);
        virtual void unsetLabel();
        virtual bool testLabel() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcDerivedProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcDerivedProfileDef();

        virtual bool init();

        virtual void copy(const IfcDerivedProfileDef &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3