/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
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
         * Accepts a read/write DatatypeVisitor.
         * 
         * @param v the read/write DatatypeVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *v);
        /**
         */
        virtual const std::string &type();
        /**
         */
        static Step::ClassType getClassType();
        /**
         */
        virtual Step::ClassType getType() const;
        /**
         * @param t
         */
        virtual bool isOfType(Step::ClassType t);
        /**
         */
        IfcLengthMeasure getElevationOfRefHeight();
        /**
         * Sets the value of the explicit attribute 'ElevationOfRefHeight'.
         * 
         * @param value
         */
        void setElevationOfRefHeight(IfcLengthMeasure value);
        /**
         */
        IfcLengthMeasure getElevationOfTerrain();
        /**
         * Sets the value of the explicit attribute 'ElevationOfTerrain'.
         * 
         * @param value
         */
        void setElevationOfTerrain(IfcLengthMeasure value);
        /**
         */
        IfcPostalAddress *getBuildingAddress();
        /**
         * Sets the value of the explicit attribute 'BuildingAddress'.
         * 
         * @param value
         */
        void setBuildingAddress(const Step::RefPtr< IfcPostalAddress > &value);
        /**
         */
        virtual void release();
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
