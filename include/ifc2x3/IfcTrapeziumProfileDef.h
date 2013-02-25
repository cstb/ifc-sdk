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

#ifndef IFC2X3_IFCTRAPEZIUMPROFILEDEF_H
#define IFC2X3_IFCTRAPEZIUMPROFILEDEF_H
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
     * Generated class for the IfcTrapeziumProfileDef Entity.
     * 
     */
    class IFC2X3_EXPORT IfcTrapeziumProfileDef : public IfcParameterizedProfileDef {
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
         * Gets the value of the explicit attribute 'BottomXDim'.
         * 
         */
        virtual IfcPositiveLengthMeasure getBottomXDim();
        /**
         * (const) Returns the value of the explicit attribute 'BottomXDim'.
         * 
         * @return the value of the explicit attribute 'BottomXDim'
         */
        virtual const IfcPositiveLengthMeasure getBottomXDim() const;
        /**
         * Sets the value of the explicit attribute 'BottomXDim'.
         * 
         * @param value
         */
        virtual void setBottomXDim(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'BottomXDim'.
         * 
         */
        virtual void unsetBottomXDim();
        /**
         * Test if the attribute 'BottomXDim' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testBottomXDim() const;
        /**
         * Gets the value of the explicit attribute 'TopXDim'.
         * 
         */
        virtual IfcPositiveLengthMeasure getTopXDim();
        /**
         * (const) Returns the value of the explicit attribute 'TopXDim'.
         * 
         * @return the value of the explicit attribute 'TopXDim'
         */
        virtual const IfcPositiveLengthMeasure getTopXDim() const;
        /**
         * Sets the value of the explicit attribute 'TopXDim'.
         * 
         * @param value
         */
        virtual void setTopXDim(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'TopXDim'.
         * 
         */
        virtual void unsetTopXDim();
        /**
         * Test if the attribute 'TopXDim' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTopXDim() const;
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
        /**
         * Gets the value of the explicit attribute 'TopXOffset'.
         * 
         */
        virtual IfcLengthMeasure getTopXOffset();
        /**
         * (const) Returns the value of the explicit attribute 'TopXOffset'.
         * 
         * @return the value of the explicit attribute 'TopXOffset'
         */
        virtual const IfcLengthMeasure getTopXOffset() const;
        /**
         * Sets the value of the explicit attribute 'TopXOffset'.
         * 
         * @param value
         */
        virtual void setTopXOffset(IfcLengthMeasure value);
        /**
         * unset the attribute 'TopXOffset'.
         * 
         */
        virtual void unsetTopXOffset();
        /**
         * Test if the attribute 'TopXOffset' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTopXOffset() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTrapeziumProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcTrapeziumProfileDef();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTrapeziumProfileDef &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_bottomXDim;
        /**
         */
        Step::Real m_topXDim;
        /**
         */
        Step::Real m_yDim;
        /**
         */
        Step::Real m_topXOffset;

    };

}

#endif // IFC2X3_IFCTRAPEZIUMPROFILEDEF_H
