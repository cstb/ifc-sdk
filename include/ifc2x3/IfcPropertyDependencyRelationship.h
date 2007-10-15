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

#ifndef IFC2X3_IFCPROPERTYDEPENDENCYRELATIONSHIP_H
#define IFC2X3_IFCPROPERTYDEPENDENCYRELATIONSHIP_H
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
    class IfcProperty;

    /**
     */
    class IFC2X3_DLL_DEF IfcPropertyDependencyRelationship : public Step::BaseEntity {
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
        IfcProperty *getDependingProperty();
        /**
         * Sets the value of the explicit attribute 'DependingProperty'.
         * 
         * @param value
         */
        void setDependingProperty(const Step::RefPtr< IfcProperty > &value);
        /**
         */
        IfcProperty *getDependantProperty();
        /**
         * Sets the value of the explicit attribute 'DependantProperty'.
         * 
         * @param value
         */
        void setDependantProperty(const Step::RefPtr< IfcProperty > &value);
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
        IfcText getDescription();
        /**
         * Sets the value of the explicit attribute 'Description'.
         * 
         * @param value
         */
        void setDescription(const IfcText &value);
        /**
         */
        IfcText getExpression();
        /**
         * Sets the value of the explicit attribute 'Expression'.
         * 
         * @param value
         */
        void setExpression(const IfcText &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPropertyDependencyRelationship(Step::Id id, Step::SPFData *args);
        virtual ~IfcPropertyDependencyRelationship();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPropertyDependencyRelationship &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcProperty > m_dependingProperty;
        /**
         */
        Step::RefPtr< IfcProperty > m_dependantProperty;
        /**
         */
        std::string m_name;
        /**
         */
        std::string m_description;
        /**
         */
        std::string m_expression;

    };

}

#endif // IFC2X3_IFCPROPERTYDEPENDENCYRELATIONSHIP_H
