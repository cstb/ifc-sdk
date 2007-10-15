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

#ifndef IFC2X3_IFCREINFORCINGMESH_H
#define IFC2X3_IFCREINFORCINGMESH_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcReinforcingElement.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcReinforcingMesh : public IfcReinforcingElement {
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
        IfcPositiveLengthMeasure getMeshLength();
        /**
         * Sets the value of the explicit attribute 'MeshLength'.
         * 
         * @param value
         */
        void setMeshLength(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getMeshWidth();
        /**
         * Sets the value of the explicit attribute 'MeshWidth'.
         * 
         * @param value
         */
        void setMeshWidth(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getLongitudinalBarNominalDiameter();
        /**
         * Sets the value of the explicit attribute 'LongitudinalBarNominalDiameter'.
         * 
         * @param value
         */
        void setLongitudinalBarNominalDiameter(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getTransverseBarNominalDiameter();
        /**
         * Sets the value of the explicit attribute 'TransverseBarNominalDiameter'.
         * 
         * @param value
         */
        void setTransverseBarNominalDiameter(IfcPositiveLengthMeasure value);
        /**
         */
        IfcAreaMeasure getLongitudinalBarCrossSectionArea();
        /**
         * Sets the value of the explicit attribute 'LongitudinalBarCrossSectionArea'.
         * 
         * @param value
         */
        void setLongitudinalBarCrossSectionArea(IfcAreaMeasure value);
        /**
         */
        IfcAreaMeasure getTransverseBarCrossSectionArea();
        /**
         * Sets the value of the explicit attribute 'TransverseBarCrossSectionArea'.
         * 
         * @param value
         */
        void setTransverseBarCrossSectionArea(IfcAreaMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getLongitudinalBarSpacing();
        /**
         * Sets the value of the explicit attribute 'LongitudinalBarSpacing'.
         * 
         * @param value
         */
        void setLongitudinalBarSpacing(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getTransverseBarSpacing();
        /**
         * Sets the value of the explicit attribute 'TransverseBarSpacing'.
         * 
         * @param value
         */
        void setTransverseBarSpacing(IfcPositiveLengthMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcReinforcingMesh(Step::Id id, Step::SPFData *args);
        virtual ~IfcReinforcingMesh();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcReinforcingMesh &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_meshLength;
        /**
         */
        Step::Real m_meshWidth;
        /**
         */
        Step::Real m_longitudinalBarNominalDiameter;
        /**
         */
        Step::Real m_transverseBarNominalDiameter;
        /**
         */
        Step::Real m_longitudinalBarCrossSectionArea;
        /**
         */
        Step::Real m_transverseBarCrossSectionArea;
        /**
         */
        Step::Real m_longitudinalBarSpacing;
        /**
         */
        Step::Real m_transverseBarSpacing;

    };

}

#endif // IFC2X3_IFCREINFORCINGMESH_H
