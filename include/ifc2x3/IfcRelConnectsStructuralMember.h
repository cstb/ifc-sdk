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

#ifndef IFC2X3_IFCRELCONNECTSSTRUCTURALMEMBER_H
#define IFC2X3_IFCRELCONNECTSSTRUCTURALMEMBER_H
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
    class IfcAxis2Placement3D;
    class IfcBoundaryCondition;
    class IfcStructuralConnection;
    class IfcStructuralConnectionCondition;
    class IfcStructuralMember;

    /**
     * Generated class for the IfcRelConnectsStructuralMember Entity.
     * 
     */
    class IFC2X3_EXPORT IfcRelConnectsStructuralMember : public IfcRelConnects {
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
         * Gets the value of the explicit attribute 'RelatingStructuralMember'.
         * 
         */
        virtual IfcStructuralMember *getRelatingStructuralMember();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingStructuralMember'.
         * 
         * @return the value of the explicit attribute 'RelatingStructuralMember'
         */
        virtual const IfcStructuralMember *getRelatingStructuralMember() const;
        /**
         * Sets the value of the explicit attribute 'RelatingStructuralMember'.
         * 
         * @param value
         */
        virtual void setRelatingStructuralMember(const Step::RefPtr< IfcStructuralMember > &value);
        /**
         * unset the attribute 'RelatingStructuralMember'.
         * 
         */
        virtual void unsetRelatingStructuralMember();
        /**
         * Test if the attribute 'RelatingStructuralMember' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatingStructuralMember() const;
        /**
         * Gets the value of the explicit attribute 'RelatedStructuralConnection'.
         * 
         */
        virtual IfcStructuralConnection *getRelatedStructuralConnection();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedStructuralConnection'.
         * 
         * @return the value of the explicit attribute 'RelatedStructuralConnection'
         */
        virtual const IfcStructuralConnection *getRelatedStructuralConnection() const;
        /**
         * Sets the value of the explicit attribute 'RelatedStructuralConnection'.
         * 
         * @param value
         */
        virtual void setRelatedStructuralConnection(const Step::RefPtr< IfcStructuralConnection > &value);
        /**
         * unset the attribute 'RelatedStructuralConnection'.
         * 
         */
        virtual void unsetRelatedStructuralConnection();
        /**
         * Test if the attribute 'RelatedStructuralConnection' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatedStructuralConnection() const;
        /**
         * Gets the value of the explicit attribute 'AppliedCondition'.
         * 
         */
        virtual IfcBoundaryCondition *getAppliedCondition();
        /**
         * (const) Returns the value of the explicit attribute 'AppliedCondition'.
         * 
         * @return the value of the explicit attribute 'AppliedCondition'
         */
        virtual const IfcBoundaryCondition *getAppliedCondition() const;
        /**
         * Sets the value of the explicit attribute 'AppliedCondition'.
         * 
         * @param value
         */
        virtual void setAppliedCondition(const Step::RefPtr< IfcBoundaryCondition > &value);
        /**
         * unset the attribute 'AppliedCondition'.
         * 
         */
        virtual void unsetAppliedCondition();
        /**
         * Test if the attribute 'AppliedCondition' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testAppliedCondition() const;
        /**
         * Gets the value of the explicit attribute 'AdditionalConditions'.
         * 
         */
        virtual IfcStructuralConnectionCondition *getAdditionalConditions();
        /**
         * (const) Returns the value of the explicit attribute 'AdditionalConditions'.
         * 
         * @return the value of the explicit attribute 'AdditionalConditions'
         */
        virtual const IfcStructuralConnectionCondition *getAdditionalConditions() const;
        /**
         * Sets the value of the explicit attribute 'AdditionalConditions'.
         * 
         * @param value
         */
        virtual void setAdditionalConditions(const Step::RefPtr< IfcStructuralConnectionCondition > &value);
        /**
         * unset the attribute 'AdditionalConditions'.
         * 
         */
        virtual void unsetAdditionalConditions();
        /**
         * Test if the attribute 'AdditionalConditions' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testAdditionalConditions() const;
        /**
         * Gets the value of the explicit attribute 'SupportedLength'.
         * 
         */
        virtual IfcLengthMeasure getSupportedLength();
        /**
         * (const) Returns the value of the explicit attribute 'SupportedLength'.
         * 
         * @return the value of the explicit attribute 'SupportedLength'
         */
        virtual const IfcLengthMeasure getSupportedLength() const;
        /**
         * Sets the value of the explicit attribute 'SupportedLength'.
         * 
         * @param value
         */
        virtual void setSupportedLength(IfcLengthMeasure value);
        /**
         * unset the attribute 'SupportedLength'.
         * 
         */
        virtual void unsetSupportedLength();
        /**
         * Test if the attribute 'SupportedLength' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSupportedLength() const;
        /**
         * Gets the value of the explicit attribute 'ConditionCoordinateSystem'.
         * 
         */
        virtual IfcAxis2Placement3D *getConditionCoordinateSystem();
        /**
         * (const) Returns the value of the explicit attribute 'ConditionCoordinateSystem'.
         * 
         * @return the value of the explicit attribute 'ConditionCoordinateSystem'
         */
        virtual const IfcAxis2Placement3D *getConditionCoordinateSystem() const;
        /**
         * Sets the value of the explicit attribute 'ConditionCoordinateSystem'.
         * 
         * @param value
         */
        virtual void setConditionCoordinateSystem(const Step::RefPtr< IfcAxis2Placement3D > &value);
        /**
         * unset the attribute 'ConditionCoordinateSystem'.
         * 
         */
        virtual void unsetConditionCoordinateSystem();
        /**
         * Test if the attribute 'ConditionCoordinateSystem' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testConditionCoordinateSystem() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelConnectsStructuralMember(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelConnectsStructuralMember();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelConnectsStructuralMember &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcStructuralMember > m_relatingStructuralMember;
        /**
         */
        Step::RefPtr< IfcStructuralConnection > m_relatedStructuralConnection;
        /**
         */
        Step::RefPtr< IfcBoundaryCondition > m_appliedCondition;
        /**
         */
        Step::RefPtr< IfcStructuralConnectionCondition > m_additionalConditions;
        /**
         */
        Step::Real m_supportedLength;
        /**
         */
        Step::RefPtr< IfcAxis2Placement3D > m_conditionCoordinateSystem;

    };

}

#endif // IFC2X3_IFCRELCONNECTSSTRUCTURALMEMBER_H
