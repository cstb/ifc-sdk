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

#ifndef IFC2X3_IFCSYMBOLSTYLESELECT_H
#define IFC2X3_IFCSYMBOLSTYLESELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcColourSpecification;
    class IfcPreDefinedColour;

    /**
     */
    class IFC2X3_DLL_DEF IfcSymbolStyleSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcSymbolStyleSelect_select {
            IFCCOLOURSPECIFICATION,
            IFCPREDEFINEDCOLOUR,
            UNSET,
        };

        union IfcSymbolStyleSelect_union {
            IfcColourSpecification *m_IfcColourSpecification;
            IfcPreDefinedColour *m_IfcPreDefinedColour;
        };
        /**
         */
        IfcSymbolStyleSelect();
        virtual ~IfcSymbolStyleSelect();
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
        virtual void copy(const IfcSymbolStyleSelect &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcSymbolStyleSelect_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcColourSpecification *getIfcColourSpecification();
        /**
         * @param value
         */
        void setIfcColourSpecification(IfcColourSpecification *value);
        /**
         */
        IfcPreDefinedColour *getIfcPreDefinedColour();
        /**
         * @param value
         */
        void setIfcPreDefinedColour(IfcPreDefinedColour *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcSymbolStyleSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcSymbolStyleSelect_select m_type;
        /**
         */
        IfcSymbolStyleSelect_union m_IfcSymbolStyleSelect_union;

    };

}

#endif // IFC2X3_IFCSYMBOLSTYLESELECT_H
