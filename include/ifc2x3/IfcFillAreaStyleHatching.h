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

#ifndef IFC2X3_IFCFILLAREASTYLEHATCHING_H
#define IFC2X3_IFCFILLAREASTYLEHATCHING_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcCartesianPoint;
    class IfcCurveStyle;
    class IfcHatchLineDistanceSelect;

    /**
     * Generated class for the IfcFillAreaStyleHatching Entity.
     * 
     */
    class IFC2X3_EXPORT IfcFillAreaStyleHatching : public IfcGeometricRepresentationItem {
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
         * Gets the value of the explicit attribute 'HatchLineAppearance'.
         * 
         */
        virtual IfcCurveStyle *getHatchLineAppearance();
        /**
         * (const) Returns the value of the explicit attribute 'HatchLineAppearance'.
         * 
         * @return the value of the explicit attribute 'HatchLineAppearance'
         */
        virtual const IfcCurveStyle *getHatchLineAppearance() const;
        /**
         * Sets the value of the explicit attribute 'HatchLineAppearance'.
         * 
         * @param value
         */
        virtual void setHatchLineAppearance(const Step::RefPtr< IfcCurveStyle > &value);
        /**
         * unset the attribute 'HatchLineAppearance'.
         * 
         */
        virtual void unsetHatchLineAppearance();
        /**
         * Test if the attribute 'HatchLineAppearance' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHatchLineAppearance() const;
        /**
         * Gets the value of the explicit attribute 'StartOfNextHatchLine'.
         * 
         */
        virtual IfcHatchLineDistanceSelect *getStartOfNextHatchLine();
        /**
         * (const) Returns the value of the explicit attribute 'StartOfNextHatchLine'.
         * 
         * @return the value of the explicit attribute 'StartOfNextHatchLine'
         */
        virtual const IfcHatchLineDistanceSelect *getStartOfNextHatchLine() const;
        /**
         * Sets the value of the explicit attribute 'StartOfNextHatchLine'.
         * 
         * @param value
         */
        virtual void setStartOfNextHatchLine(const Step::RefPtr< IfcHatchLineDistanceSelect > &value);
        /**
         * unset the attribute 'StartOfNextHatchLine'.
         * 
         */
        virtual void unsetStartOfNextHatchLine();
        /**
         * Test if the attribute 'StartOfNextHatchLine' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testStartOfNextHatchLine() const;
        /**
         * Gets the value of the explicit attribute 'PointOfReferenceHatchLine'.
         * 
         */
        virtual IfcCartesianPoint *getPointOfReferenceHatchLine();
        /**
         * (const) Returns the value of the explicit attribute 'PointOfReferenceHatchLine'.
         * 
         * @return the value of the explicit attribute 'PointOfReferenceHatchLine'
         */
        virtual const IfcCartesianPoint *getPointOfReferenceHatchLine() const;
        /**
         * Sets the value of the explicit attribute 'PointOfReferenceHatchLine'.
         * 
         * @param value
         */
        virtual void setPointOfReferenceHatchLine(const Step::RefPtr< IfcCartesianPoint > &value);
        /**
         * unset the attribute 'PointOfReferenceHatchLine'.
         * 
         */
        virtual void unsetPointOfReferenceHatchLine();
        /**
         * Test if the attribute 'PointOfReferenceHatchLine' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPointOfReferenceHatchLine() const;
        /**
         * Gets the value of the explicit attribute 'PatternStart'.
         * 
         */
        virtual IfcCartesianPoint *getPatternStart();
        /**
         * (const) Returns the value of the explicit attribute 'PatternStart'.
         * 
         * @return the value of the explicit attribute 'PatternStart'
         */
        virtual const IfcCartesianPoint *getPatternStart() const;
        /**
         * Sets the value of the explicit attribute 'PatternStart'.
         * 
         * @param value
         */
        virtual void setPatternStart(const Step::RefPtr< IfcCartesianPoint > &value);
        /**
         * unset the attribute 'PatternStart'.
         * 
         */
        virtual void unsetPatternStart();
        /**
         * Test if the attribute 'PatternStart' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPatternStart() const;
        /**
         * Gets the value of the explicit attribute 'HatchLineAngle'.
         * 
         */
        virtual IfcPlaneAngleMeasure getHatchLineAngle();
        /**
         * (const) Returns the value of the explicit attribute 'HatchLineAngle'.
         * 
         * @return the value of the explicit attribute 'HatchLineAngle'
         */
        virtual const IfcPlaneAngleMeasure getHatchLineAngle() const;
        /**
         * Sets the value of the explicit attribute 'HatchLineAngle'.
         * 
         * @param value
         */
        virtual void setHatchLineAngle(IfcPlaneAngleMeasure value);
        /**
         * unset the attribute 'HatchLineAngle'.
         * 
         */
        virtual void unsetHatchLineAngle();
        /**
         * Test if the attribute 'HatchLineAngle' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHatchLineAngle() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcFillAreaStyleHatching(Step::Id id, Step::SPFData *args);
        virtual ~IfcFillAreaStyleHatching();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcFillAreaStyleHatching &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcCurveStyle > m_hatchLineAppearance;
        /**
         */
        Step::RefPtr< IfcHatchLineDistanceSelect > m_startOfNextHatchLine;
        /**
         */
        Step::RefPtr< IfcCartesianPoint > m_pointOfReferenceHatchLine;
        /**
         */
        Step::RefPtr< IfcCartesianPoint > m_patternStart;
        /**
         */
        Step::Real m_hatchLineAngle;

    };

}

#endif // IFC2X3_IFCFILLAREASTYLEHATCHING_H
