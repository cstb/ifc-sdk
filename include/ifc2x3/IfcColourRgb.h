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

#ifndef IFC2X3_IFCCOLOURRGB_H
#define IFC2X3_IFCCOLOURRGB_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcColourSpecification.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcColourRgb Entity.
     * 
     */
    class IFC2X3_EXPORT IfcColourRgb : public IfcColourSpecification {
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
         * Gets the value of the explicit attribute 'Red'.
         * 
         */
        virtual IfcNormalisedRatioMeasure getRed();
        /**
         * (const) Returns the value of the explicit attribute 'Red'.
         * 
         * @return the value of the explicit attribute 'Red'
         */
        virtual const IfcNormalisedRatioMeasure getRed() const;
        /**
         * Sets the value of the explicit attribute 'Red'.
         * 
         * @param value
         */
        virtual void setRed(IfcNormalisedRatioMeasure value);
        /**
         * unset the attribute 'Red'.
         * 
         */
        virtual void unsetRed();
        /**
         * Test if the attribute 'Red' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRed() const;
        /**
         * Gets the value of the explicit attribute 'Green'.
         * 
         */
        virtual IfcNormalisedRatioMeasure getGreen();
        /**
         * (const) Returns the value of the explicit attribute 'Green'.
         * 
         * @return the value of the explicit attribute 'Green'
         */
        virtual const IfcNormalisedRatioMeasure getGreen() const;
        /**
         * Sets the value of the explicit attribute 'Green'.
         * 
         * @param value
         */
        virtual void setGreen(IfcNormalisedRatioMeasure value);
        /**
         * unset the attribute 'Green'.
         * 
         */
        virtual void unsetGreen();
        /**
         * Test if the attribute 'Green' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testGreen() const;
        /**
         * Gets the value of the explicit attribute 'Blue'.
         * 
         */
        virtual IfcNormalisedRatioMeasure getBlue();
        /**
         * (const) Returns the value of the explicit attribute 'Blue'.
         * 
         * @return the value of the explicit attribute 'Blue'
         */
        virtual const IfcNormalisedRatioMeasure getBlue() const;
        /**
         * Sets the value of the explicit attribute 'Blue'.
         * 
         * @param value
         */
        virtual void setBlue(IfcNormalisedRatioMeasure value);
        /**
         * unset the attribute 'Blue'.
         * 
         */
        virtual void unsetBlue();
        /**
         * Test if the attribute 'Blue' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testBlue() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcColourRgb(Step::Id id, Step::SPFData *args);
        virtual ~IfcColourRgb();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcColourRgb &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_red;
        /**
         */
        Step::Real m_green;
        /**
         */
        Step::Real m_blue;

    };

}

#endif // IFC2X3_IFCCOLOURRGB_H
