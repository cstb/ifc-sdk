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

#ifndef IFC2X3_IFCDERIVEDPROFILEDEF_H
#define IFC2X3_IFCDERIVEDPROFILEDEF_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcProfileDef.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcCartesianTransformationOperator2D;

    /**
     * Generated class for the IfcDerivedProfileDef Entity.
     * 
     */
    class IFC2X3_EXPORT IfcDerivedProfileDef : public IfcProfileDef {
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
         * Gets the value of the explicit attribute 'ParentProfile'.
         * 
         */
        virtual IfcProfileDef *getParentProfile();
        /**
         * (const) Returns the value of the explicit attribute 'ParentProfile'.
         * 
         * @return the value of the explicit attribute 'ParentProfile'
         */
        virtual const IfcProfileDef *getParentProfile() const;
        /**
         * Sets the value of the explicit attribute 'ParentProfile'.
         * 
         * @param value
         */
        virtual void setParentProfile(const Step::RefPtr< IfcProfileDef > &value);
        /**
         * unset the attribute 'ParentProfile'.
         * 
         */
        virtual void unsetParentProfile();
        /**
         * Test if the attribute 'ParentProfile' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testParentProfile() const;
        /**
         * Gets the value of the explicit attribute 'Operator'.
         * 
         */
        virtual IfcCartesianTransformationOperator2D *getOperator();
        /**
         * (const) Returns the value of the explicit attribute 'Operator'.
         * 
         * @return the value of the explicit attribute 'Operator'
         */
        virtual const IfcCartesianTransformationOperator2D *getOperator() const;
        /**
         * Sets the value of the explicit attribute 'Operator'.
         * 
         * @param value
         */
        virtual void setOperator(const Step::RefPtr< IfcCartesianTransformationOperator2D > &value);
        /**
         * unset the attribute 'Operator'.
         * 
         */
        virtual void unsetOperator();
        /**
         * Test if the attribute 'Operator' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testOperator() const;
        /**
         * Gets the value of the explicit attribute 'Label'.
         * 
         */
        virtual IfcLabel getLabel();
        /**
         * (const) Returns the value of the explicit attribute 'Label'.
         * 
         * @return the value of the explicit attribute 'Label'
         */
        virtual const IfcLabel getLabel() const;
        /**
         * Sets the value of the explicit attribute 'Label'.
         * 
         * @param value
         */
        virtual void setLabel(const IfcLabel &value);
        /**
         * unset the attribute 'Label'.
         * 
         */
        virtual void unsetLabel();
        /**
         * Test if the attribute 'Label' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLabel() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcDerivedProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcDerivedProfileDef();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDerivedProfileDef &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcProfileDef > m_parentProfile;
        /**
         */
        Step::RefPtr< IfcCartesianTransformationOperator2D > m_operator;
        /**
         */
        Step::String m_label;

    };

}

#endif // IFC2X3_IFCDERIVEDPROFILEDEF_H
