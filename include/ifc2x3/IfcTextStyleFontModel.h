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
 *     Copyright (C) 2008 CSTB                                             *
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
#include <string>
#include <Step/SPFData.h>
#include <Step/String.h>
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
         * Gets the value of the explicit attribute 'FontFamily'.
         * 
         */
        virtual List_IfcTextFontName_1_n &getFontFamily();
        /**
         * (const) Returns the value of the explicit attribute 'FontFamily'.
         * 
         * @return the value of the explicit attribute 'FontFamily'
         */
        virtual const List_IfcTextFontName_1_n &getFontFamily() const;
        /**
         * Sets the value of the explicit attribute 'FontFamily'.
         * 
         * @param value
         */
        virtual void setFontFamily(const List_IfcTextFontName_1_n &value);
        /**
         * Gets the value of the explicit attribute 'FontStyle'.
         * 
         */
        virtual IfcFontStyle getFontStyle();
        /**
         * (const) Returns the value of the explicit attribute 'FontStyle'.
         * 
         * @return the value of the explicit attribute 'FontStyle'
         */
        virtual const IfcFontStyle getFontStyle() const;
        /**
         * Sets the value of the explicit attribute 'FontStyle'.
         * 
         * @param value
         */
        virtual void setFontStyle(const IfcFontStyle &value);
        /**
         * Gets the value of the explicit attribute 'FontVariant'.
         * 
         */
        virtual IfcFontVariant getFontVariant();
        /**
         * (const) Returns the value of the explicit attribute 'FontVariant'.
         * 
         * @return the value of the explicit attribute 'FontVariant'
         */
        virtual const IfcFontVariant getFontVariant() const;
        /**
         * Sets the value of the explicit attribute 'FontVariant'.
         * 
         * @param value
         */
        virtual void setFontVariant(const IfcFontVariant &value);
        /**
         * Gets the value of the explicit attribute 'FontWeight'.
         * 
         */
        virtual IfcFontWeight getFontWeight();
        /**
         * (const) Returns the value of the explicit attribute 'FontWeight'.
         * 
         * @return the value of the explicit attribute 'FontWeight'
         */
        virtual const IfcFontWeight getFontWeight() const;
        /**
         * Sets the value of the explicit attribute 'FontWeight'.
         * 
         * @param value
         */
        virtual void setFontWeight(const IfcFontWeight &value);
        /**
         * Gets the value of the explicit attribute 'FontSize'.
         * 
         */
        virtual IfcSizeSelect *getFontSize();
        /**
         * (const) Returns the value of the explicit attribute 'FontSize'.
         * 
         * @return the value of the explicit attribute 'FontSize'
         */
        virtual const IfcSizeSelect *getFontSize() const;
        /**
         * Sets the value of the explicit attribute 'FontSize'.
         * 
         * @param value
         */
        virtual void setFontSize(const Step::RefPtr< IfcSizeSelect > &value);
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
        List_IfcTextFontName_1_n m_fontFamily;
        /**
         */
        Step::String m_fontStyle;
        /**
         */
        Step::String m_fontVariant;
        /**
         */
        Step::String m_fontWeight;
        /**
         */
        Step::RefPtr< IfcSizeSelect > m_fontSize;

    };

}

#endif // IFC2X3_IFCTEXTSTYLEFONTMODEL_H
