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

#ifndef IFC2X3_IFCTRIMMEDCURVE_H
#define IFC2X3_IFCTRIMMEDCURVE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcBoundedCurve.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcCurve;

    /**
     * Generated class for the IfcTrimmedCurve Entity.
     * 
     */
    class IFC2X3_EXPORT IfcTrimmedCurve : public IfcBoundedCurve {
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
         * Gets the value of the explicit attribute 'BasisCurve'.
         * 
         */
        virtual IfcCurve *getBasisCurve();
        /**
         * (const) Returns the value of the explicit attribute 'BasisCurve'.
         * 
         * @return the value of the explicit attribute 'BasisCurve'
         */
        virtual const IfcCurve *getBasisCurve() const;
        /**
         * Sets the value of the explicit attribute 'BasisCurve'.
         * 
         * @param value
         */
        virtual void setBasisCurve(const Step::RefPtr< IfcCurve > &value);
        /**
         * unset the attribute 'BasisCurve'.
         * 
         */
        virtual void unsetBasisCurve();
        /**
         * Test if the attribute 'BasisCurve' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testBasisCurve() const;
        /**
         * Gets the value of the explicit attribute 'Trim1'.
         * 
         */
        virtual Set_IfcTrimmingSelect_1_2 &getTrim1();
        /**
         * (const) Returns the value of the explicit attribute 'Trim1'.
         * 
         * @return the value of the explicit attribute 'Trim1'
         */
        virtual const Set_IfcTrimmingSelect_1_2 &getTrim1() const;
        /**
         * Sets the value of the explicit attribute 'Trim1'.
         * 
         * @param value
         */
        virtual void setTrim1(const Set_IfcTrimmingSelect_1_2 &value);
        /**
         * unset the attribute 'Trim1'.
         * 
         */
        virtual void unsetTrim1();
        /**
         * Test if the attribute 'Trim1' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTrim1() const;
        /**
         * Gets the value of the explicit attribute 'Trim2'.
         * 
         */
        virtual Set_IfcTrimmingSelect_1_2 &getTrim2();
        /**
         * (const) Returns the value of the explicit attribute 'Trim2'.
         * 
         * @return the value of the explicit attribute 'Trim2'
         */
        virtual const Set_IfcTrimmingSelect_1_2 &getTrim2() const;
        /**
         * Sets the value of the explicit attribute 'Trim2'.
         * 
         * @param value
         */
        virtual void setTrim2(const Set_IfcTrimmingSelect_1_2 &value);
        /**
         * unset the attribute 'Trim2'.
         * 
         */
        virtual void unsetTrim2();
        /**
         * Test if the attribute 'Trim2' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTrim2() const;
        /**
         * Gets the value of the explicit attribute 'SenseAgreement'.
         * 
         */
        virtual Step::Boolean getSenseAgreement();
        /**
         * (const) Returns the value of the explicit attribute 'SenseAgreement'.
         * 
         * @return the value of the explicit attribute 'SenseAgreement'
         */
        virtual const Step::Boolean getSenseAgreement() const;
        /**
         * Sets the value of the explicit attribute 'SenseAgreement'.
         * 
         * @param value
         */
        virtual void setSenseAgreement(Step::Boolean value);
        /**
         * unset the attribute 'SenseAgreement'.
         * 
         */
        virtual void unsetSenseAgreement();
        /**
         * Test if the attribute 'SenseAgreement' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSenseAgreement() const;
        /**
         * Gets the value of the explicit attribute 'MasterRepresentation'.
         * 
         */
        virtual IfcTrimmingPreference getMasterRepresentation();
        /**
         * (const) Returns the value of the explicit attribute 'MasterRepresentation'.
         * 
         * @return the value of the explicit attribute 'MasterRepresentation'
         */
        virtual const IfcTrimmingPreference getMasterRepresentation() const;
        /**
         * Sets the value of the explicit attribute 'MasterRepresentation'.
         * 
         * @param value
         */
        virtual void setMasterRepresentation(IfcTrimmingPreference value);
        /**
         * unset the attribute 'MasterRepresentation'.
         * 
         */
        virtual void unsetMasterRepresentation();
        /**
         * Test if the attribute 'MasterRepresentation' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMasterRepresentation() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTrimmedCurve(Step::Id id, Step::SPFData *args);
        virtual ~IfcTrimmedCurve();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTrimmedCurve &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcCurve > m_basisCurve;
        /**
         */
        Set_IfcTrimmingSelect_1_2 m_trim1;
        /**
         */
        Set_IfcTrimmingSelect_1_2 m_trim2;
        /**
         */
        Step::Boolean m_senseAgreement;
        /**
         */
        IfcTrimmingPreference m_masterRepresentation;

    };

}

#endif // IFC2X3_IFCTRIMMEDCURVE_H
