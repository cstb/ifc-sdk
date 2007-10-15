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

#ifndef IFC2X3_IFCTEXTFONTSELECT_H
#define IFC2X3_IFCTEXTFONTSELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcExternallyDefinedTextFont;
    class IfcPreDefinedTextFont;

    /**
     */
    class IFC2X3_DLL_DEF IfcTextFontSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcTextFontSelect_select {
            IFCPREDEFINEDTEXTFONT,
            IFCEXTERNALLYDEFINEDTEXTFONT,
            UNSET,
        };

        union IfcTextFontSelect_union {
            IfcPreDefinedTextFont *m_IfcPreDefinedTextFont;
            IfcExternallyDefinedTextFont *m_IfcExternallyDefinedTextFont;
        };
        /**
         */
        IfcTextFontSelect();
        virtual ~IfcTextFontSelect();
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
        virtual void copy(const IfcTextFontSelect &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcTextFontSelect_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcPreDefinedTextFont *getIfcPreDefinedTextFont();
        /**
         * @param value
         */
        void setIfcPreDefinedTextFont(IfcPreDefinedTextFont *value);
        /**
         */
        IfcExternallyDefinedTextFont *getIfcExternallyDefinedTextFont();
        /**
         * @param value
         */
        void setIfcExternallyDefinedTextFont(IfcExternallyDefinedTextFont *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcTextFontSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcTextFontSelect_select m_type;
        /**
         */
        IfcTextFontSelect_union m_IfcTextFontSelect_union;

    };

}

#endif // IFC2X3_IFCTEXTFONTSELECT_H
