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

#ifndef IFC2X3_IFCLIBRARYSELECT_H
#define IFC2X3_IFCLIBRARYSELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcLibraryInformation;
    class IfcLibraryReference;

    /**
     */
    class IFC2X3_DLL_DEF IfcLibrarySelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcLibrarySelect_select {
            IFCLIBRARYREFERENCE,
            IFCLIBRARYINFORMATION,
            UNSET,
        };

        union IfcLibrarySelect_union {
            IfcLibraryReference *m_IfcLibraryReference;
            IfcLibraryInformation *m_IfcLibraryInformation;
        };
        /**
         */
        IfcLibrarySelect();
        virtual ~IfcLibrarySelect();
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
        virtual void copy(const IfcLibrarySelect &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcLibrarySelect_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcLibraryReference *getIfcLibraryReference();
        /**
         * @param value
         */
        void setIfcLibraryReference(IfcLibraryReference *value);
        /**
         */
        IfcLibraryInformation *getIfcLibraryInformation();
        /**
         * @param value
         */
        void setIfcLibraryInformation(IfcLibraryInformation *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcLibrarySelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcLibrarySelect_select m_type;
        /**
         */
        IfcLibrarySelect_union m_IfcLibrarySelect_union;

    };

}

#endif // IFC2X3_IFCLIBRARYSELECT_H
