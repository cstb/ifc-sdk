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

#ifndef IFC2X3_IFCRELCONNECTSPATHELEMENTS_H
#define IFC2X3_IFCRELCONNECTSPATHELEMENTS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcRelConnectsElements.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcRelConnectsPathElements Entity.
     * 
     */
    class IFC2X3_EXPORT IfcRelConnectsPathElements : public IfcRelConnectsElements {
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
         * Gets the value of the explicit attribute 'RelatingPriorities'.
         * 
         */
        virtual List_Integer_0_n &getRelatingPriorities();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingPriorities'.
         * 
         * @return the value of the explicit attribute 'RelatingPriorities'
         */
        virtual const List_Integer_0_n &getRelatingPriorities() const;
        /**
         * Sets the value of the explicit attribute 'RelatingPriorities'.
         * 
         * @param value
         */
        virtual void setRelatingPriorities(const List_Integer_0_n &value);
        /**
         * unset the attribute 'RelatingPriorities'.
         * 
         */
        virtual void unsetRelatingPriorities();
        /**
         * Test if the attribute 'RelatingPriorities' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatingPriorities() const;
        /**
         * Gets the value of the explicit attribute 'RelatedPriorities'.
         * 
         */
        virtual List_Integer_0_n &getRelatedPriorities();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedPriorities'.
         * 
         * @return the value of the explicit attribute 'RelatedPriorities'
         */
        virtual const List_Integer_0_n &getRelatedPriorities() const;
        /**
         * Sets the value of the explicit attribute 'RelatedPriorities'.
         * 
         * @param value
         */
        virtual void setRelatedPriorities(const List_Integer_0_n &value);
        /**
         * unset the attribute 'RelatedPriorities'.
         * 
         */
        virtual void unsetRelatedPriorities();
        /**
         * Test if the attribute 'RelatedPriorities' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatedPriorities() const;
        /**
         * Gets the value of the explicit attribute 'RelatedConnectionType'.
         * 
         */
        virtual IfcConnectionTypeEnum getRelatedConnectionType();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedConnectionType'.
         * 
         * @return the value of the explicit attribute 'RelatedConnectionType'
         */
        virtual const IfcConnectionTypeEnum getRelatedConnectionType() const;
        /**
         * Sets the value of the explicit attribute 'RelatedConnectionType'.
         * 
         * @param value
         */
        virtual void setRelatedConnectionType(IfcConnectionTypeEnum value);
        /**
         * unset the attribute 'RelatedConnectionType'.
         * 
         */
        virtual void unsetRelatedConnectionType();
        /**
         * Test if the attribute 'RelatedConnectionType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatedConnectionType() const;
        /**
         * Gets the value of the explicit attribute 'RelatingConnectionType'.
         * 
         */
        virtual IfcConnectionTypeEnum getRelatingConnectionType();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingConnectionType'.
         * 
         * @return the value of the explicit attribute 'RelatingConnectionType'
         */
        virtual const IfcConnectionTypeEnum getRelatingConnectionType() const;
        /**
         * Sets the value of the explicit attribute 'RelatingConnectionType'.
         * 
         * @param value
         */
        virtual void setRelatingConnectionType(IfcConnectionTypeEnum value);
        /**
         * unset the attribute 'RelatingConnectionType'.
         * 
         */
        virtual void unsetRelatingConnectionType();
        /**
         * Test if the attribute 'RelatingConnectionType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatingConnectionType() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelConnectsPathElements(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelConnectsPathElements();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelConnectsPathElements &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        List_Integer_0_n m_relatingPriorities;
        /**
         */
        List_Integer_0_n m_relatedPriorities;
        /**
         */
        IfcConnectionTypeEnum m_relatedConnectionType;
        /**
         */
        IfcConnectionTypeEnum m_relatingConnectionType;

    };

}

#endif // IFC2X3_IFCRELCONNECTSPATHELEMENTS_H
