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

#ifndef IFC2X3_IFCRELCONNECTSELEMENTS_H
#define IFC2X3_IFCRELCONNECTSELEMENTS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcRelConnects.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcConnectionGeometry;
    class IfcElement;

    /**
     * Generated class for the IfcRelConnectsElements Entity.
     * 
     */
    class IFC2X3_EXPORT IfcRelConnectsElements : public IfcRelConnects {
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
         * Gets the value of the explicit attribute 'ConnectionGeometry'.
         * 
         */
        virtual IfcConnectionGeometry *getConnectionGeometry();
        /**
         * (const) Returns the value of the explicit attribute 'ConnectionGeometry'.
         * 
         * @return the value of the explicit attribute 'ConnectionGeometry'
         */
        virtual const IfcConnectionGeometry *getConnectionGeometry() const;
        /**
         * Sets the value of the explicit attribute 'ConnectionGeometry'.
         * 
         * @param value
         */
        virtual void setConnectionGeometry(const Step::RefPtr< IfcConnectionGeometry > &value);
        /**
         * unset the attribute 'ConnectionGeometry'.
         * 
         */
        virtual void unsetConnectionGeometry();
        /**
         * Test if the attribute 'ConnectionGeometry' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testConnectionGeometry() const;
        /**
         * Gets the value of the explicit attribute 'RelatingElement'.
         * 
         */
        virtual IfcElement *getRelatingElement();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingElement'.
         * 
         * @return the value of the explicit attribute 'RelatingElement'
         */
        virtual const IfcElement *getRelatingElement() const;
        /**
         * Sets the value of the explicit attribute 'RelatingElement'.
         * 
         * @param value
         */
        virtual void setRelatingElement(const Step::RefPtr< IfcElement > &value);
        /**
         * unset the attribute 'RelatingElement'.
         * 
         */
        virtual void unsetRelatingElement();
        /**
         * Test if the attribute 'RelatingElement' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatingElement() const;
        /**
         * Gets the value of the explicit attribute 'RelatedElement'.
         * 
         */
        virtual IfcElement *getRelatedElement();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedElement'.
         * 
         * @return the value of the explicit attribute 'RelatedElement'
         */
        virtual const IfcElement *getRelatedElement() const;
        /**
         * Sets the value of the explicit attribute 'RelatedElement'.
         * 
         * @param value
         */
        virtual void setRelatedElement(const Step::RefPtr< IfcElement > &value);
        /**
         * unset the attribute 'RelatedElement'.
         * 
         */
        virtual void unsetRelatedElement();
        /**
         * Test if the attribute 'RelatedElement' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatedElement() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelConnectsElements(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelConnectsElements();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelConnectsElements &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcConnectionGeometry > m_connectionGeometry;
        /**
         */
        Step::RefPtr< IfcElement > m_relatingElement;
        /**
         */
        Step::RefPtr< IfcElement > m_relatedElement;

    };

}

#endif // IFC2X3_IFCRELCONNECTSELEMENTS_H
