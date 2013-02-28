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

#ifndef IFC2X3_IFCCSHAPEPROFILEDEF_H
#define IFC2X3_IFCCSHAPEPROFILEDEF_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcParameterizedProfileDef.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcCShapeProfileDef Entity.
     * 
     */
    class IFC2X3_EXPORT IfcCShapeProfileDef : public IfcParameterizedProfileDef {
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
         * Gets the value of the explicit attribute 'Depth'.
         * 
         */
        virtual IfcPositiveLengthMeasure getDepth();
        /**
         * (const) Returns the value of the explicit attribute 'Depth'.
         * 
         * @return the value of the explicit attribute 'Depth'
         */
        virtual const IfcPositiveLengthMeasure getDepth() const;
        /**
         * Sets the value of the explicit attribute 'Depth'.
         * 
         * @param value
         */
        virtual void setDepth(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'Depth'.
         * 
         */
        virtual void unsetDepth();
        /**
         * Test if the attribute 'Depth' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDepth() const;
        /**
         * Gets the value of the explicit attribute 'Width'.
         * 
         */
        virtual IfcPositiveLengthMeasure getWidth();
        /**
         * (const) Returns the value of the explicit attribute 'Width'.
         * 
         * @return the value of the explicit attribute 'Width'
         */
        virtual const IfcPositiveLengthMeasure getWidth() const;
        /**
         * Sets the value of the explicit attribute 'Width'.
         * 
         * @param value
         */
        virtual void setWidth(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'Width'.
         * 
         */
        virtual void unsetWidth();
        /**
         * Test if the attribute 'Width' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testWidth() const;
        /**
         * Gets the value of the explicit attribute 'WallThickness'.
         * 
         */
        virtual IfcPositiveLengthMeasure getWallThickness();
        /**
         * (const) Returns the value of the explicit attribute 'WallThickness'.
         * 
         * @return the value of the explicit attribute 'WallThickness'
         */
        virtual const IfcPositiveLengthMeasure getWallThickness() const;
        /**
         * Sets the value of the explicit attribute 'WallThickness'.
         * 
         * @param value
         */
        virtual void setWallThickness(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'WallThickness'.
         * 
         */
        virtual void unsetWallThickness();
        /**
         * Test if the attribute 'WallThickness' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testWallThickness() const;
        /**
         * Gets the value of the explicit attribute 'Girth'.
         * 
         */
        virtual IfcPositiveLengthMeasure getGirth();
        /**
         * (const) Returns the value of the explicit attribute 'Girth'.
         * 
         * @return the value of the explicit attribute 'Girth'
         */
        virtual const IfcPositiveLengthMeasure getGirth() const;
        /**
         * Sets the value of the explicit attribute 'Girth'.
         * 
         * @param value
         */
        virtual void setGirth(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'Girth'.
         * 
         */
        virtual void unsetGirth();
        /**
         * Test if the attribute 'Girth' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testGirth() const;
        /**
         * Gets the value of the explicit attribute 'InternalFilletRadius'.
         * 
         */
        virtual IfcPositiveLengthMeasure getInternalFilletRadius();
        /**
         * (const) Returns the value of the explicit attribute 'InternalFilletRadius'.
         * 
         * @return the value of the explicit attribute 'InternalFilletRadius'
         */
        virtual const IfcPositiveLengthMeasure getInternalFilletRadius() const;
        /**
         * Sets the value of the explicit attribute 'InternalFilletRadius'.
         * 
         * @param value
         */
        virtual void setInternalFilletRadius(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'InternalFilletRadius'.
         * 
         */
        virtual void unsetInternalFilletRadius();
        /**
         * Test if the attribute 'InternalFilletRadius' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testInternalFilletRadius() const;
        /**
         * Gets the value of the explicit attribute 'CentreOfGravityInX'.
         * 
         */
        virtual IfcPositiveLengthMeasure getCentreOfGravityInX();
        /**
         * (const) Returns the value of the explicit attribute 'CentreOfGravityInX'.
         * 
         * @return the value of the explicit attribute 'CentreOfGravityInX'
         */
        virtual const IfcPositiveLengthMeasure getCentreOfGravityInX() const;
        /**
         * Sets the value of the explicit attribute 'CentreOfGravityInX'.
         * 
         * @param value
         */
        virtual void setCentreOfGravityInX(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'CentreOfGravityInX'.
         * 
         */
        virtual void unsetCentreOfGravityInX();
        /**
         * Test if the attribute 'CentreOfGravityInX' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCentreOfGravityInX() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCShapeProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcCShapeProfileDef();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCShapeProfileDef &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_depth;
        /**
         */
        Step::Real m_width;
        /**
         */
        Step::Real m_wallThickness;
        /**
         */
        Step::Real m_girth;
        /**
         */
        Step::Real m_internalFilletRadius;
        /**
         */
        Step::Real m_centreOfGravityInX;

    };

}

#endif // IFC2X3_IFCCSHAPEPROFILEDEF_H
