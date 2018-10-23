#pragma once

// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009-2018 CSTB   
//   
// For further information please contact
//                                       
//         eveBIM-support@cstb.fr        
//   or                                  
//         CSTB DTI/MIC                  
//         290, route des Lucioles       
//         BP 209                        
//         06904 Sophia Antipolis, France
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


#include <ifc2x3/Export.h>

#include <ifc2x3/IfcBoundedCurve.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcTrimmedCurve Entity.
     *
     */
    class IFC2X3_EXPORT IfcTrimmedCurve : public IfcBoundedCurve
    {

        // Attributes
        Step::RefPtr< IfcCurve > m_BasisCurve;
        Set_IfcTrimmingSelect_1_2 m_Trim1;
        Set_IfcTrimmingSelect_1_2 m_Trim2;
        Step::Boolean m_SenseAgreement;
        IfcTrimmingPreference m_MasterRepresentation;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute BasisCurve
        /// @{
        virtual IfcCurve *getBasisCurve();
        virtual const IfcCurve *getBasisCurve() const;
        virtual void setBasisCurve(const Step::RefPtr< IfcCurve > &value);
        virtual void unsetBasisCurve();
        virtual bool testBasisCurve() const;
        /// @}

        /// Attribute Trim1
        /// @{
        virtual Set_IfcTrimmingSelect_1_2 &getTrim1();
        virtual const Set_IfcTrimmingSelect_1_2 &getTrim1() const;
        virtual void setTrim1(const Set_IfcTrimmingSelect_1_2 &value);
        virtual void unsetTrim1();
        virtual bool testTrim1() const;
        /// @}

        /// Attribute Trim2
        /// @{
        virtual Set_IfcTrimmingSelect_1_2 &getTrim2();
        virtual const Set_IfcTrimmingSelect_1_2 &getTrim2() const;
        virtual void setTrim2(const Set_IfcTrimmingSelect_1_2 &value);
        virtual void unsetTrim2();
        virtual bool testTrim2() const;
        /// @}

        /// Attribute SenseAgreement
        /// @{
        virtual Step::Boolean getSenseAgreement();
        virtual Step::Boolean getSenseAgreement() const;
        virtual void setSenseAgreement(Step::Boolean value);
        virtual void unsetSenseAgreement();
        virtual bool testSenseAgreement() const;
        /// @}

        /// Attribute MasterRepresentation
        /// @{
        virtual IfcTrimmingPreference getMasterRepresentation();
        virtual IfcTrimmingPreference getMasterRepresentation() const;
        virtual void setMasterRepresentation(IfcTrimmingPreference value);
        virtual void unsetMasterRepresentation();
        virtual bool testMasterRepresentation() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcTrimmedCurve(Step::Id id, Step::SPFData *args);
        virtual ~IfcTrimmedCurve();

        virtual bool init();

        virtual void copy(const IfcTrimmedCurve &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3