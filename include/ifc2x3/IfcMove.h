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

#ifndef IFC2X3_IFCMOVE_H
#define IFC2X3_IFCMOVE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcTask.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcSpatialStructureElement;

    /**
     * Generated class for the IfcMove Entity.
     * 
     */
    class IFC2X3_EXPORT IfcMove : public IfcTask {
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
         * Gets the value of the explicit attribute 'MoveFrom'.
         * 
         */
        virtual IfcSpatialStructureElement *getMoveFrom();
        /**
         * (const) Returns the value of the explicit attribute 'MoveFrom'.
         * 
         * @return the value of the explicit attribute 'MoveFrom'
         */
        virtual const IfcSpatialStructureElement *getMoveFrom() const;
        /**
         * Sets the value of the explicit attribute 'MoveFrom'.
         * 
         * @param value
         */
        virtual void setMoveFrom(const Step::RefPtr< IfcSpatialStructureElement > &value);
        /**
         * unset the attribute 'MoveFrom'.
         * 
         */
        virtual void unsetMoveFrom();
        /**
         * Test if the attribute 'MoveFrom' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMoveFrom() const;
        /**
         * Gets the value of the explicit attribute 'MoveTo'.
         * 
         */
        virtual IfcSpatialStructureElement *getMoveTo();
        /**
         * (const) Returns the value of the explicit attribute 'MoveTo'.
         * 
         * @return the value of the explicit attribute 'MoveTo'
         */
        virtual const IfcSpatialStructureElement *getMoveTo() const;
        /**
         * Sets the value of the explicit attribute 'MoveTo'.
         * 
         * @param value
         */
        virtual void setMoveTo(const Step::RefPtr< IfcSpatialStructureElement > &value);
        /**
         * unset the attribute 'MoveTo'.
         * 
         */
        virtual void unsetMoveTo();
        /**
         * Test if the attribute 'MoveTo' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMoveTo() const;
        /**
         * Gets the value of the explicit attribute 'PunchList'.
         * 
         */
        virtual List_IfcText_1_n &getPunchList();
        /**
         * (const) Returns the value of the explicit attribute 'PunchList'.
         * 
         * @return the value of the explicit attribute 'PunchList'
         */
        virtual const List_IfcText_1_n &getPunchList() const;
        /**
         * Sets the value of the explicit attribute 'PunchList'.
         * 
         * @param value
         */
        virtual void setPunchList(const List_IfcText_1_n &value);
        /**
         * unset the attribute 'PunchList'.
         * 
         */
        virtual void unsetPunchList();
        /**
         * Test if the attribute 'PunchList' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPunchList() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcMove(Step::Id id, Step::SPFData *args);
        virtual ~IfcMove();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMove &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcSpatialStructureElement > m_moveFrom;
        /**
         */
        Step::RefPtr< IfcSpatialStructureElement > m_moveTo;
        /**
         */
        List_IfcText_1_n m_punchList;

    };

}

#endif // IFC2X3_IFCMOVE_H
