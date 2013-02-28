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

#ifndef IFC2X3_IFCDOCUMENTELECTRONICFORMAT_H
#define IFC2X3_IFCDOCUMENTELECTRONICFORMAT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcDocumentElectronicFormat Entity.
     * 
     */
    class IFC2X3_EXPORT IfcDocumentElectronicFormat : public Step::BaseEntity {
    public:
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
         * Gets the value of the explicit attribute 'FileExtension'.
         * 
         */
        virtual IfcLabel getFileExtension();
        /**
         * (const) Returns the value of the explicit attribute 'FileExtension'.
         * 
         * @return the value of the explicit attribute 'FileExtension'
         */
        virtual const IfcLabel getFileExtension() const;
        /**
         * Sets the value of the explicit attribute 'FileExtension'.
         * 
         * @param value
         */
        virtual void setFileExtension(const IfcLabel &value);
        /**
         * unset the attribute 'FileExtension'.
         * 
         */
        virtual void unsetFileExtension();
        /**
         * Test if the attribute 'FileExtension' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFileExtension() const;
        /**
         * Gets the value of the explicit attribute 'MimeContentType'.
         * 
         */
        virtual IfcLabel getMimeContentType();
        /**
         * (const) Returns the value of the explicit attribute 'MimeContentType'.
         * 
         * @return the value of the explicit attribute 'MimeContentType'
         */
        virtual const IfcLabel getMimeContentType() const;
        /**
         * Sets the value of the explicit attribute 'MimeContentType'.
         * 
         * @param value
         */
        virtual void setMimeContentType(const IfcLabel &value);
        /**
         * unset the attribute 'MimeContentType'.
         * 
         */
        virtual void unsetMimeContentType();
        /**
         * Test if the attribute 'MimeContentType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMimeContentType() const;
        /**
         * Gets the value of the explicit attribute 'MimeSubtype'.
         * 
         */
        virtual IfcLabel getMimeSubtype();
        /**
         * (const) Returns the value of the explicit attribute 'MimeSubtype'.
         * 
         * @return the value of the explicit attribute 'MimeSubtype'
         */
        virtual const IfcLabel getMimeSubtype() const;
        /**
         * Sets the value of the explicit attribute 'MimeSubtype'.
         * 
         * @param value
         */
        virtual void setMimeSubtype(const IfcLabel &value);
        /**
         * unset the attribute 'MimeSubtype'.
         * 
         */
        virtual void unsetMimeSubtype();
        /**
         * Test if the attribute 'MimeSubtype' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMimeSubtype() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcDocumentElectronicFormat(Step::Id id, Step::SPFData *args);
        virtual ~IfcDocumentElectronicFormat();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDocumentElectronicFormat &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_fileExtension;
        /**
         */
        Step::String m_mimeContentType;
        /**
         */
        Step::String m_mimeSubtype;

    };

}

#endif // IFC2X3_IFCDOCUMENTELECTRONICFORMAT_H
