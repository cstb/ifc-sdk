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

#ifndef IFC2X3_IFCTEXTSTYLETEXTMODEL_H
#define IFC2X3_IFCTEXTSTYLETEXTMODEL_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcSizeSelect;

    /**
     */
    class IFC2X3_DLL_DEF IfcTextStyleTextModel : public Step::BaseEntity {
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
        IfcSizeSelect *getTextIndent();
        /**
         * Sets the value of the explicit attribute 'TextIndent'.
         * 
         * @param value
         */
        void setTextIndent(const Step::RefPtr< IfcSizeSelect > &value);
        /**
         */
        IfcTextAlignment getTextAlign();
        /**
         * Sets the value of the explicit attribute 'TextAlign'.
         * 
         * @param value
         */
        void setTextAlign(const IfcTextAlignment &value);
        /**
         */
        IfcTextDecoration getTextDecoration();
        /**
         * Sets the value of the explicit attribute 'TextDecoration'.
         * 
         * @param value
         */
        void setTextDecoration(const IfcTextDecoration &value);
        /**
         */
        IfcSizeSelect *getLetterSpacing();
        /**
         * Sets the value of the explicit attribute 'LetterSpacing'.
         * 
         * @param value
         */
        void setLetterSpacing(const Step::RefPtr< IfcSizeSelect > &value);
        /**
         */
        IfcSizeSelect *getWordSpacing();
        /**
         * Sets the value of the explicit attribute 'WordSpacing'.
         * 
         * @param value
         */
        void setWordSpacing(const Step::RefPtr< IfcSizeSelect > &value);
        /**
         */
        IfcTextTransformation getTextTransform();
        /**
         * Sets the value of the explicit attribute 'TextTransform'.
         * 
         * @param value
         */
        void setTextTransform(const IfcTextTransformation &value);
        /**
         */
        IfcSizeSelect *getLineHeight();
        /**
         * Sets the value of the explicit attribute 'LineHeight'.
         * 
         * @param value
         */
        void setLineHeight(const Step::RefPtr< IfcSizeSelect > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTextStyleTextModel(Step::Id id, Step::SPFData *args);
        virtual ~IfcTextStyleTextModel();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTextStyleTextModel &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcSizeSelect > m_textIndent;
        /**
         */
        std::string m_textAlign;
        /**
         */
        std::string m_textDecoration;
        /**
         */
        Step::RefPtr< IfcSizeSelect > m_letterSpacing;
        /**
         */
        Step::RefPtr< IfcSizeSelect > m_wordSpacing;
        /**
         */
        std::string m_textTransform;
        /**
         */
        Step::RefPtr< IfcSizeSelect > m_lineHeight;

    };

}

#endif // IFC2X3_IFCTEXTSTYLETEXTMODEL_H
