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

#ifndef IFC2X3_IFCDOCUMENTINFORMATION_H
#define IFC2X3_IFCDOCUMENTINFORMATION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/InstantiatableEntity.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcActorSelect;
  class IfcCalendarDate;
  class IfcDateAndTime;
  class IfcDocumentElectronicFormat;
  class IfcDocumentInformationRelationship;
  class IfcDocumentInformation_Factory;
  class IfcDocumentReference;

  /**
   */
  class IFC2X3_DLL_DEF IfcDocumentInformation : public Step::InstantiatableEntity, public Step::BaseObject {
  public:
    /**
     * Accepts a read/write DatatypeVisitor.
     * 
     * @param v the read/write DatatypeVisitor to accept
     */
    virtual bool acceptVisitor(Step::BaseVisitor *v);
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
     * (non-const) Returns the value of the explicit attribute 'DocumentId'.
     * 
     * @return the value of the explicit attribute 'DocumentId'
     */
    IfcIdentifier getDocumentId();
    /**
     * Sets the value of the explicit attribute 'DocumentId'.
     * 
     * @param value
     */
    void setDocumentId(const IfcIdentifier &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Name'.
     * 
     * @return the value of the explicit attribute 'Name'
     */
    IfcLabel getName();
    /**
     * Sets the value of the explicit attribute 'Name'.
     * 
     * @param value
     */
    void setName(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Description'.
     * 
     * @return the value of the explicit attribute 'Description'
     */
    IfcText getDescription();
    /**
     * Sets the value of the explicit attribute 'Description'.
     * 
     * @param value
     */
    void setDescription(const IfcText &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'DocumentReferences'.
     * 
     * @return the value of the explicit attribute 'DocumentReferences'
     */
    Step::StepSet< Step::RefPtr< IfcDocumentReference > > &getDocumentReferences();
    /**
     * Sets the value of the explicit attribute 'DocumentReferences'.
     * 
     * @param value
     */
    void setDocumentReferences(const Step::StepSet< Step::RefPtr< IfcDocumentReference > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Purpose'.
     * 
     * @return the value of the explicit attribute 'Purpose'
     */
    IfcText getPurpose();
    /**
     * Sets the value of the explicit attribute 'Purpose'.
     * 
     * @param value
     */
    void setPurpose(const IfcText &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'IntendedUse'.
     * 
     * @return the value of the explicit attribute 'IntendedUse'
     */
    IfcText getIntendedUse();
    /**
     * Sets the value of the explicit attribute 'IntendedUse'.
     * 
     * @param value
     */
    void setIntendedUse(const IfcText &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Scope'.
     * 
     * @return the value of the explicit attribute 'Scope'
     */
    IfcText getScope();
    /**
     * Sets the value of the explicit attribute 'Scope'.
     * 
     * @param value
     */
    void setScope(const IfcText &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Revision'.
     * 
     * @return the value of the explicit attribute 'Revision'
     */
    IfcLabel getRevision();
    /**
     * Sets the value of the explicit attribute 'Revision'.
     * 
     * @param value
     */
    void setRevision(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'DocumentOwner'.
     * 
     * @return the value of the explicit attribute 'DocumentOwner'
     */
    IfcActorSelect *getDocumentOwner();
    /**
     * Sets the value of the explicit attribute 'DocumentOwner'.
     * 
     * @param value
     */
    void setDocumentOwner(const Step::RefPtr< IfcActorSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Editors'.
     * 
     * @return the value of the explicit attribute 'Editors'
     */
    Step::StepSet< Step::RefPtr< IfcActorSelect > > &getEditors();
    /**
     * Sets the value of the explicit attribute 'Editors'.
     * 
     * @param value
     */
    void setEditors(const Step::StepSet< Step::RefPtr< IfcActorSelect > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'CreationTime'.
     * 
     * @return the value of the explicit attribute 'CreationTime'
     */
    IfcDateAndTime *getCreationTime();
    /**
     * Sets the value of the explicit attribute 'CreationTime'.
     * 
     * @param value
     */
    void setCreationTime(const Step::RefPtr< IfcDateAndTime > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LastRevisionTime'.
     * 
     * @return the value of the explicit attribute 'LastRevisionTime'
     */
    IfcDateAndTime *getLastRevisionTime();
    /**
     * Sets the value of the explicit attribute 'LastRevisionTime'.
     * 
     * @param value
     */
    void setLastRevisionTime(const Step::RefPtr< IfcDateAndTime > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ElectronicFormat'.
     * 
     * @return the value of the explicit attribute 'ElectronicFormat'
     */
    IfcDocumentElectronicFormat *getElectronicFormat();
    /**
     * Sets the value of the explicit attribute 'ElectronicFormat'.
     * 
     * @param value
     */
    void setElectronicFormat(const Step::RefPtr< IfcDocumentElectronicFormat > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ValidFrom'.
     * 
     * @return the value of the explicit attribute 'ValidFrom'
     */
    IfcCalendarDate *getValidFrom();
    /**
     * Sets the value of the explicit attribute 'ValidFrom'.
     * 
     * @param value
     */
    void setValidFrom(const Step::RefPtr< IfcCalendarDate > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ValidUntil'.
     * 
     * @return the value of the explicit attribute 'ValidUntil'
     */
    IfcCalendarDate *getValidUntil();
    /**
     * Sets the value of the explicit attribute 'ValidUntil'.
     * 
     * @param value
     */
    void setValidUntil(const Step::RefPtr< IfcCalendarDate > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Confidentiality'.
     * 
     * @return the value of the explicit attribute 'Confidentiality'
     */
    IfcDocumentConfidentialityEnum getConfidentiality();
    /**
     * Sets the value of the explicit attribute 'Confidentiality'.
     * 
     * @param value
     */
    void setConfidentiality(IfcDocumentConfidentialityEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Status'.
     * 
     * @return the value of the explicit attribute 'Status'
     */
    IfcDocumentStatusEnum getStatus();
    /**
     * Sets the value of the explicit attribute 'Status'.
     * 
     * @param value
     */
    void setStatus(IfcDocumentStatusEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'IsPointedTo'.
     * 
     * @return the value of the explicit attribute 'IsPointedTo'
     */
    Step::StepSet< Step::RefPtr< IfcDocumentInformationRelationship > > &getIsPointedTo();
    /**
     * Sets the value of the explicit attribute 'IsPointedTo'.
     * 
     * @param value
     */
    void setIsPointedTo(const Step::StepSet< Step::RefPtr< IfcDocumentInformationRelationship > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'IsPointer'.
     * 
     * @return the value of the explicit attribute 'IsPointer'
     */
    Step::StepSet< Step::RefPtr< IfcDocumentInformationRelationship > > &getIsPointer();
    /**
     * Sets the value of the explicit attribute 'IsPointer'.
     * 
     * @param value
     */
    void setIsPointer(const Step::StepSet< Step::RefPtr< IfcDocumentInformationRelationship > > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcDocumentInformation_Factory;

  protected:
    /**
     * @param args
     */
    IfcDocumentInformation(Step::SPFData *args);
    virtual ~IfcDocumentInformation();

  private:
    static Step::ClassType s_type;
    std::string m_documentId;
    std::string m_name;
    std::string m_description;
    Step::StepSet< Step::RefPtr< IfcDocumentReference > > m_documentReferences;
    std::string m_purpose;
    std::string m_intendedUse;
    std::string m_scope;
    std::string m_revision;
    Step::RefPtr< IfcActorSelect > m_documentOwner;
    Step::StepSet< Step::RefPtr< IfcActorSelect > > m_editors;
    Step::RefPtr< IfcDateAndTime > m_creationTime;
    Step::RefPtr< IfcDateAndTime > m_lastRevisionTime;
    Step::RefPtr< IfcDocumentElectronicFormat > m_electronicFormat;
    Step::RefPtr< IfcCalendarDate > m_validFrom;
    Step::RefPtr< IfcCalendarDate > m_validUntil;
    IfcDocumentConfidentialityEnum m_confidentiality;
    IfcDocumentStatusEnum m_status;
    Step::StepSet< Step::RefPtr< IfcDocumentInformationRelationship > > m_isPointedTo;
    Step::StepSet< Step::RefPtr< IfcDocumentInformationRelationship > > m_isPointer;
    /**
     * @param c
     */
    IfcDocumentInformation(const IfcDocumentInformation &c);

  };

  class IfcDocumentInformation;

  /**
   */
  class IFC2X3_DLL_DEF IfcDocumentInformation_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcDocumentInformation_Factory();
    virtual ~IfcDocumentInformation_Factory();
    /**
     * @param b
     */
    void clear(bool b);
    /**
     */
    std::map<Step::StepId,Step::BaseObject*>::iterator begin();
    /**
     */
    std::map<Step::StepId,Step::BaseObject*>::iterator end();
    /**
     * @param id
     */
    IfcDocumentInformation *get(Step::StepId id);
    /**
     */
    IfcDocumentInformation *generate();
    /**
     * @param id
     */
    IfcDocumentInformation *find(Step::StepId id);

  protected:
    /**
     * @param id
     */
    virtual Step::BaseObject *create(Step::StepId id);
    /**
     * @param it
     */
    virtual Step::BaseObject *create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it);
    /**
     * @param it
     */
    virtual Step::BaseObject *create(std::map<Step::StepId, Step::BaseObject*>::iterator it);

  };

}

#endif // IFC2X3_IFCDOCUMENTINFORMATION_H
