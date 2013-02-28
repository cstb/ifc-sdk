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

#ifndef IFC2X3_IFCISHAPEPROFILEDEF_H
#define IFC2X3_IFCISHAPEPROFILEDEF_H
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
     * Generated class for the IfcIShapeProfileDef Entity.
     * 
     */
    class IFC2X3_EXPORT IfcIShapeProfileDef : public IfcParameterizedProfileDef {
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
         * Gets the value of the explicit attribute 'OverallWidth'.
         * 
         */
        virtual IfcPositiveLengthMeasure getOverallWidth();
        /**
         * (const) Returns the value of the explicit attribute 'OverallWidth'.
         * 
         * @return the value of the explicit attribute 'OverallWidth'
         */
        virtual const IfcPositiveLengthMeasure getOverallWidth() const;
        /**
         * Sets the value of the explicit attribute 'OverallWidth'.
         * 
         * @param value
         */
        virtual void setOverallWidth(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'OverallWidth'.
         * 
         */
        virtual void unsetOverallWidth();
        /**
         * Test if the attribute 'OverallWidth' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testOverallWidth() const;
        /**
         * Gets the value of the explicit attribute 'OverallDepth'.
         * 
         */
        virtual IfcPositiveLengthMeasure getOverallDepth();
        /**
         * (const) Returns the value of the explicit attribute 'OverallDepth'.
         * 
         * @return the value of the explicit attribute 'OverallDepth'
         */
        virtual const IfcPositiveLengthMeasure getOverallDepth() const;
        /**
         * Sets the value of the explicit attribute 'OverallDepth'.
         * 
         * @param value
         */
        virtual void setOverallDepth(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'OverallDepth'.
         * 
         */
        virtual void unsetOverallDepth();
        /**
         * Test if the attribute 'OverallDepth' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testOverallDepth() const;
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
         * Gets the value of the explicit attribute 'FlangeThickness'.
         * 
         */
        virtual IfcPositiveLengthMeasure getFlangeThickness();
        /**
         * (const) Returns the value of the explicit attribute 'FlangeThickness'.
         * 
         * @return the value of the explicit attribute 'FlangeThickness'
         */
        virtual const IfcPositiveLengthMeasure getFlangeThickness() const;
        /**
         * Sets the value of the explicit attribute 'FlangeThickness'.
         * 
         * @param value
         */
        virtual void setFlangeThickness(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'FlangeThickness'.
         * 
         */
        virtual void unsetFlangeThickness();
        /**
         * Test if the attribute 'FlangeThickness' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFlangeThickness() const;
        /**
         * Gets the value of the explicit attribute 'FilletRadius'.
         * 
         */
        virtual IfcPositiveLengthMeasure getFilletRadius();
        /**
         * (const) Returns the value of the explicit attribute 'FilletRadius'.
         * 
         * @return the value of the explicit attribute 'FilletRadius'
         */
        virtual const IfcPositiveLengthMeasure getFilletRadius() const;
        /**
         * Sets the value of the explicit attribute 'FilletRadius'.
         * 
         * @param value
         */
        virtual void setFilletRadius(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'FilletRadius'.
         * 
         */
        virtual void unsetFilletRadius();
        /**
         * Test if the attribute 'FilletRadius' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFilletRadius() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcIShapeProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcIShapeProfileDef();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcIShapeProfileDef &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_overallWidth;
        /**
         */
        Step::Real m_overallDepth;
        /**
         */
        Step::Real m_webThickness;
        /**
         */
        Step::Real m_flangeThickness;
        /**
         */
        Step::Real m_filletRadius;

    };

}

#endif // IFC2X3_IFCISHAPEPROFILEDEF_H
