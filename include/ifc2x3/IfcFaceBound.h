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

#ifndef IFC2X3_IFCFACEBOUND_H
#define IFC2X3_IFCFACEBOUND_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcTopologicalRepresentationItem.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcLoop;

    /**
     * Generated class for the IfcFaceBound Entity.
     * 
     */
    class IFC2X3_EXPORT IfcFaceBound : public IfcTopologicalRepresentationItem {
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
         * Gets the value of the explicit attribute 'Bound'.
         * 
         */
        virtual IfcLoop *getBound();
        /**
         * (const) Returns the value of the explicit attribute 'Bound'.
         * 
         * @return the value of the explicit attribute 'Bound'
         */
        virtual const IfcLoop *getBound() const;
        /**
         * Sets the value of the explicit attribute 'Bound'.
         * 
         * @param value
         */
        virtual void setBound(const Step::RefPtr< IfcLoop > &value);
        /**
         * unset the attribute 'Bound'.
         * 
         */
        virtual void unsetBound();
        /**
         * Test if the attribute 'Bound' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testBound() const;
        /**
         * Gets the value of the explicit attribute 'Orientation'.
         * 
         */
        virtual Step::Boolean getOrientation();
        /**
         * (const) Returns the value of the explicit attribute 'Orientation'.
         * 
         * @return the value of the explicit attribute 'Orientation'
         */
        virtual const Step::Boolean getOrientation() const;
        /**
         * Sets the value of the explicit attribute 'Orientation'.
         * 
         * @param value
         */
        virtual void setOrientation(Step::Boolean value);
        /**
         * unset the attribute 'Orientation'.
         * 
         */
        virtual void unsetOrientation();
        /**
         * Test if the attribute 'Orientation' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testOrientation() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcFaceBound(Step::Id id, Step::SPFData *args);
        virtual ~IfcFaceBound();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcFaceBound &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcLoop > m_bound;
        /**
         */
        Step::Boolean m_orientation;

    };

}

#endif // IFC2X3_IFCFACEBOUND_H
