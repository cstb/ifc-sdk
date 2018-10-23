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
     * Generated class for the IfcRelSequence Entity.
     *
     */
    class IFC2X3_EXPORT IfcRelSequence : public IfcRelConnects
    {

        // Attributes
        IfcTimeMeasure m_TimeLag;
        IfcSequenceEnum m_SequenceType;
        // InvertedAttributes
        Step::RefPtr< IfcProcess > m_RelatingProcess;
        Step::RefPtr< IfcProcess > m_RelatedProcess;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute TimeLag
        /// @{
        virtual IfcTimeMeasure getTimeLag();
        virtual IfcTimeMeasure getTimeLag() const;
        virtual void setTimeLag(IfcTimeMeasure value);
        virtual void unsetTimeLag();
        virtual bool testTimeLag() const;
        /// @}

        /// Attribute SequenceType
        /// @{
        virtual IfcSequenceEnum getSequenceType();
        virtual IfcSequenceEnum getSequenceType() const;
        virtual void setSequenceType(IfcSequenceEnum value);
        virtual void unsetSequenceType();
        virtual bool testSequenceType() const;
        /// @}

        /// Attribute RelatingProcess
        /// @{
        virtual IfcProcess *getRelatingProcess();
        virtual const IfcProcess *getRelatingProcess() const;
        virtual void setRelatingProcess(const Step::RefPtr< IfcProcess > &value);
        virtual void unsetRelatingProcess();
        virtual bool testRelatingProcess() const;
        /// @}

        /// Attribute RelatedProcess
        /// @{
        virtual IfcProcess *getRelatedProcess();
        virtual const IfcProcess *getRelatedProcess() const;
        virtual void setRelatedProcess(const Step::RefPtr< IfcProcess > &value);
        virtual void unsetRelatedProcess();
        virtual bool testRelatedProcess() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcRelSequence(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelSequence();

        virtual bool init();

        virtual void copy(const IfcRelSequence &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3