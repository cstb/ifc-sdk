/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
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
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/String.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcDocumentElectronicFormat : public Step::BaseEntity {
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
