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
 *     Copyright (C) 2009 CSTB                                             *
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

#include <Step/BaseObject.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * .
     * 
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
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSimpleValue &obj, const CopyOp &copyop);
        /**
         */
        std::string currentTypeName() const;
        /**
         */
        IfcSimpleValue_select currentType() const;
        /**
         */
        void deleteUnion();
        /**
         */
        IfcInteger getIfcInteger() const;
        /**
         * @param value
         */
        void setIfcInteger(IfcInteger value);
        /**
         */
        IfcReal getIfcReal() const;
        /**
         * @param value
         */
        void setIfcReal(IfcReal value);
        /**
         */
        IfcBoolean getIfcBoolean() const;
        /**
         * @param value
         */
        void setIfcBoolean(IfcBoolean value);
        /**
         */
        IfcIdentifier getIfcIdentifier() const;
        /**
         * @param value
         */
        void setIfcIdentifier(const IfcIdentifier &value);
        /**
         */
        IfcText getIfcText() const;
        /**
         * @param value
         */
        void setIfcText(const IfcText &value);
        /**
         */
        IfcLabel getIfcLabel() const;
        /**
         * @param value
         */
        void setIfcLabel(const IfcLabel &value);
        /**
         */
        IfcLogical getIfcLogical() const;
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
