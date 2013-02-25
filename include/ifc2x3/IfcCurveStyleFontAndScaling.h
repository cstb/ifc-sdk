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

#ifndef IFC2X3_IFCCURVESTYLEFONTANDSCALING_H
#define IFC2X3_IFCCURVESTYLEFONTANDSCALING_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcCurveStyleFontSelect;

    /**
     * Generated class for the IfcCurveStyleFontAndScaling Entity.
     * 
     */
    class IFC2X3_EXPORT IfcCurveStyleFontAndScaling : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'Name'.
         * 
         */
        virtual IfcLabel getName();
        /**
         * (const) Returns the value of the explicit attribute 'Name'.
         * 
         * @return the value of the explicit attribute 'Name'
         */
        virtual const IfcLabel getName() const;
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        virtual void setName(const IfcLabel &value);
        /**
         * unset the attribute 'Name'.
         * 
         */
        virtual void unsetName();
        /**
         * Test if the attribute 'Name' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testName() const;
        /**
         * Gets the value of the explicit attribute 'CurveFont'.
         * 
         */
        virtual IfcCurveStyleFontSelect *getCurveFont();
        /**
         * (const) Returns the value of the explicit attribute 'CurveFont'.
         * 
         * @return the value of the explicit attribute 'CurveFont'
         */
        virtual const IfcCurveStyleFontSelect *getCurveFont() const;
        /**
         * Sets the value of the explicit attribute 'CurveFont'.
         * 
         * @param value
         */
        virtual void setCurveFont(const Step::RefPtr< IfcCurveStyleFontSelect > &value);
        /**
         * unset the attribute 'CurveFont'.
         * 
         */
        virtual void unsetCurveFont();
        /**
         * Test if the attribute 'CurveFont' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCurveFont() const;
        /**
         * Gets the value of the explicit attribute 'CurveFontScaling'.
         * 
         */
        virtual IfcPositiveRatioMeasure getCurveFontScaling();
        /**
         * (const) Returns the value of the explicit attribute 'CurveFontScaling'.
         * 
         * @return the value of the explicit attribute 'CurveFontScaling'
         */
        virtual const IfcPositiveRatioMeasure getCurveFontScaling() const;
        /**
         * Sets the value of the explicit attribute 'CurveFontScaling'.
         * 
         * @param value
         */
        virtual void setCurveFontScaling(IfcPositiveRatioMeasure value);
        /**
         * unset the attribute 'CurveFontScaling'.
         * 
         */
        virtual void unsetCurveFontScaling();
        /**
         * Test if the attribute 'CurveFontScaling' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCurveFontScaling() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCurveStyleFontAndScaling(Step::Id id, Step::SPFData *args);
        virtual ~IfcCurveStyleFontAndScaling();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCurveStyleFontAndScaling &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_name;
        /**
         */
        Step::RefPtr< IfcCurveStyleFontSelect > m_curveFont;
        /**
         */
        Step::Real m_curveFontScaling;

    };

}

#endif // IFC2X3_IFCCURVESTYLEFONTANDSCALING_H
