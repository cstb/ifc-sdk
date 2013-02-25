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

#ifndef IFC2X3_IFCOBJECTREFERENCESELECT_H
#define IFC2X3_IFCOBJECTREFERENCESELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseObject.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcAddress;
    class IfcAppliedValue;
    class IfcCalendarDate;
    class IfcDateAndTime;
    class IfcExternalReference;
    class IfcLocalTime;
    class IfcMaterial;
    class IfcMaterialLayer;
    class IfcMaterialList;
    class IfcOrganization;
    class IfcPerson;
    class IfcPersonAndOrganization;
    class IfcTimeSeries;

    /**
     * .
     * 
     */
    class IFC2X3_EXPORT IfcObjectReferenceSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcObjectReferenceSelect_select {
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
            UNSET,
        };

        union IfcObjectReferenceSelect_union {
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
        /**
         */
        IfcObjectReferenceSelect();
        virtual ~IfcObjectReferenceSelect();
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
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcObjectReferenceSelect &obj, const CopyOp &copyop);
        /**
         */
        std::string currentTypeName() const;
        /**
         */
        IfcObjectReferenceSelect_select currentType() const;
        /**
         */
        void deleteUnion();
        /**
         */
        IfcMaterial *getIfcMaterial() const;
        /**
         * @param value
         */
        void setIfcMaterial(IfcMaterial *value);
        /**
         */
        IfcPerson *getIfcPerson() const;
        /**
         * @param value
         */
        void setIfcPerson(IfcPerson *value);
        /**
         */
        IfcDateAndTime *getIfcDateAndTime() const;
        /**
         * @param value
         */
        void setIfcDateAndTime(IfcDateAndTime *value);
        /**
         */
        IfcMaterialList *getIfcMaterialList() const;
        /**
         * @param value
         */
        void setIfcMaterialList(IfcMaterialList *value);
        /**
         */
        IfcOrganization *getIfcOrganization() const;
        /**
         * @param value
         */
        void setIfcOrganization(IfcOrganization *value);
        /**
         */
        IfcCalendarDate *getIfcCalendarDate() const;
        /**
         * @param value
         */
        void setIfcCalendarDate(IfcCalendarDate *value);
        /**
         */
        IfcLocalTime *getIfcLocalTime() const;
        /**
         * @param value
         */
        void setIfcLocalTime(IfcLocalTime *value);
        /**
         */
        IfcPersonAndOrganization *getIfcPersonAndOrganization() const;
        /**
         * @param value
         */
        void setIfcPersonAndOrganization(IfcPersonAndOrganization *value);
        /**
         */
        IfcMaterialLayer *getIfcMaterialLayer() const;
        /**
         * @param value
         */
        void setIfcMaterialLayer(IfcMaterialLayer *value);
        /**
         */
        IfcExternalReference *getIfcExternalReference() const;
        /**
         * @param value
         */
        void setIfcExternalReference(IfcExternalReference *value);
        /**
         */
        IfcTimeSeries *getIfcTimeSeries() const;
        /**
         * @param value
         */
        void setIfcTimeSeries(IfcTimeSeries *value);
        /**
         */
        IfcAddress *getIfcAddress() const;
        /**
         * @param value
         */
        void setIfcAddress(IfcAddress *value);
        /**
         */
        IfcAppliedValue *getIfcAppliedValue() const;
        /**
         * @param value
         */
        void setIfcAppliedValue(IfcAppliedValue *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcObjectReferenceSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcObjectReferenceSelect_select m_type;
        /**
         */
        IfcObjectReferenceSelect_union m_IfcObjectReferenceSelect_union;

    };

}

#endif // IFC2X3_IFCOBJECTREFERENCESELECT_H
