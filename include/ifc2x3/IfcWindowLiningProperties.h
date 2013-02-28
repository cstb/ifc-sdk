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

#ifndef IFC2X3_IFCWINDOWLININGPROPERTIES_H
#define IFC2X3_IFCWINDOWLININGPROPERTIES_H
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
     * Generated class for the IfcWindowLiningProperties Entity.
     * 
     */
    class IFC2X3_EXPORT IfcWindowLiningProperties : public IfcPropertySetDefinition {
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
         * Gets the value of the explicit attribute 'MullionThickness'.
         * 
         */
        virtual IfcPositiveLengthMeasure getMullionThickness();
        /**
         * (const) Returns the value of the explicit attribute 'MullionThickness'.
         * 
         * @return the value of the explicit attribute 'MullionThickness'
         */
        virtual const IfcPositiveLengthMeasure getMullionThickness() const;
        /**
         * Sets the value of the explicit attribute 'MullionThickness'.
         * 
         * @param value
         */
        virtual void setMullionThickness(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'MullionThickness'.
         * 
         */
        virtual void unsetMullionThickness();
        /**
         * Test if the attribute 'MullionThickness' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMullionThickness() const;
        /**
         * Gets the value of the explicit attribute 'FirstTransomOffset'.
         * 
         */
        virtual IfcNormalisedRatioMeasure getFirstTransomOffset();
        /**
         * (const) Returns the value of the explicit attribute 'FirstTransomOffset'.
         * 
         * @return the value of the explicit attribute 'FirstTransomOffset'
         */
        virtual const IfcNormalisedRatioMeasure getFirstTransomOffset() const;
        /**
         * Sets the value of the explicit attribute 'FirstTransomOffset'.
         * 
         * @param value
         */
        virtual void setFirstTransomOffset(IfcNormalisedRatioMeasure value);
        /**
         * unset the attribute 'FirstTransomOffset'.
         * 
         */
        virtual void unsetFirstTransomOffset();
        /**
         * Test if the attribute 'FirstTransomOffset' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFirstTransomOffset() const;
        /**
         * Gets the value of the explicit attribute 'SecondTransomOffset'.
         * 
         */
        virtual IfcNormalisedRatioMeasure getSecondTransomOffset();
        /**
         * (const) Returns the value of the explicit attribute 'SecondTransomOffset'.
         * 
         * @return the value of the explicit attribute 'SecondTransomOffset'
         */
        virtual const IfcNormalisedRatioMeasure getSecondTransomOffset() const;
        /**
         * Sets the value of the explicit attribute 'SecondTransomOffset'.
         * 
         * @param value
         */
        virtual void setSecondTransomOffset(IfcNormalisedRatioMeasure value);
        /**
         * unset the attribute 'SecondTransomOffset'.
         * 
         */
        virtual void unsetSecondTransomOffset();
        /**
         * Test if the attribute 'SecondTransomOffset' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSecondTransomOffset() const;
        /**
         * Gets the value of the explicit attribute 'FirstMullionOffset'.
         * 
         */
        virtual IfcNormalisedRatioMeasure getFirstMullionOffset();
        /**
         * (const) Returns the value of the explicit attribute 'FirstMullionOffset'.
         * 
         * @return the value of the explicit attribute 'FirstMullionOffset'
         */
        virtual const IfcNormalisedRatioMeasure getFirstMullionOffset() const;
        /**
         * Sets the value of the explicit attribute 'FirstMullionOffset'.
         * 
         * @param value
         */
        virtual void setFirstMullionOffset(IfcNormalisedRatioMeasure value);
        /**
         * unset the attribute 'FirstMullionOffset'.
         * 
         */
        virtual void unsetFirstMullionOffset();
        /**
         * Test if the attribute 'FirstMullionOffset' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFirstMullionOffset() const;
        /**
         * Gets the value of the explicit attribute 'SecondMullionOffset'.
         * 
         */
        virtual IfcNormalisedRatioMeasure getSecondMullionOffset();
        /**
         * (const) Returns the value of the explicit attribute 'SecondMullionOffset'.
         * 
         * @return the value of the explicit attribute 'SecondMullionOffset'
         */
        virtual const IfcNormalisedRatioMeasure getSecondMullionOffset() const;
        /**
         * Sets the value of the explicit attribute 'SecondMullionOffset'.
         * 
         * @param value
         */
        virtual void setSecondMullionOffset(IfcNormalisedRatioMeasure value);
        /**
         * unset the attribute 'SecondMullionOffset'.
         * 
         */
        virtual void unsetSecondMullionOffset();
        /**
         * Test if the attribute 'SecondMullionOffset' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSecondMullionOffset() const;
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
        IfcWindowLiningProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcWindowLiningProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcWindowLiningProperties &obj, const CopyOp &copyop);

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
        Step::Real m_transomThickness;
        /**
         */
        Step::Real m_mullionThickness;
        /**
         */
        Step::Real m_firstTransomOffset;
        /**
         */
        Step::Real m_secondTransomOffset;
        /**
         */
        Step::Real m_firstMullionOffset;
        /**
         */
        Step::Real m_secondMullionOffset;
        /**
         */
        Step::RefPtr< IfcShapeAspect > m_shapeAspectStyle;

    };

}

#endif // IFC2X3_IFCWINDOWLININGPROPERTIES_H
