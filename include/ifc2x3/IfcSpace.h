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

#ifndef IFC2X3_IFCSPACE_H
#define IFC2X3_IFCSPACE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include "ifc2x3/IfcSpatialStructureElement.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcRelCoversSpaces;
    class IfcRelSpaceBoundary;

    /**
     */
    class IFC2X3_DLL_DEF IfcSpace : public IfcSpatialStructureElement {
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
        IfcInternalOrExternalEnum getInteriorOrExteriorSpace();
        /**
         * Sets the value of the explicit attribute 'InteriorOrExteriorSpace'.
         * 
         * @param value
         */
        void setInteriorOrExteriorSpace(IfcInternalOrExternalEnum value);
        /**
         */
        IfcLengthMeasure getElevationWithFlooring();
        /**
         * Sets the value of the explicit attribute 'ElevationWithFlooring'.
         * 
         * @param value
         */
        void setElevationWithFlooring(IfcLengthMeasure value);
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelCoversSpaces > > &getHasCoverings();
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelSpaceBoundary > > &getBoundedBy();
        /**
         */
        virtual void release();
        friend class IfcRelCoversSpaces;
        friend class ExpressDataSet;
        friend class IfcRelSpaceBoundary;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSpace(Step::Id id, Step::SPFData *args);
        virtual ~IfcSpace();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSpace &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcInternalOrExternalEnum m_interiorOrExteriorSpace;
        /**
         */
        Step::Real m_elevationWithFlooring;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelCoversSpaces > > m_hasCoverings;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelSpaceBoundary > > m_boundedBy;

    };

}

#endif // IFC2X3_IFCSPACE_H
