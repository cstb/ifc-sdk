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

#ifndef IFC2X3_IFCCRANERAILFSHAPEPROFILEDEF_H
#define IFC2X3_IFCCRANERAILFSHAPEPROFILEDEF_H
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
     * Generated class for the IfcCraneRailFShapeProfileDef Entity.
     * 
     */
    class IFC2X3_EXPORT IfcCraneRailFShapeProfileDef : public IfcParameterizedProfileDef {
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
         * Gets the value of the explicit attribute 'OverallHeight'.
         * 
         */
        virtual IfcPositiveLengthMeasure getOverallHeight();
        /**
         * (const) Returns the value of the explicit attribute 'OverallHeight'.
         * 
         * @return the value of the explicit attribute 'OverallHeight'
         */
        virtual const IfcPositiveLengthMeasure getOverallHeight() const;
        /**
         * Sets the value of the explicit attribute 'OverallHeight'.
         * 
         * @param value
         */
        virtual void setOverallHeight(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'OverallHeight'.
         * 
         */
        virtual void unsetOverallHeight();
        /**
         * Test if the attribute 'OverallHeight' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testOverallHeight() const;
        /**
         * Gets the value of the explicit attribute 'HeadWidth'.
         * 
         */
        virtual IfcPositiveLengthMeasure getHeadWidth();
        /**
         * (const) Returns the value of the explicit attribute 'HeadWidth'.
         * 
         * @return the value of the explicit attribute 'HeadWidth'
         */
        virtual const IfcPositiveLengthMeasure getHeadWidth() const;
        /**
         * Sets the value of the explicit attribute 'HeadWidth'.
         * 
         * @param value
         */
        virtual void setHeadWidth(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'HeadWidth'.
         * 
         */
        virtual void unsetHeadWidth();
        /**
         * Test if the attribute 'HeadWidth' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHeadWidth() const;
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
         * Gets the value of the explicit attribute 'HeadDepth2'.
         * 
         */
        virtual IfcPositiveLengthMeasure getHeadDepth2();
        /**
         * (const) Returns the value of the explicit attribute 'HeadDepth2'.
         * 
         * @return the value of the explicit attribute 'HeadDepth2'
         */
        virtual const IfcPositiveLengthMeasure getHeadDepth2() const;
        /**
         * Sets the value of the explicit attribute 'HeadDepth2'.
         * 
         * @param value
         */
        virtual void setHeadDepth2(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'HeadDepth2'.
         * 
         */
        virtual void unsetHeadDepth2();
        /**
         * Test if the attribute 'HeadDepth2' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHeadDepth2() const;
        /**
         * Gets the value of the explicit attribute 'HeadDepth3'.
         * 
         */
        virtual IfcPositiveLengthMeasure getHeadDepth3();
        /**
         * (const) Returns the value of the explicit attribute 'HeadDepth3'.
         * 
         * @return the value of the explicit attribute 'HeadDepth3'
         */
        virtual const IfcPositiveLengthMeasure getHeadDepth3() const;
        /**
         * Sets the value of the explicit attribute 'HeadDepth3'.
         * 
         * @param value
         */
        virtual void setHeadDepth3(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'HeadDepth3'.
         * 
         */
        virtual void unsetHeadDepth3();
        /**
         * Test if the attribute 'HeadDepth3' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHeadDepth3() const;
        /**
         * Gets the value of the explicit attribute 'WebThickness'.
         * 
         */
        virtual IfcPositiveLengthMeasure getWebThickness();
        /**
         * (const) Returns the value of the explicit attribute 'WebThickness'.
         * 
         * @return the value of the explicit attribute 'WebThickness'
         */
        virtual const IfcPositiveLengthMeasure getWebThickness() const;
        /**
         * Sets the value of the explicit attribute 'WebThickness'.
         * 
         * @param value
         */
        virtual void setWebThickness(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'WebThickness'.
         * 
         */
        virtual void unsetWebThickness();
        /**
         * Test if the attribute 'WebThickness' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testWebThickness() const;
        /**
         * Gets the value of the explicit attribute 'BaseDepth1'.
         * 
         */
        virtual IfcPositiveLengthMeasure getBaseDepth1();
        /**
         * (const) Returns the value of the explicit attribute 'BaseDepth1'.
         * 
         * @return the value of the explicit attribute 'BaseDepth1'
         */
        virtual const IfcPositiveLengthMeasure getBaseDepth1() const;
        /**
         * Sets the value of the explicit attribute 'BaseDepth1'.
         * 
         * @param value
         */
        virtual void setBaseDepth1(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'BaseDepth1'.
         * 
         */
        virtual void unsetBaseDepth1();
        /**
         * Test if the attribute 'BaseDepth1' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testBaseDepth1() const;
        /**
         * Gets the value of the explicit attribute 'BaseDepth2'.
         * 
         */
        virtual IfcPositiveLengthMeasure getBaseDepth2();
        /**
         * (const) Returns the value of the explicit attribute 'BaseDepth2'.
         * 
         * @return the value of the explicit attribute 'BaseDepth2'
         */
        virtual const IfcPositiveLengthMeasure getBaseDepth2() const;
        /**
         * Sets the value of the explicit attribute 'BaseDepth2'.
         * 
         * @param value
         */
        virtual void setBaseDepth2(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'BaseDepth2'.
         * 
         */
        virtual void unsetBaseDepth2();
        /**
         * Test if the attribute 'BaseDepth2' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testBaseDepth2() const;
        /**
         * Gets the value of the explicit attribute 'CentreOfGravityInY'.
         * 
         */
        virtual IfcPositiveLengthMeasure getCentreOfGravityInY();
        /**
         * (const) Returns the value of the explicit attribute 'CentreOfGravityInY'.
         * 
         * @return the value of the explicit attribute 'CentreOfGravityInY'
         */
        virtual const IfcPositiveLengthMeasure getCentreOfGravityInY() const;
        /**
         * Sets the value of the explicit attribute 'CentreOfGravityInY'.
         * 
         * @param value
         */
        virtual void setCentreOfGravityInY(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'CentreOfGravityInY'.
         * 
         */
        virtual void unsetCentreOfGravityInY();
        /**
         * Test if the attribute 'CentreOfGravityInY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCentreOfGravityInY() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCraneRailFShapeProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcCraneRailFShapeProfileDef();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCraneRailFShapeProfileDef &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_overallHeight;
        /**
         */
        Step::Real m_headWidth;
        /**
         */
        Step::Real m_radius;
        /**
         */
        Step::Real m_headDepth2;
        /**
         */
        Step::Real m_headDepth3;
        /**
         */
        Step::Real m_webThickness;
        /**
         */
        Step::Real m_baseDepth1;
        /**
         */
        Step::Real m_baseDepth2;
        /**
         */
        Step::Real m_centreOfGravityInY;

    };

}

#endif // IFC2X3_IFCCRANERAILFSHAPEPROFILEDEF_H
