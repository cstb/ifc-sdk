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

#ifndef IFC2X3_IFCDOCUMENTSELECT_H
#define IFC2X3_IFCDOCUMENTSELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcDocumentInformation;
    class IfcDocumentReference;

    /**
     */
    class IFC2X3_DLL_DEF IfcDocumentSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcDocumentSelect_select {
            IFCDOCUMENTREFERENCE,
            IFCDOCUMENTINFORMATION,
            UNSET,
        };

        union IfcDocumentSelect_union {
            IfcDocumentReference *m_IfcDocumentReference;
            IfcDocumentInformation *m_IfcDocumentInformation;
        };
        /**
         */
        IfcDocumentSelect();
        virtual ~IfcDocumentSelect();
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
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDocumentSelect &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcDocumentSelect_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcDocumentReference *getIfcDocumentReference();
        /**
         * @param value
         */
        void setIfcDocumentReference(IfcDocumentReference *value);
        /**
         */
        IfcDocumentInformation *getIfcDocumentInformation();
        /**
         * @param value
         */
        void setIfcDocumentInformation(IfcDocumentInformation *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcDocumentSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcDocumentSelect_select m_type;
        /**
         */
        IfcDocumentSelect_union m_IfcDocumentSelect_union;

    };

}

#endif // IFC2X3_IFCDOCUMENTSELECT_H
