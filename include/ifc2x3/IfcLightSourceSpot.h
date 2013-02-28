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

#ifndef IFC2X3_IFCLIGHTSOURCESPOT_H
#define IFC2X3_IFCLIGHTSOURCESPOT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcLightSourcePositional.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcDirection;

    /**
     * Generated class for the IfcLightSourceSpot Entity.
     * 
     */
    class IFC2X3_EXPORT IfcLightSourceSpot : public IfcLightSourcePositional {
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
         * Gets the value of the explicit attribute 'Orientation'.
         * 
         */
        virtual IfcDirection *getOrientation();
        /**
         * (const) Returns the value of the explicit attribute 'Orientation'.
         * 
         * @return the value of the explicit attribute 'Orientation'
         */
        virtual const IfcDirection *getOrientation() const;
        /**
         * Sets the value of the explicit attribute 'Orientation'.
         * 
         * @param value
         */
        virtual void setOrientation(const Step::RefPtr< IfcDirection > &value);
        /**
         * unset the attribute 'Orientation'.
         * 
         */
        virtual void unsetOrientation();
        /**
         * Test if the attribute 'Orientation' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testOrientation() const;
        /**
         * Gets the value of the explicit attribute 'ConcentrationExponent'.
         * 
         */
        virtual IfcReal getConcentrationExponent();
        /**
         * (const) Returns the value of the explicit attribute 'ConcentrationExponent'.
         * 
         * @return the value of the explicit attribute 'ConcentrationExponent'
         */
        virtual const IfcReal getConcentrationExponent() const;
        /**
         * Sets the value of the explicit attribute 'ConcentrationExponent'.
         * 
         * @param value
         */
        virtual void setConcentrationExponent(IfcReal value);
        /**
         * unset the attribute 'ConcentrationExponent'.
         * 
         */
        virtual void unsetConcentrationExponent();
        /**
         * Test if the attribute 'ConcentrationExponent' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testConcentrationExponent() const;
        /**
         * Gets the value of the explicit attribute 'SpreadAngle'.
         * 
         */
        virtual IfcPositivePlaneAngleMeasure getSpreadAngle();
        /**
         * (const) Returns the value of the explicit attribute 'SpreadAngle'.
         * 
         * @return the value of the explicit attribute 'SpreadAngle'
         */
        virtual const IfcPositivePlaneAngleMeasure getSpreadAngle() const;
        /**
         * Sets the value of the explicit attribute 'SpreadAngle'.
         * 
         * @param value
         */
        virtual void setSpreadAngle(IfcPositivePlaneAngleMeasure value);
        /**
         * unset the attribute 'SpreadAngle'.
         * 
         */
        virtual void unsetSpreadAngle();
        /**
         * Test if the attribute 'SpreadAngle' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSpreadAngle() const;
        /**
         * Gets the value of the explicit attribute 'BeamWidthAngle'.
         * 
         */
        virtual IfcPositivePlaneAngleMeasure getBeamWidthAngle();
        /**
         * (const) Returns the value of the explicit attribute 'BeamWidthAngle'.
         * 
         * @return the value of the explicit attribute 'BeamWidthAngle'
         */
        virtual const IfcPositivePlaneAngleMeasure getBeamWidthAngle() const;
        /**
         * Sets the value of the explicit attribute 'BeamWidthAngle'.
         * 
         * @param value
         */
        virtual void setBeamWidthAngle(IfcPositivePlaneAngleMeasure value);
        /**
         * unset the attribute 'BeamWidthAngle'.
         * 
         */
        virtual void unsetBeamWidthAngle();
        /**
         * Test if the attribute 'BeamWidthAngle' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testBeamWidthAngle() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcLightSourceSpot(Step::Id id, Step::SPFData *args);
        virtual ~IfcLightSourceSpot();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcLightSourceSpot &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcDirection > m_orientation;
        /**
         */
        Step::Real m_concentrationExponent;
        /**
         */
        Step::Real m_spreadAngle;
        /**
         */
        Step::Real m_beamWidthAngle;

    };

}

#endif // IFC2X3_IFCLIGHTSOURCESPOT_H
