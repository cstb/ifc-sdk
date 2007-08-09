/*
// ////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik modified generator           //
//  Powered by : Eve CSTB                    //
// ////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2005 CSTB                                             *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Lesser General Public            *
 *   License as published by the Free Software Foundation; either          *
 *   version 2.1 of the License, or (at your option) any later version.    *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library; if not, write to the                 *
 *         Free Software Foundation, Inc.                                  *
 *         59 Temple Place, Suite 330                                      *
 *         Boston, MA  02111-1307                                          *
 *         USA                                                             *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Eve, CSTB                                                       *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCOBJECTREFERENCESELECT_H
#define IFC2X3_IFCOBJECTREFERENCESELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/BaseObject.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

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
   */
  class IFC2X3_DLL_DEF IfcObjectReferenceSelect : public Step::BaseObject {
  public:
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

    /**
     */
    IfcObjectReferenceSelect();
    virtual ~IfcObjectReferenceSelect();
    /**
     * Accepts a read/write DatatypeVisitor.
     * 
     * @param v the read/write DatatypeVisitor to accept
     */
    virtual bool acceptVisitor(Step::BaseVisitor *v);
    /**
     */
    virtual bool init();
    /**
     */
    virtual const char *type();
    /**
     */
    static Step::ClassType getClassType();
    /**
     */
    virtual Step::ClassType getType() const;
    /**
     * @param t
     */
    virtual bool isOfType(Step::ClassType t);
    /**
     */
    char *currentTypeName();
    /**
     */
    IfcObjectReferenceSelect_select currentType();
    /**
     */
    void deleteUnion();
    /**
     */
    IfcMaterial *getIfcMaterial();
    /**
     * @param value
     */
    void setIfcMaterial(IfcMaterial *value);
    /**
     */
    IfcPerson *getIfcPerson();
    /**
     * @param value
     */
    void setIfcPerson(IfcPerson *value);
    /**
     */
    IfcDateAndTime *getIfcDateAndTime();
    /**
     * @param value
     */
    void setIfcDateAndTime(IfcDateAndTime *value);
    /**
     */
    IfcMaterialList *getIfcMaterialList();
    /**
     * @param value
     */
    void setIfcMaterialList(IfcMaterialList *value);
    /**
     */
    IfcOrganization *getIfcOrganization();
    /**
     * @param value
     */
    void setIfcOrganization(IfcOrganization *value);
    /**
     */
    IfcCalendarDate *getIfcCalendarDate();
    /**
     * @param value
     */
    void setIfcCalendarDate(IfcCalendarDate *value);
    /**
     */
    IfcLocalTime *getIfcLocalTime();
    /**
     * @param value
     */
    void setIfcLocalTime(IfcLocalTime *value);
    /**
     */
    IfcPersonAndOrganization *getIfcPersonAndOrganization();
    /**
     * @param value
     */
    void setIfcPersonAndOrganization(IfcPersonAndOrganization *value);
    /**
     */
    IfcMaterialLayer *getIfcMaterialLayer();
    /**
     * @param value
     */
    void setIfcMaterialLayer(IfcMaterialLayer *value);
    /**
     */
    IfcExternalReference *getIfcExternalReference();
    /**
     * @param value
     */
    void setIfcExternalReference(IfcExternalReference *value);
    /**
     */
    IfcTimeSeries *getIfcTimeSeries();
    /**
     * @param value
     */
    void setIfcTimeSeries(IfcTimeSeries *value);
    /**
     */
    IfcAddress *getIfcAddress();
    /**
     * @param value
     */
    void setIfcAddress(IfcAddress *value);
    /**
     */
    IfcAppliedValue *getIfcAppliedValue();
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

  private:
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
    static Step::ClassType s_type;
    IfcObjectReferenceSelect_select m_type;
    IfcObjectReferenceSelect_union m_IfcObjectReferenceSelect_union;
    /**
     * @param c
     */
    IfcObjectReferenceSelect(const IfcObjectReferenceSelect &c);

  };

}

#endif // IFC2X3_IFCOBJECTREFERENCESELECT_H
