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

#ifndef IFC2X3_IFCPROCESS_H
#define IFC2X3_IFCPROCESS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcObject.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcProcess Entity.
     * 
     */
    class IFC2X3_EXPORT IfcProcess : public IfcObject {
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
         * Gets the value of the inverse attribute 'OperatesOn'.
         * 
         */
        virtual Inverse_Set_IfcRelAssignsToProcess_0_n &getOperatesOn();
        /**
         * (const) Returns the value of the explicit attribute 'OperatesOn'.
         * 
         * @return the value of the explicit attribute 'OperatesOn'
         */
        const virtual Inverse_Set_IfcRelAssignsToProcess_0_n &getOperatesOn() const;
        /**
         * Test if the attribute 'OperatesOn' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testOperatesOn() const;
        /**
         * Gets the value of the inverse attribute 'IsSuccessorFrom'.
         * 
         */
        virtual Inverse_Set_IfcRelSequence_0_n &getIsSuccessorFrom();
        /**
         * (const) Returns the value of the explicit attribute 'IsSuccessorFrom'.
         * 
         * @return the value of the explicit attribute 'IsSuccessorFrom'
         */
        const virtual Inverse_Set_IfcRelSequence_0_n &getIsSuccessorFrom() const;
        /**
         * Test if the attribute 'IsSuccessorFrom' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIsSuccessorFrom() const;
        /**
         * Gets the value of the inverse attribute 'IsPredecessorTo'.
         * 
         */
        virtual Inverse_Set_IfcRelSequence_0_n &getIsPredecessorTo();
        /**
         * (const) Returns the value of the explicit attribute 'IsPredecessorTo'.
         * 
         * @return the value of the explicit attribute 'IsPredecessorTo'
         */
        const virtual Inverse_Set_IfcRelSequence_0_n &getIsPredecessorTo() const;
        /**
         * Test if the attribute 'IsPredecessorTo' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIsPredecessorTo() const;
        friend class IfcRelAssignsToProcess;
        friend class ExpressDataSet;
        friend class IfcRelSequence;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcProcess(Step::Id id, Step::SPFData *args);
        virtual ~IfcProcess();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcProcess &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverse_Set_IfcRelAssignsToProcess_0_n m_operatesOn;
        /**
         */
        Inverse_Set_IfcRelSequence_0_n m_isSuccessorFrom;
        /**
         */
        Inverse_Set_IfcRelSequence_0_n m_isPredecessorTo;

    };

}

#endif // IFC2X3_IFCPROCESS_H
