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

#ifndef IFC2X3_IFCTEXTSTYLE_H
#define IFC2X3_IFCTEXTSTYLE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcPresentationStyle.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCharacterStyleSelect;
    class IfcTextFontSelect;
    class IfcTextStyleSelect;

    /**
     */
    class IFC2X3_DLL_DEF IfcTextStyle : public IfcPresentationStyle {
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
        IfcCharacterStyleSelect *getTextCharacterAppearance();
        /**
         * Sets the value of the explicit attribute 'TextCharacterAppearance'.
         * 
         * @param value
         */
        void setTextCharacterAppearance(const Step::RefPtr< IfcCharacterStyleSelect > &value);
        /**
         */
        IfcTextStyleSelect *getTextStyle();
        /**
         * Sets the value of the explicit attribute 'TextStyle'.
         * 
         * @param value
         */
        void setTextStyle(const Step::RefPtr< IfcTextStyleSelect > &value);
        /**
         */
        IfcTextFontSelect *getTextFontStyle();
        /**
         * Sets the value of the explicit attribute 'TextFontStyle'.
         * 
         * @param value
         */
        void setTextFontStyle(const Step::RefPtr< IfcTextFontSelect > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTextStyle(Step::Id id, Step::SPFData *args);
        virtual ~IfcTextStyle();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTextStyle &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcCharacterStyleSelect > m_textCharacterAppearance;
        /**
         */
        Step::RefPtr< IfcTextStyleSelect > m_textStyle;
        /**
         */
        Step::RefPtr< IfcTextFontSelect > m_textFontStyle;

    };

}

#endif // IFC2X3_IFCTEXTSTYLE_H
