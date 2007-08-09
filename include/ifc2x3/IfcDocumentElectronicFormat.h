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

#ifndef IFC2X3_IFCDOCUMENTELECTRONICFORMAT_H
#define IFC2X3_IFCDOCUMENTELECTRONICFORMAT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/BaseObject.h>
#include <Step/InstantiatableEntity.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcDocumentElectronicFormat_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcDocumentElectronicFormat : public Step::InstantiatableEntity, public Step::BaseObject {
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
     * (non-const) Returns the value of the explicit attribute 'FileExtension'.
     * 
     * @return the value of the explicit attribute 'FileExtension'
     */
    IfcLabel getFileExtension();
    /**
     * Sets the value of the explicit attribute 'FileExtension'.
     * 
     * @param value
     */
    void setFileExtension(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MimeContentType'.
     * 
     * @return the value of the explicit attribute 'MimeContentType'
     */
    IfcLabel getMimeContentType();
    /**
     * Sets the value of the explicit attribute 'MimeContentType'.
     * 
     * @param value
     */
    void setMimeContentType(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MimeSubtype'.
     * 
     * @return the value of the explicit attribute 'MimeSubtype'
     */
    IfcLabel getMimeSubtype();
    /**
     * Sets the value of the explicit attribute 'MimeSubtype'.
     * 
     * @param value
     */
    void setMimeSubtype(const IfcLabel &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcDocumentElectronicFormat_Factory;

  protected:
    /**
     * @param args
     */
    IfcDocumentElectronicFormat(Step::SPFData *args);
    virtual ~IfcDocumentElectronicFormat();

  private:
    static Step::ClassType s_type;
    std::string m_fileExtension;
    std::string m_mimeContentType;
    std::string m_mimeSubtype;
    /**
     * @param c
     */
    IfcDocumentElectronicFormat(const IfcDocumentElectronicFormat &c);

  };

  class IfcDocumentElectronicFormat;

  /**
   */
  class IFC2X3_DLL_DEF IfcDocumentElectronicFormat_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcDocumentElectronicFormat_Factory();
    virtual ~IfcDocumentElectronicFormat_Factory();
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
    IfcDocumentElectronicFormat *get(Step::StepId id);
    /**
     */
    IfcDocumentElectronicFormat *generate();
    /**
     * @param id
     */
    IfcDocumentElectronicFormat *find(Step::StepId id);

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

#endif // IFC2X3_IFCDOCUMENTELECTRONICFORMAT_H
