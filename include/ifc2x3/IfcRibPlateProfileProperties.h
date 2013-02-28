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

#ifndef IFC2X3_IFCRIBPLATEPROFILEPROPERTIES_H
#define IFC2X3_IFCRIBPLATEPROFILEPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcProfileProperties.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcRibPlateProfileProperties Entity.
     * 
     */
    class IFC2X3_EXPORT IfcRibPlateProfileProperties : public IfcProfileProperties {
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
         * Gets the value of the explicit attribute 'Thickness'.
         * 
         */
        virtual IfcPositiveLengthMeasure getThickness();
        /**
         * (const) Returns the value of the explicit attribute 'Thickness'.
         * 
         * @return the value of the explicit attribute 'Thickness'
         */
        virtual const IfcPositiveLengthMeasure getThickness() const;
        /**
         * Sets the value of the explicit attribute 'Thickness'.
         * 
         * @param value
         */
        virtual void setThickness(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'Thickness'.
         * 
         */
        virtual void unsetThickness();
        /**
         * Test if the attribute 'Thickness' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testThickness() const;
        /**
         * Gets the value of the explicit attribute 'RibHeight'.
         * 
         */
        virtual IfcPositiveLengthMeasure getRibHeight();
        /**
         * (const) Returns the value of the explicit attribute 'RibHeight'.
         * 
         * @return the value of the explicit attribute 'RibHeight'
         */
        virtual const IfcPositiveLengthMeasure getRibHeight() const;
        /**
         * Sets the value of the explicit attribute 'RibHeight'.
         * 
         * @param value
         */
        virtual void setRibHeight(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'RibHeight'.
         * 
         */
        virtual void unsetRibHeight();
        /**
         * Test if the attribute 'RibHeight' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRibHeight() const;
        /**
         * Gets the value of the explicit attribute 'RibWidth'.
         * 
         */
        virtual IfcPositiveLengthMeasure getRibWidth();
        /**
         * (const) Returns the value of the explicit attribute 'RibWidth'.
         * 
         * @return the value of the explicit attribute 'RibWidth'
         */
        virtual const IfcPositiveLengthMeasure getRibWidth() const;
        /**
         * Sets the value of the explicit attribute 'RibWidth'.
         * 
         * @param value
         */
        virtual void setRibWidth(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'RibWidth'.
         * 
         */
        virtual void unsetRibWidth();
        /**
         * Test if the attribute 'RibWidth' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRibWidth() const;
        /**
         * Gets the value of the explicit attribute 'RibSpacing'.
         * 
         */
        virtual IfcPositiveLengthMeasure getRibSpacing();
        /**
         * (const) Returns the value of the explicit attribute 'RibSpacing'.
         * 
         * @return the value of the explicit attribute 'RibSpacing'
         */
        virtual const IfcPositiveLengthMeasure getRibSpacing() const;
        /**
         * Sets the value of the explicit attribute 'RibSpacing'.
         * 
         * @param value
         */
        virtual void setRibSpacing(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'RibSpacing'.
         * 
         */
        virtual void unsetRibSpacing();
        /**
         * Test if the attribute 'RibSpacing' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRibSpacing() const;
        /**
         * Gets the value of the explicit attribute 'Direction'.
         * 
         */
        virtual IfcRibPlateDirectionEnum getDirection();
        /**
         * (const) Returns the value of the explicit attribute 'Direction'.
         * 
         * @return the value of the explicit attribute 'Direction'
         */
        virtual const IfcRibPlateDirectionEnum getDirection() const;
        /**
         * Sets the value of the explicit attribute 'Direction'.
         * 
         * @param value
         */
        virtual void setDirection(IfcRibPlateDirectionEnum value);
        /**
         * unset the attribute 'Direction'.
         * 
         */
        virtual void unsetDirection();
        /**
         * Test if the attribute 'Direction' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDirection() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRibPlateProfileProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcRibPlateProfileProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRibPlateProfileProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_thickness;
        /**
         */
        Step::Real m_ribHeight;
        /**
         */
        Step::Real m_ribWidth;
        /**
         */
        Step::Real m_ribSpacing;
        /**
         */
        IfcRibPlateDirectionEnum m_direction;

    };

}

#endif // IFC2X3_IFCRIBPLATEPROFILEPROPERTIES_H
