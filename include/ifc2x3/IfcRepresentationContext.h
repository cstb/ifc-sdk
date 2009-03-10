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

#ifndef IFC2X3_IFCREPRESENTATIONCONTEXT_H
#define IFC2X3_IFCREPRESENTATIONCONTEXT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/String.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcRepresentationContext : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'ContextIdentifier'.
         * 
         */
        virtual IfcLabel getContextIdentifier();
        /**
         * (const) Returns the value of the explicit attribute 'ContextIdentifier'.
         * 
         * @return the value of the explicit attribute 'ContextIdentifier'
         */
        virtual const IfcLabel getContextIdentifier() const;
        /**
         * Sets the value of the explicit attribute 'ContextIdentifier'.
         * 
         * @param value
         */
        virtual void setContextIdentifier(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'ContextType'.
         * 
         */
        virtual IfcLabel getContextType();
        /**
         * (const) Returns the value of the explicit attribute 'ContextType'.
         * 
         * @return the value of the explicit attribute 'ContextType'
         */
        virtual const IfcLabel getContextType() const;
        /**
         * Sets the value of the explicit attribute 'ContextType'.
         * 
         * @param value
         */
        virtual void setContextType(const IfcLabel &value);
        /**
         * Gets the value of the inverse attribute 'RepresentationsInContext'.
         * 
         */
        Inverse_Set_IfcRepresentation_0_n &getRepresentationsInContext();
        /**
         * (const) Returns the value of the explicit attribute 'RepresentationsInContext'.
         * 
         * @return the value of the explicit attribute 'RepresentationsInContext'
         */
        virtual const Inverse_Set_IfcRepresentation_0_n &getRepresentationsInContext() const;
        friend class ExpressDataSet;
        friend class IfcRepresentation;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRepresentationContext(Step::Id id, Step::SPFData *args);
        virtual ~IfcRepresentationContext();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRepresentationContext &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_contextIdentifier;
        /**
         */
        Step::String m_contextType;
        /**
         */
        Inverse_Set_IfcRepresentation_0_n m_representationsInContext;

    };

}

#endif // IFC2X3_IFCREPRESENTATIONCONTEXT_H
