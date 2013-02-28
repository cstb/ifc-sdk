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

#ifndef IFC2X3_IFCRELSEQUENCE_H
#define IFC2X3_IFCRELSEQUENCE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcRelConnects.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcProcess;

    /**
     * Generated class for the IfcRelSequence Entity.
     * 
     */
    class IFC2X3_EXPORT IfcRelSequence : public IfcRelConnects {
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
         * Gets the value of the explicit attribute 'RelatedProcess'.
         * 
         */
        virtual IfcProcess *getRelatedProcess();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedProcess'.
         * 
         * @return the value of the explicit attribute 'RelatedProcess'
         */
        virtual const IfcProcess *getRelatedProcess() const;
        /**
         * Sets the value of the explicit attribute 'RelatedProcess'.
         * 
         * @param value
         */
        virtual void setRelatedProcess(const Step::RefPtr< IfcProcess > &value);
        /**
         * unset the attribute 'RelatedProcess'.
         * 
         */
        virtual void unsetRelatedProcess();
        /**
         * Test if the attribute 'RelatedProcess' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatedProcess() const;
        /**
         * Gets the value of the explicit attribute 'TimeLag'.
         * 
         */
        virtual IfcTimeMeasure getTimeLag();
        /**
         * (const) Returns the value of the explicit attribute 'TimeLag'.
         * 
         * @return the value of the explicit attribute 'TimeLag'
         */
        virtual const IfcTimeMeasure getTimeLag() const;
        /**
         * Sets the value of the explicit attribute 'TimeLag'.
         * 
         * @param value
         */
        virtual void setTimeLag(IfcTimeMeasure value);
        /**
         * unset the attribute 'TimeLag'.
         * 
         */
        virtual void unsetTimeLag();
        /**
         * Test if the attribute 'TimeLag' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTimeLag() const;
        /**
         * Gets the value of the explicit attribute 'SequenceType'.
         * 
         */
        virtual IfcSequenceEnum getSequenceType();
        /**
         * (const) Returns the value of the explicit attribute 'SequenceType'.
         * 
         * @return the value of the explicit attribute 'SequenceType'
         */
        virtual const IfcSequenceEnum getSequenceType() const;
        /**
         * Sets the value of the explicit attribute 'SequenceType'.
         * 
         * @param value
         */
        virtual void setSequenceType(IfcSequenceEnum value);
        /**
         * unset the attribute 'SequenceType'.
         * 
         */
        virtual void unsetSequenceType();
        /**
         * Test if the attribute 'SequenceType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSequenceType() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelSequence(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelSequence();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelSequence &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcProcess > m_relatingProcess;
        /**
         */
        Step::RefPtr< IfcProcess > m_relatedProcess;
        /**
         */
        Step::Real m_timeLag;
        /**
         */
        IfcSequenceEnum m_sequenceType;

    };

}

#endif // IFC2X3_IFCRELSEQUENCE_H
