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

#ifndef IFC2X3_IFCSTYLEDITEM_H
#define IFC2X3_IFCSTYLEDITEM_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>
#include <Step/Aggregation.h>
#include "ifc2x3/IfcRepresentationItem.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcPresentationStyleAssignment;

    /**
     */
    class IFC2X3_DLL_DEF IfcStyledItem : public IfcRepresentationItem {
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
        IfcRepresentationItem *getItem();
        /**
         * Sets the value of the explicit attribute 'Item'.
         * 
         * @param value
         */
        void setItem(const Step::RefPtr< IfcRepresentationItem > &value);
        /**
         */
        Step::Set< Step::RefPtr< IfcPresentationStyleAssignment > > &getStyles();
        /**
         * Sets the value of the explicit attribute 'Styles'.
         * 
         * @param value
         */
        void setStyles(const Step::Set< Step::RefPtr< IfcPresentationStyleAssignment > > &value);
        /**
         */
        IfcLabel getName();
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        void setName(const IfcLabel &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStyledItem(Step::Id id, Step::SPFData *args);
        virtual ~IfcStyledItem();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStyledItem &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcRepresentationItem > m_item;
        /**
         */
        Step::Set< Step::RefPtr< IfcPresentationStyleAssignment > > m_styles;
        /**
         */
        std::string m_name;

    };

}

#endif // IFC2X3_IFCSTYLEDITEM_H
