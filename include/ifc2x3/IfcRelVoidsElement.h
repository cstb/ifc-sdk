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

#ifndef IFC2X3_IFCRELVOIDSELEMENT_H
#define IFC2X3_IFCRELVOIDSELEMENT_H
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
    class IfcElement;
    class IfcFeatureElementSubtraction;

    /**
     * Generated class for the IfcRelVoidsElement Entity.
     * 
     */
    class IFC2X3_EXPORT IfcRelVoidsElement : public IfcRelConnects {
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
         * Gets the value of the explicit attribute 'RelatingBuildingElement'.
         * 
         */
        virtual IfcElement *getRelatingBuildingElement();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingBuildingElement'.
         * 
         * @return the value of the explicit attribute 'RelatingBuildingElement'
         */
        virtual const IfcElement *getRelatingBuildingElement() const;
        /**
         * Sets the value of the explicit attribute 'RelatingBuildingElement'.
         * 
         * @param value
         */
        virtual void setRelatingBuildingElement(const Step::RefPtr< IfcElement > &value);
        /**
         * unset the attribute 'RelatingBuildingElement'.
         * 
         */
        virtual void unsetRelatingBuildingElement();
        /**
         * Test if the attribute 'RelatingBuildingElement' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatingBuildingElement() const;
        /**
         * Gets the value of the explicit attribute 'RelatedOpeningElement'.
         * 
         */
        virtual IfcFeatureElementSubtraction *getRelatedOpeningElement();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedOpeningElement'.
         * 
         * @return the value of the explicit attribute 'RelatedOpeningElement'
         */
        virtual const IfcFeatureElementSubtraction *getRelatedOpeningElement() const;
        /**
         * Sets the value of the explicit attribute 'RelatedOpeningElement'.
         * 
         * @param value
         */
        virtual void setRelatedOpeningElement(const Step::RefPtr< IfcFeatureElementSubtraction > &value);
        /**
         * unset the attribute 'RelatedOpeningElement'.
         * 
         */
        virtual void unsetRelatedOpeningElement();
        /**
         * Test if the attribute 'RelatedOpeningElement' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatedOpeningElement() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelVoidsElement(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelVoidsElement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelVoidsElement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcElement > m_relatingBuildingElement;
        /**
         */
        Step::RefPtr< IfcFeatureElementSubtraction > m_relatedOpeningElement;

    };

}

#endif // IFC2X3_IFCRELVOIDSELEMENT_H
