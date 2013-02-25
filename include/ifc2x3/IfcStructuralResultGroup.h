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

#ifndef IFC2X3_IFCSTRUCTURALRESULTGROUP_H
#define IFC2X3_IFCSTRUCTURALRESULTGROUP_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcGroup.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcStructuralLoadGroup;

    /**
     * Generated class for the IfcStructuralResultGroup Entity.
     * 
     */
    class IFC2X3_EXPORT IfcStructuralResultGroup : public IfcGroup {
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
         * Gets the value of the explicit attribute 'TheoryType'.
         * 
         */
        virtual IfcAnalysisTheoryTypeEnum getTheoryType();
        /**
         * (const) Returns the value of the explicit attribute 'TheoryType'.
         * 
         * @return the value of the explicit attribute 'TheoryType'
         */
        virtual const IfcAnalysisTheoryTypeEnum getTheoryType() const;
        /**
         * Sets the value of the explicit attribute 'TheoryType'.
         * 
         * @param value
         */
        virtual void setTheoryType(IfcAnalysisTheoryTypeEnum value);
        /**
         * unset the attribute 'TheoryType'.
         * 
         */
        virtual void unsetTheoryType();
        /**
         * Test if the attribute 'TheoryType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTheoryType() const;
        /**
         * Gets the value of the explicit attribute 'ResultForLoadGroup'.
         * 
         */
        virtual IfcStructuralLoadGroup *getResultForLoadGroup();
        /**
         * (const) Returns the value of the explicit attribute 'ResultForLoadGroup'.
         * 
         * @return the value of the explicit attribute 'ResultForLoadGroup'
         */
        virtual const IfcStructuralLoadGroup *getResultForLoadGroup() const;
        /**
         * Sets the value of the explicit attribute 'ResultForLoadGroup'.
         * 
         * @param value
         */
        virtual void setResultForLoadGroup(const Step::RefPtr< IfcStructuralLoadGroup > &value);
        /**
         * unset the attribute 'ResultForLoadGroup'.
         * 
         */
        virtual void unsetResultForLoadGroup();
        /**
         * Test if the attribute 'ResultForLoadGroup' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testResultForLoadGroup() const;
        /**
         * Gets the value of the explicit attribute 'IsLinear'.
         * 
         */
        virtual Step::Boolean getIsLinear();
        /**
         * (const) Returns the value of the explicit attribute 'IsLinear'.
         * 
         * @return the value of the explicit attribute 'IsLinear'
         */
        virtual const Step::Boolean getIsLinear() const;
        /**
         * Sets the value of the explicit attribute 'IsLinear'.
         * 
         * @param value
         */
        virtual void setIsLinear(Step::Boolean value);
        /**
         * unset the attribute 'IsLinear'.
         * 
         */
        virtual void unsetIsLinear();
        /**
         * Test if the attribute 'IsLinear' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIsLinear() const;
        /**
         * Gets the value of the inverse attribute 'ResultGroupFor'.
         * 
         */
        virtual Inverse_Set_IfcStructuralAnalysisModel_0_1 &getResultGroupFor();
        /**
         * (const) Returns the value of the explicit attribute 'ResultGroupFor'.
         * 
         * @return the value of the explicit attribute 'ResultGroupFor'
         */
        const virtual Inverse_Set_IfcStructuralAnalysisModel_0_1 &getResultGroupFor() const;
        /**
         * Test if the attribute 'ResultGroupFor' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testResultGroupFor() const;
        friend class IfcStructuralAnalysisModel;
        friend class ExpressDataSet;
        friend class Inverted_IfcStructuralAnalysisModel_HasResults_type;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralResultGroup(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralResultGroup();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralResultGroup &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcAnalysisTheoryTypeEnum m_theoryType;
        /**
         */
        Step::RefPtr< IfcStructuralLoadGroup > m_resultForLoadGroup;
        /**
         */
        Step::Boolean m_isLinear;
        /**
         */
        Inverse_Set_IfcStructuralAnalysisModel_0_1 m_resultGroupFor;

    };

}

#endif // IFC2X3_IFCSTRUCTURALRESULTGROUP_H
