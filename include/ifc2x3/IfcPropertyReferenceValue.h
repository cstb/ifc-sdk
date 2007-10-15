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

#ifndef IFC2X3_IFCPROPERTYREFERENCEVALUE_H
#define IFC2X3_IFCPROPERTYREFERENCEVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>
#include "ifc2x3/IfcSimpleProperty.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcObjectReferenceSelect;

    /**
     */
    class IFC2X3_DLL_DEF IfcPropertyReferenceValue : public IfcSimpleProperty {
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
        IfcLabel getUsageName();
        /**
         * Sets the value of the explicit attribute 'UsageName'.
         * 
         * @param value
         */
        void setUsageName(const IfcLabel &value);
        /**
         */
        IfcObjectReferenceSelect *getPropertyReference();
        /**
         * Sets the value of the explicit attribute 'PropertyReference'.
         * 
         * @param value
         */
        void setPropertyReference(const Step::RefPtr< IfcObjectReferenceSelect > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPropertyReferenceValue(Step::Id id, Step::SPFData *args);
        virtual ~IfcPropertyReferenceValue();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPropertyReferenceValue &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_usageName;
        /**
         */
        Step::RefPtr< IfcObjectReferenceSelect > m_propertyReference;

    };

}

#endif // IFC2X3_IFCPROPERTYREFERENCEVALUE_H
