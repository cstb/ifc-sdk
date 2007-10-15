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

#ifndef IFC2X3_IFCGEOMETRICREPRESENTATIONCONTEXT_H
#define IFC2X3_IFCGEOMETRICREPRESENTATIONCONTEXT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcRepresentationContext.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcAxis2Placement;
    class IfcDirection;
    class IfcGeometricRepresentationSubContext;

    /**
     */
    class IFC2X3_DLL_DEF IfcGeometricRepresentationContext : public IfcRepresentationContext {
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
        IfcDimensionCount getCoordinateSpaceDimension();
        /**
         * Sets the value of the explicit attribute 'CoordinateSpaceDimension'.
         * 
         * @param value
         */
        void setCoordinateSpaceDimension(IfcDimensionCount value);
        /**
         */
        Step::Real getPrecision();
        /**
         * Sets the value of the explicit attribute 'Precision'.
         * 
         * @param value
         */
        void setPrecision(Step::Real value);
        /**
         */
        IfcAxis2Placement *getWorldCoordinateSystem();
        /**
         * Sets the value of the explicit attribute 'WorldCoordinateSystem'.
         * 
         * @param value
         */
        void setWorldCoordinateSystem(const Step::RefPtr< IfcAxis2Placement > &value);
        /**
         */
        IfcDirection *getTrueNorth();
        /**
         * Sets the value of the explicit attribute 'TrueNorth'.
         * 
         * @param value
         */
        void setTrueNorth(const Step::RefPtr< IfcDirection > &value);
        /**
         */
        Step::Set< Step::ObsPtr< IfcGeometricRepresentationSubContext > > &getHasSubContexts();
        /**
         */
        virtual void release();
        friend class IfcGeometricRepresentationSubContext;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcGeometricRepresentationContext(Step::Id id, Step::SPFData *args);
        virtual ~IfcGeometricRepresentationContext();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcGeometricRepresentationContext &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Integer m_coordinateSpaceDimension;
        /**
         */
        Step::Real m_precision;
        /**
         */
        Step::RefPtr< IfcAxis2Placement > m_worldCoordinateSystem;
        /**
         */
        Step::RefPtr< IfcDirection > m_trueNorth;
        /**
         */
        Step::Set< Step::ObsPtr< IfcGeometricRepresentationSubContext > > m_hasSubContexts;

    };

}

#endif // IFC2X3_IFCGEOMETRICREPRESENTATIONCONTEXT_H
