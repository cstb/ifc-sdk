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

#ifndef IFC2X3_IFCRECTANGLEPROFILEDEF_H
#define IFC2X3_IFCRECTANGLEPROFILEDEF_H
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
     * Generated class for the IfcRectangleProfileDef Entity.
     * 
     */
    class IFC2X3_EXPORT IfcRectangleProfileDef : public IfcParameterizedProfileDef {
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
         * Gets the value of the explicit attribute 'XDim'.
         * 
         */
        virtual IfcPositiveLengthMeasure getXDim();
        /**
         * (const) Returns the value of the explicit attribute 'XDim'.
         * 
         * @return the value of the explicit attribute 'XDim'
         */
        virtual const IfcPositiveLengthMeasure getXDim() const;
        /**
         * Sets the value of the explicit attribute 'XDim'.
         * 
         * @param value
         */
        virtual void setXDim(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'XDim'.
         * 
         */
        virtual void unsetXDim();
        /**
         * Test if the attribute 'XDim' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testXDim() const;
        /**
         * Gets the value of the explicit attribute 'YDim'.
         * 
         */
        virtual IfcPositiveLengthMeasure getYDim();
        /**
         * (const) Returns the value of the explicit attribute 'YDim'.
         * 
         * @return the value of the explicit attribute 'YDim'
         */
        virtual const IfcPositiveLengthMeasure getYDim() const;
        /**
         * Sets the value of the explicit attribute 'YDim'.
         * 
         * @param value
         */
        virtual void setYDim(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'YDim'.
         * 
         */
        virtual void unsetYDim();
        /**
         * Test if the attribute 'YDim' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testYDim() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRectangleProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcRectangleProfileDef();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRectangleProfileDef &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_xDim;
        /**
         */
        Step::Real m_yDim;

    };

}

#endif // IFC2X3_IFCRECTANGLEPROFILEDEF_H
