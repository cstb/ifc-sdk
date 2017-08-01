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

#ifndef IFC2X3_IFCPOINTONCURVE_H
#define IFC2X3_IFCPOINTONCURVE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcPoint.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcCurve;

    /**
     * Generated class for the IfcPointOnCurve Entity.
     * 
     */
    class IFC2X3_EXPORT IfcPointOnCurve : public IfcPoint {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        bool acceptVisitor(Step::BaseVisitor *visitor) override;
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        const std::string &type() const override;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        const Step::ClassType &getType() const override;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        bool isOfType(const Step::ClassType &t) const override;
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
         * Gets the value of the explicit attribute 'PointParameter'.
         * 
         */
        virtual IfcParameterValue getPointParameter();
        /**
         * (const) Returns the value of the explicit attribute 'PointParameter'.
         * 
         * @return the value of the explicit attribute 'PointParameter'
         */
        virtual const IfcParameterValue getPointParameter() const;
        /**
         * Sets the value of the explicit attribute 'PointParameter'.
         * 
         * @param value
         */
        virtual void setPointParameter(IfcParameterValue value);
        /**
         * unset the attribute 'PointParameter'.
         * 
         */
        virtual void unsetPointParameter();
        /**
         * Test if the attribute 'PointParameter' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPointParameter() const;
        /**
         * Gets the value of the derived attribute 'Dim'.
         * 
         */
        virtual IfcDimensionCount getDim() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPointOnCurve(Step::Id id, Step::SPFData *args);
        ~IfcPointOnCurve() override;
        /**
         */
        bool init() override;
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPointOnCurve &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcCurve > m_basisCurve;
        /**
         */
        Step::Real m_pointParameter;

    };

}

#endif // IFC2X3_IFCPOINTONCURVE_H
