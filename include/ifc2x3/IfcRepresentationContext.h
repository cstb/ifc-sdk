// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

#ifndef IFC2X3_IFCREPRESENTATIONCONTEXT_H
#define IFC2X3_IFCREPRESENTATIONCONTEXT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcRepresentationContext Entity.
     * 
     */
    class IFC2X3_EXPORT IfcRepresentationContext : public Step::BaseEntity {
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
         * unset the attribute 'ContextIdentifier'.
         * 
         */
        virtual void unsetContextIdentifier();
        /**
         * Test if the attribute 'ContextIdentifier' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testContextIdentifier() const;
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
         * unset the attribute 'ContextType'.
         * 
         */
        virtual void unsetContextType();
        /**
         * Test if the attribute 'ContextType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testContextType() const;
        /**
         * Gets the value of the inverse attribute 'RepresentationsInContext'.
         * 
         */
        virtual Inverse_Set_IfcRepresentation_0_n &getRepresentationsInContext();
        /**
         * (const) Returns the value of the explicit attribute 'RepresentationsInContext'.
         * 
         * @return the value of the explicit attribute 'RepresentationsInContext'
         */
        const virtual Inverse_Set_IfcRepresentation_0_n &getRepresentationsInContext() const;
        /**
         * Test if the attribute 'RepresentationsInContext' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRepresentationsInContext() const;
        friend class IfcRepresentation;
        friend class ExpressDataSet;

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
