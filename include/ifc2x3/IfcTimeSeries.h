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

#include <ifc2x3/DefinedTypes.h>

#include <Step/BaseEntity.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcTimeSeries Entity.
     *
     */
    class IFC2X3_EXPORT IfcTimeSeries : public Step::BaseEntity
    {

        // Attributes
        IfcLabel m_Name;
        IfcText m_Description;
        Step::RefPtr< IfcDateTimeSelect > m_StartTime;
        Step::RefPtr< IfcDateTimeSelect > m_EndTime;
        IfcTimeSeriesDataTypeEnum m_TimeSeriesDataType;
        IfcDataOriginEnum m_DataOrigin;
        IfcLabel m_UserDefinedDataOrigin;
        Step::RefPtr< IfcUnit > m_Unit;
        // InverseAttributes
        Inverse_Set_IfcTimeSeriesReferenceRelationship_0_1 m_DocumentedBy;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Name
        /// @{
        virtual IfcLabel getName();
        virtual const IfcLabel getName() const;
        virtual void setName(const IfcLabel &value);
        virtual void unsetName();
        virtual bool testName() const;
        /// @}

        /// Attribute Description
        /// @{
        virtual IfcText getDescription();
        virtual const IfcText getDescription() const;
        virtual void setDescription(const IfcText &value);
        virtual void unsetDescription();
        virtual bool testDescription() const;
        /// @}

        /// Attribute StartTime
        /// @{
        virtual IfcDateTimeSelect *getStartTime();
        virtual const IfcDateTimeSelect *getStartTime() const;
        virtual void setStartTime(const Step::RefPtr< IfcDateTimeSelect > &value);
        virtual void unsetStartTime();
        virtual bool testStartTime() const;
        /// @}

        /// Attribute EndTime
        /// @{
        virtual IfcDateTimeSelect *getEndTime();
        virtual const IfcDateTimeSelect *getEndTime() const;
        virtual void setEndTime(const Step::RefPtr< IfcDateTimeSelect > &value);
        virtual void unsetEndTime();
        virtual bool testEndTime() const;
        /// @}

        /// Attribute TimeSeriesDataType
        /// @{
        virtual IfcTimeSeriesDataTypeEnum getTimeSeriesDataType();
        virtual IfcTimeSeriesDataTypeEnum getTimeSeriesDataType() const;
        virtual void setTimeSeriesDataType(IfcTimeSeriesDataTypeEnum value);
        virtual void unsetTimeSeriesDataType();
        virtual bool testTimeSeriesDataType() const;
        /// @}

        /// Attribute DataOrigin
        /// @{
        virtual IfcDataOriginEnum getDataOrigin();
        virtual IfcDataOriginEnum getDataOrigin() const;
        virtual void setDataOrigin(IfcDataOriginEnum value);
        virtual void unsetDataOrigin();
        virtual bool testDataOrigin() const;
        /// @}

        /// Attribute UserDefinedDataOrigin
        /// @{
        virtual IfcLabel getUserDefinedDataOrigin();
        virtual const IfcLabel getUserDefinedDataOrigin() const;
        virtual void setUserDefinedDataOrigin(const IfcLabel &value);
        virtual void unsetUserDefinedDataOrigin();
        virtual bool testUserDefinedDataOrigin() const;
        /// @}

        /// Attribute Unit
        /// @{
        virtual IfcUnit *getUnit();
        virtual const IfcUnit *getUnit() const;
        virtual void setUnit(const Step::RefPtr< IfcUnit > &value);
        virtual void unsetUnit();
        virtual bool testUnit() const;
        /// @}

        /// Inverse attribute DocumentedBy
        /// @{
        virtual Inverse_Set_IfcTimeSeriesReferenceRelationship_0_1 &getDocumentedBy();
        virtual const Inverse_Set_IfcTimeSeriesReferenceRelationship_0_1 &getDocumentedBy() const;
        virtual bool testDocumentedBy() const;

        friend class IfcTimeSeriesReferenceRelationship;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcTimeSeries(Step::Id id, Step::SPFData *args);
        virtual ~IfcTimeSeries();

        virtual bool init();

        virtual void copy(const IfcTimeSeries &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3