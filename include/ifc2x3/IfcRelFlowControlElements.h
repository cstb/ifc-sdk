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

#ifndef IFC2X3_IFCRELFLOWCONTROLELEMENTS_H
#define IFC2X3_IFCRELFLOWCONTROLELEMENTS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcRelConnects.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <stdexcept>
#include <string>

namespace ifc2x3 {

    class IfcDistributionControlElement;
    class IfcRelFlowControlElements;

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcRelFlowControlElements_RelatedControlElements_type : public Set_IfcDistributionControlElement_1_n {
    public:
        /**
         */
        typedef Set_IfcDistributionControlElement_1_n::size_type size_type;

        /**
         */
        Inverted_IfcRelFlowControlElements_RelatedControlElements_type();
        /**
         * Insert a value in the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual void insert(const Step::RefPtr< IfcDistributionControlElement > &value) throw(std::out_of_range);
        /**
         * Remove a value from the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual size_type erase(const Step::RefPtr< IfcDistributionControlElement > &value);
        /**
         * Remove all values from the aggregate.
         * 
         */
        void clear();
        friend class IfcRelFlowControlElements;

    protected:
        /**
         * The owner of this inverted aggregate.
         * 
         */
        IfcRelFlowControlElements *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcRelFlowControlElements *owner);

    };

    class CopyOp;
    class IfcDistributionFlowElement;

    /**
     * Generated class for the IfcRelFlowControlElements Entity.
     * 
     */
    class IFC2X3_EXPORT IfcRelFlowControlElements : public IfcRelConnects {
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
         * Gets the value of the explicit attribute 'RelatedControlElements'.
         * 
         */
        virtual Set_IfcDistributionControlElement_1_n &getRelatedControlElements();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedControlElements'.
         * 
         * @return the value of the explicit attribute 'RelatedControlElements'
         */
        virtual const Set_IfcDistributionControlElement_1_n &getRelatedControlElements() const;
        /**
         * unset the attribute 'RelatedControlElements'.
         * 
         */
        virtual void unsetRelatedControlElements();
        /**
         * Test if the attribute 'RelatedControlElements' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatedControlElements() const;
        /**
         * Gets the value of the explicit attribute 'RelatingFlowElement'.
         * 
         */
        virtual IfcDistributionFlowElement *getRelatingFlowElement();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingFlowElement'.
         * 
         * @return the value of the explicit attribute 'RelatingFlowElement'
         */
        virtual const IfcDistributionFlowElement *getRelatingFlowElement() const;
        /**
         * Sets the value of the explicit attribute 'RelatingFlowElement'.
         * 
         * @param value
         */
        virtual void setRelatingFlowElement(const Step::RefPtr< IfcDistributionFlowElement > &value);
        /**
         * unset the attribute 'RelatingFlowElement'.
         * 
         */
        virtual void unsetRelatingFlowElement();
        /**
         * Test if the attribute 'RelatingFlowElement' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatingFlowElement() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelFlowControlElements(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelFlowControlElements();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelFlowControlElements &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverted_IfcRelFlowControlElements_RelatedControlElements_type m_relatedControlElements;
        /**
         */
        Step::RefPtr< IfcDistributionFlowElement > m_relatingFlowElement;

    };

}

#endif // IFC2X3_IFCRELFLOWCONTROLELEMENTS_H
