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

#ifndef IFC2X3_IFCFAILURECONNECTIONCONDITION_H
#define IFC2X3_IFCFAILURECONNECTIONCONDITION_H
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
     * Generated class for the IfcFailureConnectionCondition Entity.
     * 
     */
    class IFC2X3_EXPORT IfcFailureConnectionCondition : public IfcStructuralConnectionCondition {
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
         * Gets the value of the explicit attribute 'TensionFailureX'.
         * 
         */
        virtual IfcForceMeasure getTensionFailureX();
        /**
         * (const) Returns the value of the explicit attribute 'TensionFailureX'.
         * 
         * @return the value of the explicit attribute 'TensionFailureX'
         */
        virtual const IfcForceMeasure getTensionFailureX() const;
        /**
         * Sets the value of the explicit attribute 'TensionFailureX'.
         * 
         * @param value
         */
        virtual void setTensionFailureX(IfcForceMeasure value);
        /**
         * unset the attribute 'TensionFailureX'.
         * 
         */
        virtual void unsetTensionFailureX();
        /**
         * Test if the attribute 'TensionFailureX' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTensionFailureX() const;
        /**
         * Gets the value of the explicit attribute 'TensionFailureY'.
         * 
         */
        virtual IfcForceMeasure getTensionFailureY();
        /**
         * (const) Returns the value of the explicit attribute 'TensionFailureY'.
         * 
         * @return the value of the explicit attribute 'TensionFailureY'
         */
        virtual const IfcForceMeasure getTensionFailureY() const;
        /**
         * Sets the value of the explicit attribute 'TensionFailureY'.
         * 
         * @param value
         */
        virtual void setTensionFailureY(IfcForceMeasure value);
        /**
         * unset the attribute 'TensionFailureY'.
         * 
         */
        virtual void unsetTensionFailureY();
        /**
         * Test if the attribute 'TensionFailureY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTensionFailureY() const;
        /**
         * Gets the value of the explicit attribute 'TensionFailureZ'.
         * 
         */
        virtual IfcForceMeasure getTensionFailureZ();
        /**
         * (const) Returns the value of the explicit attribute 'TensionFailureZ'.
         * 
         * @return the value of the explicit attribute 'TensionFailureZ'
         */
        virtual const IfcForceMeasure getTensionFailureZ() const;
        /**
         * Sets the value of the explicit attribute 'TensionFailureZ'.
         * 
         * @param value
         */
        virtual void setTensionFailureZ(IfcForceMeasure value);
        /**
         * unset the attribute 'TensionFailureZ'.
         * 
         */
        virtual void unsetTensionFailureZ();
        /**
         * Test if the attribute 'TensionFailureZ' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTensionFailureZ() const;
        /**
         * Gets the value of the explicit attribute 'CompressionFailureX'.
         * 
         */
        virtual IfcForceMeasure getCompressionFailureX();
        /**
         * (const) Returns the value of the explicit attribute 'CompressionFailureX'.
         * 
         * @return the value of the explicit attribute 'CompressionFailureX'
         */
        virtual const IfcForceMeasure getCompressionFailureX() const;
        /**
         * Sets the value of the explicit attribute 'CompressionFailureX'.
         * 
         * @param value
         */
        virtual void setCompressionFailureX(IfcForceMeasure value);
        /**
         * unset the attribute 'CompressionFailureX'.
         * 
         */
        virtual void unsetCompressionFailureX();
        /**
         * Test if the attribute 'CompressionFailureX' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCompressionFailureX() const;
        /**
         * Gets the value of the explicit attribute 'CompressionFailureY'.
         * 
         */
        virtual IfcForceMeasure getCompressionFailureY();
        /**
         * (const) Returns the value of the explicit attribute 'CompressionFailureY'.
         * 
         * @return the value of the explicit attribute 'CompressionFailureY'
         */
        virtual const IfcForceMeasure getCompressionFailureY() const;
        /**
         * Sets the value of the explicit attribute 'CompressionFailureY'.
         * 
         * @param value
         */
        virtual void setCompressionFailureY(IfcForceMeasure value);
        /**
         * unset the attribute 'CompressionFailureY'.
         * 
         */
        virtual void unsetCompressionFailureY();
        /**
         * Test if the attribute 'CompressionFailureY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCompressionFailureY() const;
        /**
         * Gets the value of the explicit attribute 'CompressionFailureZ'.
         * 
         */
        virtual IfcForceMeasure getCompressionFailureZ();
        /**
         * (const) Returns the value of the explicit attribute 'CompressionFailureZ'.
         * 
         * @return the value of the explicit attribute 'CompressionFailureZ'
         */
        virtual const IfcForceMeasure getCompressionFailureZ() const;
        /**
         * Sets the value of the explicit attribute 'CompressionFailureZ'.
         * 
         * @param value
         */
        virtual void setCompressionFailureZ(IfcForceMeasure value);
        /**
         * unset the attribute 'CompressionFailureZ'.
         * 
         */
        virtual void unsetCompressionFailureZ();
        /**
         * Test if the attribute 'CompressionFailureZ' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCompressionFailureZ() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcFailureConnectionCondition(Step::Id id, Step::SPFData *args);
        virtual ~IfcFailureConnectionCondition();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcFailureConnectionCondition &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_tensionFailureX;
        /**
         */
        Step::Real m_tensionFailureY;
        /**
         */
        Step::Real m_tensionFailureZ;
        /**
         */
        Step::Real m_compressionFailureX;
        /**
         */
        Step::Real m_compressionFailureY;
        /**
         */
        Step::Real m_compressionFailureZ;

    };

}

#endif // IFC2X3_IFCFAILURECONNECTIONCONDITION_H
