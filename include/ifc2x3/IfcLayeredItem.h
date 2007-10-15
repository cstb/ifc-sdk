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

#ifndef IFC2X3_IFCLAYEREDITEM_H
#define IFC2X3_IFCLAYEREDITEM_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcRepresentation;
    class IfcRepresentationItem;

    /**
     */
    class IFC2X3_DLL_DEF IfcLayeredItem : public Step::BaseObject {
    public:
        /**
 */
enum IfcLayeredItem_select {
            IFCREPRESENTATIONITEM,
            IFCREPRESENTATION,
            UNSET,
        };

        union IfcLayeredItem_union {
            IfcRepresentationItem *m_IfcRepresentationItem;
            IfcRepresentation *m_IfcRepresentation;
        };
        /**
         */
        IfcLayeredItem();
        virtual ~IfcLayeredItem();
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
        virtual void copy(const IfcLayeredItem &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcLayeredItem_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcRepresentationItem *getIfcRepresentationItem();
        /**
         * @param value
         */
        void setIfcRepresentationItem(IfcRepresentationItem *value);
        /**
         */
        IfcRepresentation *getIfcRepresentation();
        /**
         * @param value
         */
        void setIfcRepresentation(IfcRepresentation *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcLayeredItem(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcLayeredItem_select m_type;
        /**
         */
        IfcLayeredItem_union m_IfcLayeredItem_union;

    };

}

#endif // IFC2X3_IFCLAYEREDITEM_H
