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

#ifndef IFC2X3_IFCCURVEBOUNDEDPLANE_H
#define IFC2X3_IFCCURVEBOUNDEDPLANE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcBoundedSurface.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcCurve;
    class IfcPlane;

    /**
     * Generated class for the IfcCurveBoundedPlane Entity.
     * 
     */
    class IFC2X3_EXPORT IfcCurveBoundedPlane : public IfcBoundedSurface {
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
         * Gets the value of the explicit attribute 'BasisSurface'.
         * 
         */
        virtual IfcPlane *getBasisSurface();
        /**
         * (const) Returns the value of the explicit attribute 'BasisSurface'.
         * 
         * @return the value of the explicit attribute 'BasisSurface'
         */
        virtual const IfcPlane *getBasisSurface() const;
        /**
         * Sets the value of the explicit attribute 'BasisSurface'.
         * 
         * @param value
         */
        virtual void setBasisSurface(const Step::RefPtr< IfcPlane > &value);
        /**
         * unset the attribute 'BasisSurface'.
         * 
         */
        virtual void unsetBasisSurface();
        /**
         * Test if the attribute 'BasisSurface' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testBasisSurface() const;
        /**
         * Gets the value of the explicit attribute 'OuterBoundary'.
         * 
         */
        virtual IfcCurve *getOuterBoundary();
        /**
         * (const) Returns the value of the explicit attribute 'OuterBoundary'.
         * 
         * @return the value of the explicit attribute 'OuterBoundary'
         */
        virtual const IfcCurve *getOuterBoundary() const;
        /**
         * Sets the value of the explicit attribute 'OuterBoundary'.
         * 
         * @param value
         */
        virtual void setOuterBoundary(const Step::RefPtr< IfcCurve > &value);
        /**
         * unset the attribute 'OuterBoundary'.
         * 
         */
        virtual void unsetOuterBoundary();
        /**
         * Test if the attribute 'OuterBoundary' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testOuterBoundary() const;
        /**
         * Gets the value of the explicit attribute 'InnerBoundaries'.
         * 
         */
        virtual Set_IfcCurve_0_n &getInnerBoundaries();
        /**
         * (const) Returns the value of the explicit attribute 'InnerBoundaries'.
         * 
         * @return the value of the explicit attribute 'InnerBoundaries'
         */
        virtual const Set_IfcCurve_0_n &getInnerBoundaries() const;
        /**
         * Sets the value of the explicit attribute 'InnerBoundaries'.
         * 
         * @param value
         */
        virtual void setInnerBoundaries(const Set_IfcCurve_0_n &value);
        /**
         * unset the attribute 'InnerBoundaries'.
         * 
         */
        virtual void unsetInnerBoundaries();
        /**
         * Test if the attribute 'InnerBoundaries' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testInnerBoundaries() const;
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
        IfcCurveBoundedPlane(Step::Id id, Step::SPFData *args);
        ~IfcCurveBoundedPlane() override;
        /**
         */
        bool init() override;
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCurveBoundedPlane &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcPlane > m_basisSurface;
        /**
         */
        Step::RefPtr< IfcCurve > m_outerBoundary;
        /**
         */
        Set_IfcCurve_0_n m_innerBoundaries;

    };

}

#endif // IFC2X3_IFCCURVEBOUNDEDPLANE_H
