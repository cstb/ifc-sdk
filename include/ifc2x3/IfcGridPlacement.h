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

#ifndef IFC2X3_IFCGRIDPLACEMENT_H
#define IFC2X3_IFCGRIDPLACEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcObjectPlacement.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcVirtualGridIntersection;

    /**
     * Generated class for the IfcGridPlacement Entity.
     * 
     */
    class IFC2X3_EXPORT IfcGridPlacement : public IfcObjectPlacement {
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
         * Gets the value of the explicit attribute 'PlacementLocation'.
         * 
         */
        virtual IfcVirtualGridIntersection *getPlacementLocation();
        /**
         * (const) Returns the value of the explicit attribute 'PlacementLocation'.
         * 
         * @return the value of the explicit attribute 'PlacementLocation'
         */
        virtual const IfcVirtualGridIntersection *getPlacementLocation() const;
        /**
         * Sets the value of the explicit attribute 'PlacementLocation'.
         * 
         * @param value
         */
        virtual void setPlacementLocation(const Step::RefPtr< IfcVirtualGridIntersection > &value);
        /**
         * unset the attribute 'PlacementLocation'.
         * 
         */
        virtual void unsetPlacementLocation();
        /**
         * Test if the attribute 'PlacementLocation' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPlacementLocation() const;
        /**
         * Gets the value of the explicit attribute 'PlacementRefDirection'.
         * 
         */
        virtual IfcVirtualGridIntersection *getPlacementRefDirection();
        /**
         * (const) Returns the value of the explicit attribute 'PlacementRefDirection'.
         * 
         * @return the value of the explicit attribute 'PlacementRefDirection'
         */
        virtual const IfcVirtualGridIntersection *getPlacementRefDirection() const;
        /**
         * Sets the value of the explicit attribute 'PlacementRefDirection'.
         * 
         * @param value
         */
        virtual void setPlacementRefDirection(const Step::RefPtr< IfcVirtualGridIntersection > &value);
        /**
         * unset the attribute 'PlacementRefDirection'.
         * 
         */
        virtual void unsetPlacementRefDirection();
        /**
         * Test if the attribute 'PlacementRefDirection' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPlacementRefDirection() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcGridPlacement(Step::Id id, Step::SPFData *args);
        virtual ~IfcGridPlacement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcGridPlacement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcVirtualGridIntersection > m_placementLocation;
        /**
         */
        Step::RefPtr< IfcVirtualGridIntersection > m_placementRefDirection;

    };

}

#endif // IFC2X3_IFCGRIDPLACEMENT_H
