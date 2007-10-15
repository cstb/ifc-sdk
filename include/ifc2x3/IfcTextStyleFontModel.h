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

#ifndef IFC2X3_IFCTEXTSTYLEFONTMODEL_H
#define IFC2X3_IFCTEXTSTYLEFONTMODEL_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>
#include <Step/Aggregation.h>
#include "ifc2x3/IfcPreDefinedTextFont.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcSizeSelect;

    /**
     */
    class IFC2X3_DLL_DEF IfcTextStyleFontModel : public IfcPreDefinedTextFont {
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
        Step::List< IfcTextFontName > &getFontFamily();
        /**
         * Sets the value of the explicit attribute 'FontFamily'.
         * 
         * @param value
         */
        void setFontFamily(const Step::List< IfcTextFontName > &value);
        /**
         */
        IfcFontStyle getFontStyle();
        /**
         * Sets the value of the explicit attribute 'FontStyle'.
         * 
         * @param value
         */
        void setFontStyle(const IfcFontStyle &value);
        /**
         */
        IfcFontVariant getFontVariant();
        /**
         * Sets the value of the explicit attribute 'FontVariant'.
         * 
         * @param value
         */
        void setFontVariant(const IfcFontVariant &value);
        /**
         */
        IfcFontWeight getFontWeight();
        /**
         * Sets the value of the explicit attribute 'FontWeight'.
         * 
         * @param value
         */
        void setFontWeight(const IfcFontWeight &value);
        /**
         */
        IfcSizeSelect *getFontSize();
        /**
         * Sets the value of the explicit attribute 'FontSize'.
         * 
         * @param value
         */
        void setFontSize(const Step::RefPtr< IfcSizeSelect > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTextStyleFontModel(Step::Id id, Step::SPFData *args);
        virtual ~IfcTextStyleFontModel();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTextStyleFontModel &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::List< IfcTextFontName > m_fontFamily;
        /**
         */
        std::string m_fontStyle;
        /**
         */
        std::string m_fontVariant;
        /**
         */
        std::string m_fontWeight;
        /**
         */
        Step::RefPtr< IfcSizeSelect > m_fontSize;

    };

}

#endif // IFC2X3_IFCTEXTSTYLEFONTMODEL_H
