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

#ifndef IFC2X3_IFCDOORLININGPROPERTIES_H
#define IFC2X3_IFCDOORLININGPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcPropertySetDefinition.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcShapeAspect;

    /**
     * Generated class for the IfcDoorLiningProperties Entity.
     * 
     */
    class IFC2X3_EXPORT IfcDoorLiningProperties : public IfcPropertySetDefinition {
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
         * Gets the value of the explicit attribute 'LiningDepth'.
         * 
         */
        virtual IfcPositiveLengthMeasure getLiningDepth();
        /**
         * (const) Returns the value of the explicit attribute 'LiningDepth'.
         * 
         * @return the value of the explicit attribute 'LiningDepth'
         */
        virtual const IfcPositiveLengthMeasure getLiningDepth() const;
        /**
         * Sets the value of the explicit attribute 'LiningDepth'.
         * 
         * @param value
         */
        virtual void setLiningDepth(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'LiningDepth'.
         * 
         */
        virtual void unsetLiningDepth();
        /**
         * Test if the attribute 'LiningDepth' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLiningDepth() const;
        /**
         * Gets the value of the explicit attribute 'LiningThickness'.
         * 
         */
        virtual IfcPositiveLengthMeasure getLiningThickness();
        /**
         * (const) Returns the value of the explicit attribute 'LiningThickness'.
         * 
         * @return the value of the explicit attribute 'LiningThickness'
         */
        virtual const IfcPositiveLengthMeasure getLiningThickness() const;
        /**
         * Sets the value of the explicit attribute 'LiningThickness'.
         * 
         * @param value
         */
        virtual void setLiningThickness(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'LiningThickness'.
         * 
         */
        virtual void unsetLiningThickness();
        /**
         * Test if the attribute 'LiningThickness' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLiningThickness() const;
        /**
         * Gets the value of the explicit attribute 'ThresholdDepth'.
         * 
         */
        virtual IfcPositiveLengthMeasure getThresholdDepth();
        /**
         * (const) Returns the value of the explicit attribute 'ThresholdDepth'.
         * 
         * @return the value of the explicit attribute 'ThresholdDepth'
         */
        virtual const IfcPositiveLengthMeasure getThresholdDepth() const;
        /**
         * Sets the value of the explicit attribute 'ThresholdDepth'.
         * 
         * @param value
         */
        virtual void setThresholdDepth(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'ThresholdDepth'.
         * 
         */
        virtual void unsetThresholdDepth();
        /**
         * Test if the attribute 'ThresholdDepth' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testThresholdDepth() const;
        /**
         * Gets the value of the explicit attribute 'ThresholdThickness'.
         * 
         */
        virtual IfcPositiveLengthMeasure getThresholdThickness();
        /**
         * (const) Returns the value of the explicit attribute 'ThresholdThickness'.
         * 
         * @return the value of the explicit attribute 'ThresholdThickness'
         */
        virtual const IfcPositiveLengthMeasure getThresholdThickness() const;
        /**
         * Sets the value of the explicit attribute 'ThresholdThickness'.
         * 
         * @param value
         */
        virtual void setThresholdThickness(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'ThresholdThickness'.
         * 
         */
        virtual void unsetThresholdThickness();
        /**
         * Test if the attribute 'ThresholdThickness' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testThresholdThickness() const;
        /**
         * Gets the value of the explicit attribute 'TransomThickness'.
         * 
         */
        virtual IfcPositiveLengthMeasure getTransomThickness();
        /**
         * (const) Returns the value of the explicit attribute 'TransomThickness'.
         * 
         * @return the value of the explicit attribute 'TransomThickness'
         */
        virtual const IfcPositiveLengthMeasure getTransomThickness() const;
        /**
         * Sets the value of the explicit attribute 'TransomThickness'.
         * 
         * @param value
         */
        virtual void setTransomThickness(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'TransomThickness'.
         * 
         */
        virtual void unsetTransomThickness();
        /**
         * Test if the attribute 'TransomThickness' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTransomThickness() const;
        /**
         * Gets the value of the explicit attribute 'TransomOffset'.
         * 
         */
        virtual IfcLengthMeasure getTransomOffset();
        /**
         * (const) Returns the value of the explicit attribute 'TransomOffset'.
         * 
         * @return the value of the explicit attribute 'TransomOffset'
         */
        virtual const IfcLengthMeasure getTransomOffset() const;
        /**
         * Sets the value of the explicit attribute 'TransomOffset'.
         * 
         * @param value
         */
        virtual void setTransomOffset(IfcLengthMeasure value);
        /**
         * unset the attribute 'TransomOffset'.
         * 
         */
        virtual void unsetTransomOffset();
        /**
         * Test if the attribute 'TransomOffset' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTransomOffset() const;
        /**
         * Gets the value of the explicit attribute 'LiningOffset'.
         * 
         */
        virtual IfcLengthMeasure getLiningOffset();
        /**
         * (const) Returns the value of the explicit attribute 'LiningOffset'.
         * 
         * @return the value of the explicit attribute 'LiningOffset'
         */
        virtual const IfcLengthMeasure getLiningOffset() const;
        /**
         * Sets the value of the explicit attribute 'LiningOffset'.
         * 
         * @param value
         */
        virtual void setLiningOffset(IfcLengthMeasure value);
        /**
         * unset the attribute 'LiningOffset'.
         * 
         */
        virtual void unsetLiningOffset();
        /**
         * Test if the attribute 'LiningOffset' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLiningOffset() const;
        /**
         * Gets the value of the explicit attribute 'ThresholdOffset'.
         * 
         */
        virtual IfcLengthMeasure getThresholdOffset();
        /**
         * (const) Returns the value of the explicit attribute 'ThresholdOffset'.
         * 
         * @return the value of the explicit attribute 'ThresholdOffset'
         */
        virtual const IfcLengthMeasure getThresholdOffset() const;
        /**
         * Sets the value of the explicit attribute 'ThresholdOffset'.
         * 
         * @param value
         */
        virtual void setThresholdOffset(IfcLengthMeasure value);
        /**
         * unset the attribute 'ThresholdOffset'.
         * 
         */
        virtual void unsetThresholdOffset();
        /**
         * Test if the attribute 'ThresholdOffset' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testThresholdOffset() const;
        /**
         * Gets the value of the explicit attribute 'CasingThickness'.
         * 
         */
        virtual IfcPositiveLengthMeasure getCasingThickness();
        /**
         * (const) Returns the value of the explicit attribute 'CasingThickness'.
         * 
         * @return the value of the explicit attribute 'CasingThickness'
         */
        virtual const IfcPositiveLengthMeasure getCasingThickness() const;
        /**
         * Sets the value of the explicit attribute 'CasingThickness'.
         * 
         * @param value
         */
        virtual void setCasingThickness(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'CasingThickness'.
         * 
         */
        virtual void unsetCasingThickness();
        /**
         * Test if the attribute 'CasingThickness' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCasingThickness() const;
        /**
         * Gets the value of the explicit attribute 'CasingDepth'.
         * 
         */
        virtual IfcPositiveLengthMeasure getCasingDepth();
        /**
         * (const) Returns the value of the explicit attribute 'CasingDepth'.
         * 
         * @return the value of the explicit attribute 'CasingDepth'
         */
        virtual const IfcPositiveLengthMeasure getCasingDepth() const;
        /**
         * Sets the value of the explicit attribute 'CasingDepth'.
         * 
         * @param value
         */
        virtual void setCasingDepth(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'CasingDepth'.
         * 
         */
        virtual void unsetCasingDepth();
        /**
         * Test if the attribute 'CasingDepth' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCasingDepth() const;
        /**
         * Gets the value of the explicit attribute 'ShapeAspectStyle'.
         * 
         */
        virtual IfcShapeAspect *getShapeAspectStyle();
        /**
         * (const) Returns the value of the explicit attribute 'ShapeAspectStyle'.
         * 
         * @return the value of the explicit attribute 'ShapeAspectStyle'
         */
        virtual const IfcShapeAspect *getShapeAspectStyle() const;
        /**
         * Sets the value of the explicit attribute 'ShapeAspectStyle'.
         * 
         * @param value
         */
        virtual void setShapeAspectStyle(const Step::RefPtr< IfcShapeAspect > &value);
        /**
         * unset the attribute 'ShapeAspectStyle'.
         * 
         */
        virtual void unsetShapeAspectStyle();
        /**
         * Test if the attribute 'ShapeAspectStyle' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testShapeAspectStyle() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcDoorLiningProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcDoorLiningProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDoorLiningProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_liningDepth;
        /**
         */
        Step::Real m_liningThickness;
        /**
         */
        Step::Real m_thresholdDepth;
        /**
         */
        Step::Real m_thresholdThickness;
        /**
         */
        Step::Real m_transomThickness;
        /**
         */
        Step::Real m_transomOffset;
        /**
         */
        Step::Real m_liningOffset;
        /**
         */
        Step::Real m_thresholdOffset;
        /**
         */
        Step::Real m_casingThickness;
        /**
         */
        Step::Real m_casingDepth;
        /**
         */
        Step::RefPtr< IfcShapeAspect > m_shapeAspectStyle;

    };

}

#endif // IFC2X3_IFCDOORLININGPROPERTIES_H
