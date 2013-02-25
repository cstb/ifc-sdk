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

#ifndef IFC2X3_IFCLIGHTSOURCEPOSITIONAL_H
#define IFC2X3_IFCLIGHTSOURCEPOSITIONAL_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcLightSource.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcCartesianPoint;

    /**
     * Generated class for the IfcLightSourcePositional Entity.
     * 
     */
    class IFC2X3_EXPORT IfcLightSourcePositional : public IfcLightSource {
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
         * Gets the value of the explicit attribute 'Position'.
         * 
         */
        virtual IfcCartesianPoint *getPosition();
        /**
         * (const) Returns the value of the explicit attribute 'Position'.
         * 
         * @return the value of the explicit attribute 'Position'
         */
        virtual const IfcCartesianPoint *getPosition() const;
        /**
         * Sets the value of the explicit attribute 'Position'.
         * 
         * @param value
         */
        virtual void setPosition(const Step::RefPtr< IfcCartesianPoint > &value);
        /**
         * unset the attribute 'Position'.
         * 
         */
        virtual void unsetPosition();
        /**
         * Test if the attribute 'Position' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPosition() const;
        /**
         * Gets the value of the explicit attribute 'Radius'.
         * 
         */
        virtual IfcPositiveLengthMeasure getRadius();
        /**
         * (const) Returns the value of the explicit attribute 'Radius'.
         * 
         * @return the value of the explicit attribute 'Radius'
         */
        virtual const IfcPositiveLengthMeasure getRadius() const;
        /**
         * Sets the value of the explicit attribute 'Radius'.
         * 
         * @param value
         */
        virtual void setRadius(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'Radius'.
         * 
         */
        virtual void unsetRadius();
        /**
         * Test if the attribute 'Radius' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRadius() const;
        /**
         * Gets the value of the explicit attribute 'ConstantAttenuation'.
         * 
         */
        virtual IfcReal getConstantAttenuation();
        /**
         * (const) Returns the value of the explicit attribute 'ConstantAttenuation'.
         * 
         * @return the value of the explicit attribute 'ConstantAttenuation'
         */
        virtual const IfcReal getConstantAttenuation() const;
        /**
         * Sets the value of the explicit attribute 'ConstantAttenuation'.
         * 
         * @param value
         */
        virtual void setConstantAttenuation(IfcReal value);
        /**
         * unset the attribute 'ConstantAttenuation'.
         * 
         */
        virtual void unsetConstantAttenuation();
        /**
         * Test if the attribute 'ConstantAttenuation' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testConstantAttenuation() const;
        /**
         * Gets the value of the explicit attribute 'DistanceAttenuation'.
         * 
         */
        virtual IfcReal getDistanceAttenuation();
        /**
         * (const) Returns the value of the explicit attribute 'DistanceAttenuation'.
         * 
         * @return the value of the explicit attribute 'DistanceAttenuation'
         */
        virtual const IfcReal getDistanceAttenuation() const;
        /**
         * Sets the value of the explicit attribute 'DistanceAttenuation'.
         * 
         * @param value
         */
        virtual void setDistanceAttenuation(IfcReal value);
        /**
         * unset the attribute 'DistanceAttenuation'.
         * 
         */
        virtual void unsetDistanceAttenuation();
        /**
         * Test if the attribute 'DistanceAttenuation' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDistanceAttenuation() const;
        /**
         * Gets the value of the explicit attribute 'QuadricAttenuation'.
         * 
         */
        virtual IfcReal getQuadricAttenuation();
        /**
         * (const) Returns the value of the explicit attribute 'QuadricAttenuation'.
         * 
         * @return the value of the explicit attribute 'QuadricAttenuation'
         */
        virtual const IfcReal getQuadricAttenuation() const;
        /**
         * Sets the value of the explicit attribute 'QuadricAttenuation'.
         * 
         * @param value
         */
        virtual void setQuadricAttenuation(IfcReal value);
        /**
         * unset the attribute 'QuadricAttenuation'.
         * 
         */
        virtual void unsetQuadricAttenuation();
        /**
         * Test if the attribute 'QuadricAttenuation' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testQuadricAttenuation() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcLightSourcePositional(Step::Id id, Step::SPFData *args);
        virtual ~IfcLightSourcePositional();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcLightSourcePositional &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcCartesianPoint > m_position;
        /**
         */
        Step::Real m_radius;
        /**
         */
        Step::Real m_constantAttenuation;
        /**
         */
        Step::Real m_distanceAttenuation;
        /**
         */
        Step::Real m_quadricAttenuation;

    };

}

#endif // IFC2X3_IFCLIGHTSOURCEPOSITIONAL_H
