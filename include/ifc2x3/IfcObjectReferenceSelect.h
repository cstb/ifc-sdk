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

#include <Step/BaseObject.h>

namespace ifc2x3
{
    /**
     * Generated class for the IfcObjectReferenceSelect Select type.
     *
     */
    class IFC2X3_EXPORT IfcObjectReferenceSelect : public Step::BaseObject

    {
        ClassType_definitions()

    public:
        enum IfcObjectReferenceSelect_select 
        {
            IFCMATERIAL,
            IFCPERSON,
            IFCDATEANDTIME,
            IFCMATERIALLIST,
            IFCORGANIZATION,
            IFCCALENDARDATE,
            IFCLOCALTIME,
            IFCPERSONANDORGANIZATION,
            IFCMATERIALLAYER,
            IFCEXTERNALREFERENCE,
            IFCTIMESERIES,
            IFCADDRESS,
            IFCAPPLIEDVALUE,
            UNSET
        };

        union IfcObjectReferenceSelect_union
        {
            IfcMaterial *m_IfcMaterial;
            IfcPerson *m_IfcPerson;
            IfcDateAndTime *m_IfcDateAndTime;
            IfcMaterialList *m_IfcMaterialList;
            IfcOrganization *m_IfcOrganization;
            IfcCalendarDate *m_IfcCalendarDate;
            IfcLocalTime *m_IfcLocalTime;
            IfcPersonAndOrganization *m_IfcPersonAndOrganization;
            IfcMaterialLayer *m_IfcMaterialLayer;
            IfcExternalReference *m_IfcExternalReference;
            IfcTimeSeries *m_IfcTimeSeries;
            IfcAddress *m_IfcAddress;
            IfcAppliedValue *m_IfcAppliedValue;
        };

        IfcObjectReferenceSelect();
        virtual ~IfcObjectReferenceSelect();

        virtual void copy(const IfcObjectReferenceSelect &obj, const CopyOp &copyop);

        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        std::string currentTypeName() const;

        IfcObjectReferenceSelect_select currentType() const;

        void deleteUnion();

        void set(Step::BaseObject *v);

        IfcMaterial *getIfcMaterial() const;
        void setIfcMaterial(IfcMaterial *value);

        IfcPerson *getIfcPerson() const;
        void setIfcPerson(IfcPerson *value);

        IfcDateAndTime *getIfcDateAndTime() const;
        void setIfcDateAndTime(IfcDateAndTime *value);

        IfcMaterialList *getIfcMaterialList() const;
        void setIfcMaterialList(IfcMaterialList *value);

        IfcOrganization *getIfcOrganization() const;
        void setIfcOrganization(IfcOrganization *value);

        IfcCalendarDate *getIfcCalendarDate() const;
        void setIfcCalendarDate(IfcCalendarDate *value);

        IfcLocalTime *getIfcLocalTime() const;
        void setIfcLocalTime(IfcLocalTime *value);

        IfcPersonAndOrganization *getIfcPersonAndOrganization() const;
        void setIfcPersonAndOrganization(IfcPersonAndOrganization *value);

        IfcMaterialLayer *getIfcMaterialLayer() const;
        void setIfcMaterialLayer(IfcMaterialLayer *value);

        IfcExternalReference *getIfcExternalReference() const;
        void setIfcExternalReference(IfcExternalReference *value);

        IfcTimeSeries *getIfcTimeSeries() const;
        void setIfcTimeSeries(IfcTimeSeries *value);

        IfcAddress *getIfcAddress() const;
        void setIfcAddress(IfcAddress *value);

        IfcAppliedValue *getIfcAppliedValue() const;
        void setIfcAppliedValue(IfcAppliedValue *value);


    protected:
        IfcObjectReferenceSelect(Step::SPFData *args);

        virtual bool init();

    private:
        IfcObjectReferenceSelect_select m_type;
  
        IfcObjectReferenceSelect_union m_union;
    };
} // namespace ifc2x3