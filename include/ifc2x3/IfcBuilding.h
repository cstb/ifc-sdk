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

#ifndef IFC2X3_IFCBUILDING_H
#define IFC2X3_IFCBUILDING_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcSpatialStructureElement.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcPostalAddress;

    /**
     * Generated class for the IfcBuilding Entity.
     * 
     */
    class IFC2X3_EXPORT IfcBuilding : public IfcSpatialStructureElement {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        bool acceptVisitor(Step::BaseVisitor *visitor) override;
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        const std::string &type() const override;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        const Step::ClassType &getType() const override;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        bool isOfType(const Step::ClassType &t) const override;
        /**
         * Gets the value of the explicit attribute 'ElevationOfRefHeight'.
         * 
         */
        virtual IfcLengthMeasure getElevationOfRefHeight();
        /**
         * (const) Returns the value of the explicit attribute 'ElevationOfRefHeight'.
         * 
         * @return the value of the explicit attribute 'ElevationOfRefHeight'
         */
        virtual const IfcLengthMeasure getElevationOfRefHeight() const;
        /**
         * Sets the value of the explicit attribute 'ElevationOfRefHeight'.
         * 
         * @param value
         */
        virtual void setElevationOfRefHeight(IfcLengthMeasure value);
        /**
         * unset the attribute 'ElevationOfRefHeight'.
         * 
         */
        virtual void unsetElevationOfRefHeight();
        /**
         * Test if the attribute 'ElevationOfRefHeight' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testElevationOfRefHeight() const;
        /**
         * Gets the value of the explicit attribute 'ElevationOfTerrain'.
         * 
         */
        virtual IfcLengthMeasure getElevationOfTerrain();
        /**
         * (const) Returns the value of the explicit attribute 'ElevationOfTerrain'.
         * 
         * @return the value of the explicit attribute 'ElevationOfTerrain'
         */
        virtual const IfcLengthMeasure getElevationOfTerrain() const;
        /**
         * Sets the value of the explicit attribute 'ElevationOfTerrain'.
         * 
         * @param value
         */
        virtual void setElevationOfTerrain(IfcLengthMeasure value);
        /**
         * unset the attribute 'ElevationOfTerrain'.
         * 
         */
        virtual void unsetElevationOfTerrain();
        /**
         * Test if the attribute 'ElevationOfTerrain' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testElevationOfTerrain() const;
        /**
         * Gets the value of the explicit attribute 'BuildingAddress'.
         * 
         */
        virtual IfcPostalAddress *getBuildingAddress();
        /**
         * (const) Returns the value of the explicit attribute 'BuildingAddress'.
         * 
         * @return the value of the explicit attribute 'BuildingAddress'
         */
        virtual const IfcPostalAddress *getBuildingAddress() const;
        /**
         * Sets the value of the explicit attribute 'BuildingAddress'.
         * 
         * @param value
         */
        virtual void setBuildingAddress(const Step::RefPtr< IfcPostalAddress > &value);
        /**
         * unset the attribute 'BuildingAddress'.
         * 
         */
        virtual void unsetBuildingAddress();
        /**
         * Test if the attribute 'BuildingAddress' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testBuildingAddress() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcBuilding(Step::Id id, Step::SPFData *args);
        ~IfcBuilding() override;
        /**
         */
        bool init() override;
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcBuilding &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_elevationOfRefHeight;
        /**
         */
        Step::Real m_elevationOfTerrain;
        /**
         */
        Step::RefPtr< IfcPostalAddress > m_buildingAddress;

    };

}

#endif // IFC2X3_IFCBUILDING_H
