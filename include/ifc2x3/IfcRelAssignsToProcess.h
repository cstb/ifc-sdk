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

#ifndef IFC2X3_IFCRELASSIGNSTOPROCESS_H
#define IFC2X3_IFCRELASSIGNSTOPROCESS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcRelAssigns.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcMeasureWithUnit;
    class IfcProcess;

    /**
     * Generated class for the IfcRelAssignsToProcess Entity.
     * 
     */
    class IFC2X3_EXPORT IfcRelAssignsToProcess : public IfcRelAssigns {
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
         * Gets the value of the explicit attribute 'RelatingProcess'.
         * 
         */
        virtual IfcProcess *getRelatingProcess();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingProcess'.
         * 
         * @return the value of the explicit attribute 'RelatingProcess'
         */
        virtual const IfcProcess *getRelatingProcess() const;
        /**
         * Sets the value of the explicit attribute 'RelatingProcess'.
         * 
         * @param value
         */
        virtual void setRelatingProcess(const Step::RefPtr< IfcProcess > &value);
        /**
         * unset the attribute 'RelatingProcess'.
         * 
         */
        virtual void unsetRelatingProcess();
        /**
         * Test if the attribute 'RelatingProcess' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatingProcess() const;
        /**
         * Gets the value of the explicit attribute 'QuantityInProcess'.
         * 
         */
        virtual IfcMeasureWithUnit *getQuantityInProcess();
        /**
         * (const) Returns the value of the explicit attribute 'QuantityInProcess'.
         * 
         * @return the value of the explicit attribute 'QuantityInProcess'
         */
        virtual const IfcMeasureWithUnit *getQuantityInProcess() const;
        /**
         * Sets the value of the explicit attribute 'QuantityInProcess'.
         * 
         * @param value
         */
        virtual void setQuantityInProcess(const Step::RefPtr< IfcMeasureWithUnit > &value);
        /**
         * unset the attribute 'QuantityInProcess'.
         * 
         */
        virtual void unsetQuantityInProcess();
        /**
         * Test if the attribute 'QuantityInProcess' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testQuantityInProcess() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelAssignsToProcess(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelAssignsToProcess();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelAssignsToProcess &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcProcess > m_relatingProcess;
        /**
         */
        Step::RefPtr< IfcMeasureWithUnit > m_quantityInProcess;

    };

}

#endif // IFC2X3_IFCRELASSIGNSTOPROCESS_H
