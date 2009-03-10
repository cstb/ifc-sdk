/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCBUILDING_H
#define IFC2X3_IFCBUILDING_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcSpatialStructureElement.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcPostalAddress;

    /**
     */
    class IFC2X3_DLL_DEF IfcBuilding : public IfcSpatialStructureElement {
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
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcBuilding(Step::Id id, Step::SPFData *args);
        virtual ~IfcBuilding();
        /**
         */
        virtual bool init();
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
