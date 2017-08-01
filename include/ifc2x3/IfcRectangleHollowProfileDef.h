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

#ifndef IFC2X3_IFCRECTANGLEHOLLOWPROFILEDEF_H
#define IFC2X3_IFCRECTANGLEHOLLOWPROFILEDEF_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcRectangleProfileDef.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcRectangleHollowProfileDef Entity.
     * 
     */
    class IFC2X3_EXPORT IfcRectangleHollowProfileDef : public IfcRectangleProfileDef {
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
         * Gets the value of the explicit attribute 'InnerFilletRadius'.
         * 
         */
        virtual IfcPositiveLengthMeasure getInnerFilletRadius();
        /**
         * (const) Returns the value of the explicit attribute 'InnerFilletRadius'.
         * 
         * @return the value of the explicit attribute 'InnerFilletRadius'
         */
        virtual const IfcPositiveLengthMeasure getInnerFilletRadius() const;
        /**
         * Sets the value of the explicit attribute 'InnerFilletRadius'.
         * 
         * @param value
         */
        virtual void setInnerFilletRadius(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'InnerFilletRadius'.
         * 
         */
        virtual void unsetInnerFilletRadius();
        /**
         * Test if the attribute 'InnerFilletRadius' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testInnerFilletRadius() const;
        /**
         * Gets the value of the explicit attribute 'OuterFilletRadius'.
         * 
         */
        virtual IfcPositiveLengthMeasure getOuterFilletRadius();
        /**
         * (const) Returns the value of the explicit attribute 'OuterFilletRadius'.
         * 
         * @return the value of the explicit attribute 'OuterFilletRadius'
         */
        virtual const IfcPositiveLengthMeasure getOuterFilletRadius() const;
        /**
         * Sets the value of the explicit attribute 'OuterFilletRadius'.
         * 
         * @param value
         */
        virtual void setOuterFilletRadius(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'OuterFilletRadius'.
         * 
         */
        virtual void unsetOuterFilletRadius();
        /**
         * Test if the attribute 'OuterFilletRadius' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testOuterFilletRadius() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRectangleHollowProfileDef(Step::Id id, Step::SPFData *args);
        ~IfcRectangleHollowProfileDef() override;
        /**
         */
        bool init() override;
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRectangleHollowProfileDef &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_wallThickness;
        /**
         */
        Step::Real m_innerFilletRadius;
        /**
         */
        Step::Real m_outerFilletRadius;

    };

}

#endif // IFC2X3_IFCRECTANGLEHOLLOWPROFILEDEF_H
