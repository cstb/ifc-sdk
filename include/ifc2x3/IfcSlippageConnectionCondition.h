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

#ifndef IFC2X3_IFCSLIPPAGECONNECTIONCONDITION_H
#define IFC2X3_IFCSLIPPAGECONNECTIONCONDITION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcStructuralConnectionCondition.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcSlippageConnectionCondition Entity.
     * 
     */
    class IFC2X3_EXPORT IfcSlippageConnectionCondition : public IfcStructuralConnectionCondition {
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
         * Gets the value of the explicit attribute 'SlippageX'.
         * 
         */
        virtual IfcLengthMeasure getSlippageX();
        /**
         * (const) Returns the value of the explicit attribute 'SlippageX'.
         * 
         * @return the value of the explicit attribute 'SlippageX'
         */
        virtual const IfcLengthMeasure getSlippageX() const;
        /**
         * Sets the value of the explicit attribute 'SlippageX'.
         * 
         * @param value
         */
        virtual void setSlippageX(IfcLengthMeasure value);
        /**
         * unset the attribute 'SlippageX'.
         * 
         */
        virtual void unsetSlippageX();
        /**
         * Test if the attribute 'SlippageX' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSlippageX() const;
        /**
         * Gets the value of the explicit attribute 'SlippageY'.
         * 
         */
        virtual IfcLengthMeasure getSlippageY();
        /**
         * (const) Returns the value of the explicit attribute 'SlippageY'.
         * 
         * @return the value of the explicit attribute 'SlippageY'
         */
        virtual const IfcLengthMeasure getSlippageY() const;
        /**
         * Sets the value of the explicit attribute 'SlippageY'.
         * 
         * @param value
         */
        virtual void setSlippageY(IfcLengthMeasure value);
        /**
         * unset the attribute 'SlippageY'.
         * 
         */
        virtual void unsetSlippageY();
        /**
         * Test if the attribute 'SlippageY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSlippageY() const;
        /**
         * Gets the value of the explicit attribute 'SlippageZ'.
         * 
         */
        virtual IfcLengthMeasure getSlippageZ();
        /**
         * (const) Returns the value of the explicit attribute 'SlippageZ'.
         * 
         * @return the value of the explicit attribute 'SlippageZ'
         */
        virtual const IfcLengthMeasure getSlippageZ() const;
        /**
         * Sets the value of the explicit attribute 'SlippageZ'.
         * 
         * @param value
         */
        virtual void setSlippageZ(IfcLengthMeasure value);
        /**
         * unset the attribute 'SlippageZ'.
         * 
         */
        virtual void unsetSlippageZ();
        /**
         * Test if the attribute 'SlippageZ' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSlippageZ() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSlippageConnectionCondition(Step::Id id, Step::SPFData *args);
        virtual ~IfcSlippageConnectionCondition();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSlippageConnectionCondition &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_slippageX;
        /**
         */
        Step::Real m_slippageY;
        /**
         */
        Step::Real m_slippageZ;

    };

}

#endif // IFC2X3_IFCSLIPPAGECONNECTIONCONDITION_H
