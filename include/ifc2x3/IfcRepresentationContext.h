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

#ifndef IFC2X3_IFCREPRESENTATIONCONTEXT_H
#define IFC2X3_IFCREPRESENTATIONCONTEXT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <string>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcRepresentation;

    /**
     */
    class IFC2X3_DLL_DEF IfcRepresentationContext : public Step::BaseEntity {
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
        IfcLabel getContextIdentifier();
        /**
         * Sets the value of the explicit attribute 'ContextIdentifier'.
         * 
         * @param value
         */
        void setContextIdentifier(const IfcLabel &value);
        /**
         */
        IfcLabel getContextType();
        /**
         * Sets the value of the explicit attribute 'ContextType'.
         * 
         * @param value
         */
        void setContextType(const IfcLabel &value);
        /**
         */
        Step::Set< Step::ObsPtr< IfcRepresentation > > &getRepresentationsInContext();
        /**
         */
        virtual void release();
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
        std::string m_contextIdentifier;
        /**
         */
        std::string m_contextType;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRepresentation > > m_representationsInContext;

    };

}

#endif // IFC2X3_IFCREPRESENTATIONCONTEXT_H
