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

#ifndef IFC2X3_IFCOFFSETCURVE3D_H
#define IFC2X3_IFCOFFSETCURVE3D_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcCurve.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcDirection;

    /**
     * Generated class for the IfcOffsetCurve3D Entity.
     * 
     */
    class IFC2X3_EXPORT IfcOffsetCurve3D : public IfcCurve {
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
         * Gets the value of the explicit attribute 'Distance'.
         * 
         */
        virtual IfcLengthMeasure getDistance();
        /**
         * (const) Returns the value of the explicit attribute 'Distance'.
         * 
         * @return the value of the explicit attribute 'Distance'
         */
        virtual const IfcLengthMeasure getDistance() const;
        /**
         * Sets the value of the explicit attribute 'Distance'.
         * 
         * @param value
         */
        virtual void setDistance(IfcLengthMeasure value);
        /**
         * unset the attribute 'Distance'.
         * 
         */
        virtual void unsetDistance();
        /**
         * Test if the attribute 'Distance' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDistance() const;
        /**
         * Gets the value of the explicit attribute 'SelfIntersect'.
         * 
         */
        virtual Step::Logical getSelfIntersect();
        /**
         * (const) Returns the value of the explicit attribute 'SelfIntersect'.
         * 
         * @return the value of the explicit attribute 'SelfIntersect'
         */
        virtual const Step::Logical getSelfIntersect() const;
        /**
         * Sets the value of the explicit attribute 'SelfIntersect'.
         * 
         * @param value
         */
        virtual void setSelfIntersect(Step::Logical value);
        /**
         * unset the attribute 'SelfIntersect'.
         * 
         */
        virtual void unsetSelfIntersect();
        /**
         * Test if the attribute 'SelfIntersect' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSelfIntersect() const;
        /**
         * Gets the value of the explicit attribute 'RefDirection'.
         * 
         */
        virtual IfcDirection *getRefDirection();
        /**
         * (const) Returns the value of the explicit attribute 'RefDirection'.
         * 
         * @return the value of the explicit attribute 'RefDirection'
         */
        virtual const IfcDirection *getRefDirection() const;
        /**
         * Sets the value of the explicit attribute 'RefDirection'.
         * 
         * @param value
         */
        virtual void setRefDirection(const Step::RefPtr< IfcDirection > &value);
        /**
         * unset the attribute 'RefDirection'.
         * 
         */
        virtual void unsetRefDirection();
        /**
         * Test if the attribute 'RefDirection' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRefDirection() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcOffsetCurve3D(Step::Id id, Step::SPFData *args);
        virtual ~IfcOffsetCurve3D();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcOffsetCurve3D &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcCurve > m_basisCurve;
        /**
         */
        Step::Real m_distance;
        /**
         */
        Step::Logical m_selfIntersect;
        /**
         */
        Step::RefPtr< IfcDirection > m_refDirection;

    };

}

#endif // IFC2X3_IFCOFFSETCURVE3D_H
