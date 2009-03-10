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
         * Gets the value of the explicit attribute 'MeshLength'.
         * 
         */
        virtual IfcPositiveLengthMeasure getMeshLength();
        /**
         * (const) Returns the value of the explicit attribute 'MeshLength'.
         * 
         * @return the value of the explicit attribute 'MeshLength'
         */
        virtual const IfcPositiveLengthMeasure getMeshLength() const;
        /**
         * Sets the value of the explicit attribute 'MeshLength'.
         * 
         * @param value
         */
        virtual void setMeshLength(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'MeshWidth'.
         * 
         */
        virtual IfcPositiveLengthMeasure getMeshWidth();
        /**
         * (const) Returns the value of the explicit attribute 'MeshWidth'.
         * 
         * @return the value of the explicit attribute 'MeshWidth'
         */
        virtual const IfcPositiveLengthMeasure getMeshWidth() const;
        /**
         * Sets the value of the explicit attribute 'MeshWidth'.
         * 
         * @param value
         */
        virtual void setMeshWidth(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'LongitudinalBarNominalDiameter'.
         * 
         */
        virtual IfcPositiveLengthMeasure getLongitudinalBarNominalDiameter();
        /**
         * (const) Returns the value of the explicit attribute 'LongitudinalBarNominalDiameter'.
         * 
         * @return the value of the explicit attribute 'LongitudinalBarNominalDiameter'
         */
        virtual const IfcPositiveLengthMeasure getLongitudinalBarNominalDiameter() const;
        /**
         * Sets the value of the explicit attribute 'LongitudinalBarNominalDiameter'.
         * 
         * @param value
         */
        virtual void setLongitudinalBarNominalDiameter(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'TransverseBarNominalDiameter'.
         * 
         */
        virtual IfcPositiveLengthMeasure getTransverseBarNominalDiameter();
        /**
         * (const) Returns the value of the explicit attribute 'TransverseBarNominalDiameter'.
         * 
         * @return the value of the explicit attribute 'TransverseBarNominalDiameter'
         */
        virtual const IfcPositiveLengthMeasure getTransverseBarNominalDiameter() const;
        /**
         * Sets the value of the explicit attribute 'TransverseBarNominalDiameter'.
         * 
         * @param value
         */
        virtual void setTransverseBarNominalDiameter(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'LongitudinalBarCrossSectionArea'.
         * 
         */
        virtual IfcAreaMeasure getLongitudinalBarCrossSectionArea();
        /**
         * (const) Returns the value of the explicit attribute 'LongitudinalBarCrossSectionArea'.
         * 
         * @return the value of the explicit attribute 'LongitudinalBarCrossSectionArea'
         */
        virtual const IfcAreaMeasure getLongitudinalBarCrossSectionArea() const;
        /**
         * Sets the value of the explicit attribute 'LongitudinalBarCrossSectionArea'.
         * 
         * @param value
         */
        virtual void setLongitudinalBarCrossSectionArea(IfcAreaMeasure value);
        /**
         * Gets the value of the explicit attribute 'TransverseBarCrossSectionArea'.
         * 
         */
        virtual IfcAreaMeasure getTransverseBarCrossSectionArea();
        /**
         * (const) Returns the value of the explicit attribute 'TransverseBarCrossSectionArea'.
         * 
         * @return the value of the explicit attribute 'TransverseBarCrossSectionArea'
         */
        virtual const IfcAreaMeasure getTransverseBarCrossSectionArea() const;
        /**
         * Sets the value of the explicit attribute 'TransverseBarCrossSectionArea'.
         * 
         * @param value
         */
        virtual void setTransverseBarCrossSectionArea(IfcAreaMeasure value);
        /**
         * Gets the value of the explicit attribute 'LongitudinalBarSpacing'.
         * 
         */
        virtual IfcPositiveLengthMeasure getLongitudinalBarSpacing();
        /**
         * (const) Returns the value of the explicit attribute 'LongitudinalBarSpacing'.
         * 
         * @return the value of the explicit attribute 'LongitudinalBarSpacing'
         */
        virtual const IfcPositiveLengthMeasure getLongitudinalBarSpacing() const;
        /**
         * Sets the value of the explicit attribute 'LongitudinalBarSpacing'.
         * 
         * @param value
         */
        virtual void setLongitudinalBarSpacing(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'TransverseBarSpacing'.
         * 
         */
        virtual IfcPositiveLengthMeasure getTransverseBarSpacing();
        /**
         * (const) Returns the value of the explicit attribute 'TransverseBarSpacing'.
         * 
         * @return the value of the explicit attribute 'TransverseBarSpacing'
         */
        virtual const IfcPositiveLengthMeasure getTransverseBarSpacing() const;
        /**
         * Sets the value of the explicit attribute 'TransverseBarSpacing'.
         * 
         * @param value
         */
        virtual void setTransverseBarSpacing(IfcPositiveLengthMeasure value);
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
