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

#ifndef IFC2X3_IFCSTRUCTURALLOADGROUP_H
#define IFC2X3_IFCSTRUCTURALLOADGROUP_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcGroup.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcStructuralLoadGroup Entity.
     * 
     */
    class IFC2X3_EXPORT IfcStructuralLoadGroup : public IfcGroup {
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
         * Gets the value of the explicit attribute 'PredefinedType'.
         * 
         */
        virtual IfcLoadGroupTypeEnum getPredefinedType();
        /**
         * (const) Returns the value of the explicit attribute 'PredefinedType'.
         * 
         * @return the value of the explicit attribute 'PredefinedType'
         */
        virtual const IfcLoadGroupTypeEnum getPredefinedType() const;
        /**
         * Sets the value of the explicit attribute 'PredefinedType'.
         * 
         * @param value
         */
        virtual void setPredefinedType(IfcLoadGroupTypeEnum value);
        /**
         * unset the attribute 'PredefinedType'.
         * 
         */
        virtual void unsetPredefinedType();
        /**
         * Test if the attribute 'PredefinedType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPredefinedType() const;
        /**
         * Gets the value of the explicit attribute 'ActionType'.
         * 
         */
        virtual IfcActionTypeEnum getActionType();
        /**
         * (const) Returns the value of the explicit attribute 'ActionType'.
         * 
         * @return the value of the explicit attribute 'ActionType'
         */
        virtual const IfcActionTypeEnum getActionType() const;
        /**
         * Sets the value of the explicit attribute 'ActionType'.
         * 
         * @param value
         */
        virtual void setActionType(IfcActionTypeEnum value);
        /**
         * unset the attribute 'ActionType'.
         * 
         */
        virtual void unsetActionType();
        /**
         * Test if the attribute 'ActionType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testActionType() const;
        /**
         * Gets the value of the explicit attribute 'ActionSource'.
         * 
         */
        virtual IfcActionSourceTypeEnum getActionSource();
        /**
         * (const) Returns the value of the explicit attribute 'ActionSource'.
         * 
         * @return the value of the explicit attribute 'ActionSource'
         */
        virtual const IfcActionSourceTypeEnum getActionSource() const;
        /**
         * Sets the value of the explicit attribute 'ActionSource'.
         * 
         * @param value
         */
        virtual void setActionSource(IfcActionSourceTypeEnum value);
        /**
         * unset the attribute 'ActionSource'.
         * 
         */
        virtual void unsetActionSource();
        /**
         * Test if the attribute 'ActionSource' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testActionSource() const;
        /**
         * Gets the value of the explicit attribute 'Coefficient'.
         * 
         */
        virtual IfcRatioMeasure getCoefficient();
        /**
         * (const) Returns the value of the explicit attribute 'Coefficient'.
         * 
         * @return the value of the explicit attribute 'Coefficient'
         */
        virtual const IfcRatioMeasure getCoefficient() const;
        /**
         * Sets the value of the explicit attribute 'Coefficient'.
         * 
         * @param value
         */
        virtual void setCoefficient(IfcRatioMeasure value);
        /**
         * unset the attribute 'Coefficient'.
         * 
         */
        virtual void unsetCoefficient();
        /**
         * Test if the attribute 'Coefficient' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCoefficient() const;
        /**
         * Gets the value of the explicit attribute 'Purpose'.
         * 
         */
        virtual IfcLabel getPurpose();
        /**
         * (const) Returns the value of the explicit attribute 'Purpose'.
         * 
         * @return the value of the explicit attribute 'Purpose'
         */
        virtual const IfcLabel getPurpose() const;
        /**
         * Sets the value of the explicit attribute 'Purpose'.
         * 
         * @param value
         */
        virtual void setPurpose(const IfcLabel &value);
        /**
         * unset the attribute 'Purpose'.
         * 
         */
        virtual void unsetPurpose();
        /**
         * Test if the attribute 'Purpose' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPurpose() const;
        /**
         * Gets the value of the inverse attribute 'SourceOfResultGroup'.
         * 
         */
        virtual Inverse_Set_IfcStructuralResultGroup_0_1 &getSourceOfResultGroup();
        /**
         * (const) Returns the value of the explicit attribute 'SourceOfResultGroup'.
         * 
         * @return the value of the explicit attribute 'SourceOfResultGroup'
         */
        const virtual Inverse_Set_IfcStructuralResultGroup_0_1 &getSourceOfResultGroup() const;
        /**
         * Test if the attribute 'SourceOfResultGroup' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSourceOfResultGroup() const;
        /**
         * Gets the value of the inverse attribute 'LoadGroupFor'.
         * 
         */
        virtual Inverse_Set_IfcStructuralAnalysisModel_0_n &getLoadGroupFor();
        /**
         * (const) Returns the value of the explicit attribute 'LoadGroupFor'.
         * 
         * @return the value of the explicit attribute 'LoadGroupFor'
         */
        const virtual Inverse_Set_IfcStructuralAnalysisModel_0_n &getLoadGroupFor() const;
        /**
         * Test if the attribute 'LoadGroupFor' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLoadGroupFor() const;
        friend class IfcStructuralResultGroup;
        friend class IfcStructuralAnalysisModel;
        friend class ExpressDataSet;
        friend class Inverted_IfcStructuralAnalysisModel_LoadedBy_type;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralLoadGroup(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralLoadGroup();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralLoadGroup &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcLoadGroupTypeEnum m_predefinedType;
        /**
         */
        IfcActionTypeEnum m_actionType;
        /**
         */
        IfcActionSourceTypeEnum m_actionSource;
        /**
         */
        Step::Real m_coefficient;
        /**
         */
        Step::String m_purpose;
        /**
         */
        Inverse_Set_IfcStructuralResultGroup_0_1 m_sourceOfResultGroup;
        /**
         */
        Inverse_Set_IfcStructuralAnalysisModel_0_n m_loadGroupFor;

    };

}

#endif // IFC2X3_IFCSTRUCTURALLOADGROUP_H
