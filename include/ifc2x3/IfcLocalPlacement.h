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

#ifndef IFC2X3_IFCLOCALPLACEMENT_H
#define IFC2X3_IFCLOCALPLACEMENT_H
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
    class IfcAxis2Placement;

    /**
     * Generated class for the IfcLocalPlacement Entity.
     * 
     */
    class IFC2X3_EXPORT IfcLocalPlacement : public IfcObjectPlacement {
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
         * Gets the value of the explicit attribute 'PlacementRelTo'.
         * 
         */
        virtual IfcObjectPlacement *getPlacementRelTo();
        /**
         * (const) Returns the value of the explicit attribute 'PlacementRelTo'.
         * 
         * @return the value of the explicit attribute 'PlacementRelTo'
         */
        virtual const IfcObjectPlacement *getPlacementRelTo() const;
        /**
         * Sets the value of the explicit attribute 'PlacementRelTo'.
         * 
         * @param value
         */
        virtual void setPlacementRelTo(const Step::RefPtr< IfcObjectPlacement > &value);
        /**
         * unset the attribute 'PlacementRelTo'.
         * 
         */
        virtual void unsetPlacementRelTo();
        /**
         * Test if the attribute 'PlacementRelTo' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPlacementRelTo() const;
        /**
         * Gets the value of the explicit attribute 'RelativePlacement'.
         * 
         */
        virtual IfcAxis2Placement *getRelativePlacement();
        /**
         * (const) Returns the value of the explicit attribute 'RelativePlacement'.
         * 
         * @return the value of the explicit attribute 'RelativePlacement'
         */
        virtual const IfcAxis2Placement *getRelativePlacement() const;
        /**
         * Sets the value of the explicit attribute 'RelativePlacement'.
         * 
         * @param value
         */
        virtual void setRelativePlacement(const Step::RefPtr< IfcAxis2Placement > &value);
        /**
         * unset the attribute 'RelativePlacement'.
         * 
         */
        virtual void unsetRelativePlacement();
        /**
         * Test if the attribute 'RelativePlacement' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelativePlacement() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcLocalPlacement(Step::Id id, Step::SPFData *args);
        virtual ~IfcLocalPlacement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcLocalPlacement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcObjectPlacement > m_placementRelTo;
        /**
         */
        Step::RefPtr< IfcAxis2Placement > m_relativePlacement;

    };

}

#endif // IFC2X3_IFCLOCALPLACEMENT_H
