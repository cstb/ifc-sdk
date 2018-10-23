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

#include <ifc2x3/IfcObject.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcProject Entity.
     *
     */
    class IFC2X3_EXPORT IfcProject : public IfcObject
    {

        // Attributes
        IfcLabel m_LongName;
        IfcLabel m_Phase;
        Set_IfcRepresentationContext_1_n m_RepresentationContexts;
        Step::RefPtr< IfcUnitAssignment > m_UnitsInContext;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute LongName
        /// @{
        virtual IfcLabel getLongName();
        virtual const IfcLabel getLongName() const;
        virtual void setLongName(const IfcLabel &value);
        virtual void unsetLongName();
        virtual bool testLongName() const;
        /// @}

        /// Attribute Phase
        /// @{
        virtual IfcLabel getPhase();
        virtual const IfcLabel getPhase() const;
        virtual void setPhase(const IfcLabel &value);
        virtual void unsetPhase();
        virtual bool testPhase() const;
        /// @}

        /// Attribute RepresentationContexts
        /// @{
        virtual Set_IfcRepresentationContext_1_n &getRepresentationContexts();
        virtual const Set_IfcRepresentationContext_1_n &getRepresentationContexts() const;
        virtual void setRepresentationContexts(const Set_IfcRepresentationContext_1_n &value);
        virtual void unsetRepresentationContexts();
        virtual bool testRepresentationContexts() const;
        /// @}

        /// Attribute UnitsInContext
        /// @{
        virtual IfcUnitAssignment *getUnitsInContext();
        virtual const IfcUnitAssignment *getUnitsInContext() const;
        virtual void setUnitsInContext(const Step::RefPtr< IfcUnitAssignment > &value);
        virtual void unsetUnitsInContext();
        virtual bool testUnitsInContext() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcProject(Step::Id id, Step::SPFData *args);
        virtual ~IfcProject();

        virtual bool init();

        virtual void copy(const IfcProject &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3