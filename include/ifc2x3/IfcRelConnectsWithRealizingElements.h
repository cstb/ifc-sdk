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

#ifndef IFC2X3_IFCRELCONNECTSWITHREALIZINGELEMENTS_H
#define IFC2X3_IFCRELCONNECTSWITHREALIZINGELEMENTS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcRelConnectsElements.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <stdexcept>
#include <string>

namespace ifc2x3 {

    class IfcElement;
    class IfcRelConnectsWithRealizingElements;

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcRelConnectsWithRealizingElements_RealizingElements_type : public Set_IfcElement_1_n {
    public:
        /**
         */
        typedef Set_IfcElement_1_n::size_type size_type;

        /**
         */
        Inverted_IfcRelConnectsWithRealizingElements_RealizingElements_type();
        /**
         * Insert a value in the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual void insert(const Step::RefPtr< IfcElement > &value) throw(std::out_of_range);
        /**
         * Remove a value from the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual size_type erase(const Step::RefPtr< IfcElement > &value);
        /**
         * Remove all values from the aggregate.
         * 
         */
        void clear();
        friend class IfcRelConnectsWithRealizingElements;

    protected:
        /**
         * The owner of this inverted aggregate.
         * 
         */
        IfcRelConnectsWithRealizingElements *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcRelConnectsWithRealizingElements *owner);

    };

    class CopyOp;

    /**
     * Generated class for the IfcRelConnectsWithRealizingElements Entity.
     * 
     */
    class IFC2X3_EXPORT IfcRelConnectsWithRealizingElements : public IfcRelConnectsElements {
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
         * Gets the value of the explicit attribute 'RealizingElements'.
         * 
         */
        virtual Set_IfcElement_1_n &getRealizingElements();
        /**
         * (const) Returns the value of the explicit attribute 'RealizingElements'.
         * 
         * @return the value of the explicit attribute 'RealizingElements'
         */
        virtual const Set_IfcElement_1_n &getRealizingElements() const;
        /**
         * unset the attribute 'RealizingElements'.
         * 
         */
        virtual void unsetRealizingElements();
        /**
         * Test if the attribute 'RealizingElements' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRealizingElements() const;
        /**
         * Gets the value of the explicit attribute 'ConnectionType'.
         * 
         */
        virtual IfcLabel getConnectionType();
        /**
         * (const) Returns the value of the explicit attribute 'ConnectionType'.
         * 
         * @return the value of the explicit attribute 'ConnectionType'
         */
        virtual const IfcLabel getConnectionType() const;
        /**
         * Sets the value of the explicit attribute 'ConnectionType'.
         * 
         * @param value
         */
        virtual void setConnectionType(const IfcLabel &value);
        /**
         * unset the attribute 'ConnectionType'.
         * 
         */
        virtual void unsetConnectionType();
        /**
         * Test if the attribute 'ConnectionType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testConnectionType() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelConnectsWithRealizingElements(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelConnectsWithRealizingElements();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelConnectsWithRealizingElements &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverted_IfcRelConnectsWithRealizingElements_RealizingElements_type m_realizingElements;
        /**
         */
        Step::String m_connectionType;

    };

}

#endif // IFC2X3_IFCRELCONNECTSWITHREALIZINGELEMENTS_H
