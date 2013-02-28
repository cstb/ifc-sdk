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

#ifndef IFC2X3_IFCCLASSIFICATION_H
#define IFC2X3_IFCCLASSIFICATION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcCalendarDate;

    /**
     * Generated class for the IfcClassification Entity.
     * 
     */
    class IFC2X3_EXPORT IfcClassification : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'Source'.
         * 
         */
        virtual IfcLabel getSource();
        /**
         * (const) Returns the value of the explicit attribute 'Source'.
         * 
         * @return the value of the explicit attribute 'Source'
         */
        virtual const IfcLabel getSource() const;
        /**
         * Sets the value of the explicit attribute 'Source'.
         * 
         * @param value
         */
        virtual void setSource(const IfcLabel &value);
        /**
         * unset the attribute 'Source'.
         * 
         */
        virtual void unsetSource();
        /**
         * Test if the attribute 'Source' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSource() const;
        /**
         * Gets the value of the explicit attribute 'Edition'.
         * 
         */
        virtual IfcLabel getEdition();
        /**
         * (const) Returns the value of the explicit attribute 'Edition'.
         * 
         * @return the value of the explicit attribute 'Edition'
         */
        virtual const IfcLabel getEdition() const;
        /**
         * Sets the value of the explicit attribute 'Edition'.
         * 
         * @param value
         */
        virtual void setEdition(const IfcLabel &value);
        /**
         * unset the attribute 'Edition'.
         * 
         */
        virtual void unsetEdition();
        /**
         * Test if the attribute 'Edition' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testEdition() const;
        /**
         * Gets the value of the explicit attribute 'EditionDate'.
         * 
         */
        virtual IfcCalendarDate *getEditionDate();
        /**
         * (const) Returns the value of the explicit attribute 'EditionDate'.
         * 
         * @return the value of the explicit attribute 'EditionDate'
         */
        virtual const IfcCalendarDate *getEditionDate() const;
        /**
         * Sets the value of the explicit attribute 'EditionDate'.
         * 
         * @param value
         */
        virtual void setEditionDate(const Step::RefPtr< IfcCalendarDate > &value);
        /**
         * unset the attribute 'EditionDate'.
         * 
         */
        virtual void unsetEditionDate();
        /**
         * Test if the attribute 'EditionDate' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testEditionDate() const;
        /**
         * Gets the value of the explicit attribute 'Name'.
         * 
         */
        virtual IfcLabel getName();
        /**
         * (const) Returns the value of the explicit attribute 'Name'.
         * 
         * @return the value of the explicit attribute 'Name'
         */
        virtual const IfcLabel getName() const;
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        virtual void setName(const IfcLabel &value);
        /**
         * unset the attribute 'Name'.
         * 
         */
        virtual void unsetName();
        /**
         * Test if the attribute 'Name' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testName() const;
        /**
         * Gets the value of the inverse attribute 'Contains'.
         * 
         */
        virtual Inverse_Set_IfcClassificationItem_0_n &getContains();
        /**
         * (const) Returns the value of the explicit attribute 'Contains'.
         * 
         * @return the value of the explicit attribute 'Contains'
         */
        const virtual Inverse_Set_IfcClassificationItem_0_n &getContains() const;
        /**
         * Test if the attribute 'Contains' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testContains() const;
        friend class IfcClassificationItem;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcClassification(Step::Id id, Step::SPFData *args);
        virtual ~IfcClassification();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcClassification &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_source;
        /**
         */
        Step::String m_edition;
        /**
         */
        Step::RefPtr< IfcCalendarDate > m_editionDate;
        /**
         */
        Step::String m_name;
        /**
         */
        Inverse_Set_IfcClassificationItem_0_n m_contains;

    };

}

#endif // IFC2X3_IFCCLASSIFICATION_H
