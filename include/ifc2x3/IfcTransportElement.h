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

#ifndef IFC2X3_IFCTRANSPORTELEMENT_H
#define IFC2X3_IFCTRANSPORTELEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcElement.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcTransportElement Entity.
     * 
     */
    class IFC2X3_EXPORT IfcTransportElement : public IfcElement {
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
         * Gets the value of the explicit attribute 'OperationType'.
         * 
         */
        virtual IfcTransportElementTypeEnum getOperationType();
        /**
         * (const) Returns the value of the explicit attribute 'OperationType'.
         * 
         * @return the value of the explicit attribute 'OperationType'
         */
        virtual const IfcTransportElementTypeEnum getOperationType() const;
        /**
         * Sets the value of the explicit attribute 'OperationType'.
         * 
         * @param value
         */
        virtual void setOperationType(IfcTransportElementTypeEnum value);
        /**
         * unset the attribute 'OperationType'.
         * 
         */
        virtual void unsetOperationType();
        /**
         * Test if the attribute 'OperationType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testOperationType() const;
        /**
         * Gets the value of the explicit attribute 'CapacityByWeight'.
         * 
         */
        virtual IfcMassMeasure getCapacityByWeight();
        /**
         * (const) Returns the value of the explicit attribute 'CapacityByWeight'.
         * 
         * @return the value of the explicit attribute 'CapacityByWeight'
         */
        virtual const IfcMassMeasure getCapacityByWeight() const;
        /**
         * Sets the value of the explicit attribute 'CapacityByWeight'.
         * 
         * @param value
         */
        virtual void setCapacityByWeight(IfcMassMeasure value);
        /**
         * unset the attribute 'CapacityByWeight'.
         * 
         */
        virtual void unsetCapacityByWeight();
        /**
         * Test if the attribute 'CapacityByWeight' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCapacityByWeight() const;
        /**
         * Gets the value of the explicit attribute 'CapacityByNumber'.
         * 
         */
        virtual IfcCountMeasure getCapacityByNumber();
        /**
         * (const) Returns the value of the explicit attribute 'CapacityByNumber'.
         * 
         * @return the value of the explicit attribute 'CapacityByNumber'
         */
        virtual const IfcCountMeasure getCapacityByNumber() const;
        /**
         * Sets the value of the explicit attribute 'CapacityByNumber'.
         * 
         * @param value
         */
        virtual void setCapacityByNumber(IfcCountMeasure value);
        /**
         * unset the attribute 'CapacityByNumber'.
         * 
         */
        virtual void unsetCapacityByNumber();
        /**
         * Test if the attribute 'CapacityByNumber' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCapacityByNumber() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTransportElement(Step::Id id, Step::SPFData *args);
        virtual ~IfcTransportElement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTransportElement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcTransportElementTypeEnum m_operationType;
        /**
         */
        Step::Real m_capacityByWeight;
        /**
         */
        Step::Number m_capacityByNumber;

    };

}

#endif // IFC2X3_IFCTRANSPORTELEMENT_H
