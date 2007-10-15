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

#ifndef IFC2X3_IFCSIMPLEVALUE_H
#define IFC2X3_IFCSIMPLEVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcSimpleValue : public Step::BaseObject {
    public:
        /**
 */
enum IfcSimpleValue_select {
            IFCINTEGER,
            IFCREAL,
            IFCBOOLEAN,
            IFCIDENTIFIER,
            IFCTEXT,
            IFCLABEL,
            IFCLOGICAL,
            UNSET,
        };

        union IfcSimpleValue_union {
            IfcInteger m_IfcInteger;
            IfcReal m_IfcReal;
            IfcBoolean m_IfcBoolean;
            IfcIdentifier *m_IfcIdentifier;
            IfcText *m_IfcText;
            IfcLabel *m_IfcLabel;
            IfcLogical m_IfcLogical;
        };
        /**
         */
        IfcSimpleValue();
        virtual ~IfcSimpleValue();
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
        virtual void copy(const IfcSimpleValue &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcSimpleValue_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcInteger getIfcInteger();
        /**
         * @param value
         */
        void setIfcInteger(IfcInteger value);
        /**
         */
        IfcReal getIfcReal();
        /**
         * @param value
         */
        void setIfcReal(IfcReal value);
        /**
         */
        IfcBoolean getIfcBoolean();
        /**
         * @param value
         */
        void setIfcBoolean(IfcBoolean value);
        /**
         */
        IfcIdentifier getIfcIdentifier();
        /**
         * @param value
         */
        void setIfcIdentifier(const IfcIdentifier &value);
        /**
         */
        IfcText getIfcText();
        /**
         * @param value
         */
        void setIfcText(const IfcText &value);
        /**
         */
        IfcLabel getIfcLabel();
        /**
         * @param value
         */
        void setIfcLabel(const IfcLabel &value);
        /**
         */
        IfcLogical getIfcLogical();
        /**
         * @param value
         */
        void setIfcLogical(IfcLogical value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcSimpleValue(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcSimpleValue_select m_type;
        /**
         */
        IfcSimpleValue_union m_IfcSimpleValue_union;

    };

}

#endif // IFC2X3_IFCSIMPLEVALUE_H
