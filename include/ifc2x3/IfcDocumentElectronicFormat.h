/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
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
#include <Step/SPFData.h>
#include <string>
#include <Step/BaseEntity.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcDocumentElectronicFormat : public Step::BaseEntity {
    public:
        /**
         * Accepts a read/write DatatypeVisitor.
         * 
         * @param v the read/write DatatypeVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *v);
        /**
         */
        virtual const std::string &type();
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
        IfcLabel getFileExtension();
        /**
         * Sets the value of the explicit attribute 'FileExtension'.
         * 
         * @param value
         */
        void setFileExtension(const IfcLabel &value);
        /**
         */
        IfcLabel getMimeContentType();
        /**
         * Sets the value of the explicit attribute 'MimeContentType'.
         * 
         * @param value
         */
        void setMimeContentType(const IfcLabel &value);
        /**
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
        std::string m_fileExtension;
        /**
         */
        std::string m_mimeContentType;
        /**
         */
        std::string m_mimeSubtype;

    };

}

#endif // IFC2X3_IFCDOCUMENTELECTRONICFORMAT_H
