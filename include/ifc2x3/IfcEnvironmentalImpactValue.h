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

#ifndef IFC2X3_IFCENVIRONMENTALIMPACTVALUE_H
#define IFC2X3_IFCENVIRONMENTALIMPACTVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>
#include "ifc2x3/IfcAppliedValue.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcEnvironmentalImpactValue : public IfcAppliedValue {
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
        IfcLabel getImpactType();
        /**
         * Sets the value of the explicit attribute 'ImpactType'.
         * 
         * @param value
         */
        void setImpactType(const IfcLabel &value);
        /**
         */
        IfcEnvironmentalImpactCategoryEnum getCategory();
        /**
         * Sets the value of the explicit attribute 'Category'.
         * 
         * @param value
         */
        void setCategory(IfcEnvironmentalImpactCategoryEnum value);
        /**
         */
        IfcLabel getUserDefinedCategory();
        /**
         * Sets the value of the explicit attribute 'UserDefinedCategory'.
         * 
         * @param value
         */
        void setUserDefinedCategory(const IfcLabel &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcEnvironmentalImpactValue(Step::Id id, Step::SPFData *args);
        virtual ~IfcEnvironmentalImpactValue();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcEnvironmentalImpactValue &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_impactType;
        /**
         */
        IfcEnvironmentalImpactCategoryEnum m_category;
        /**
         */
        std::string m_userDefinedCategory;

    };

}

#endif // IFC2X3_IFCENVIRONMENTALIMPACTVALUE_H
