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

#ifndef IFC2X3_IFCMECHANICALCONCRETEMATERIALPROPERTIES_H
#define IFC2X3_IFCMECHANICALCONCRETEMATERIALPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcMechanicalMaterialProperties.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/String.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcMechanicalConcreteMaterialProperties : public IfcMechanicalMaterialProperties {
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
         * Gets the value of the explicit attribute 'CompressiveStrength'.
         * 
         */
        virtual IfcPressureMeasure getCompressiveStrength();
        /**
         * (const) Returns the value of the explicit attribute 'CompressiveStrength'.
         * 
         * @return the value of the explicit attribute 'CompressiveStrength'
         */
        virtual const IfcPressureMeasure getCompressiveStrength() const;
        /**
         * Sets the value of the explicit attribute 'CompressiveStrength'.
         * 
         * @param value
         */
        virtual void setCompressiveStrength(IfcPressureMeasure value);
        /**
         * Gets the value of the explicit attribute 'MaxAggregateSize'.
         * 
         */
        virtual IfcPositiveLengthMeasure getMaxAggregateSize();
        /**
         * (const) Returns the value of the explicit attribute 'MaxAggregateSize'.
         * 
         * @return the value of the explicit attribute 'MaxAggregateSize'
         */
        virtual const IfcPositiveLengthMeasure getMaxAggregateSize() const;
        /**
         * Sets the value of the explicit attribute 'MaxAggregateSize'.
         * 
         * @param value
         */
        virtual void setMaxAggregateSize(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'AdmixturesDescription'.
         * 
         */
        virtual IfcText getAdmixturesDescription();
        /**
         * (const) Returns the value of the explicit attribute 'AdmixturesDescription'.
         * 
         * @return the value of the explicit attribute 'AdmixturesDescription'
         */
        virtual const IfcText getAdmixturesDescription() const;
        /**
         * Sets the value of the explicit attribute 'AdmixturesDescription'.
         * 
         * @param value
         */
        virtual void setAdmixturesDescription(const IfcText &value);
        /**
         * Gets the value of the explicit attribute 'Workability'.
         * 
         */
        virtual IfcText getWorkability();
        /**
         * (const) Returns the value of the explicit attribute 'Workability'.
         * 
         * @return the value of the explicit attribute 'Workability'
         */
        virtual const IfcText getWorkability() const;
        /**
         * Sets the value of the explicit attribute 'Workability'.
         * 
         * @param value
         */
        virtual void setWorkability(const IfcText &value);
        /**
         * Gets the value of the explicit attribute 'ProtectivePoreRatio'.
         * 
         */
        virtual IfcNormalisedRatioMeasure getProtectivePoreRatio();
        /**
         * (const) Returns the value of the explicit attribute 'ProtectivePoreRatio'.
         * 
         * @return the value of the explicit attribute 'ProtectivePoreRatio'
         */
        virtual const IfcNormalisedRatioMeasure getProtectivePoreRatio() const;
        /**
         * Sets the value of the explicit attribute 'ProtectivePoreRatio'.
         * 
         * @param value
         */
        virtual void setProtectivePoreRatio(IfcNormalisedRatioMeasure value);
        /**
         * Gets the value of the explicit attribute 'WaterImpermeability'.
         * 
         */
        virtual IfcText getWaterImpermeability();
        /**
         * (const) Returns the value of the explicit attribute 'WaterImpermeability'.
         * 
         * @return the value of the explicit attribute 'WaterImpermeability'
         */
        virtual const IfcText getWaterImpermeability() const;
        /**
         * Sets the value of the explicit attribute 'WaterImpermeability'.
         * 
         * @param value
         */
        virtual void setWaterImpermeability(const IfcText &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcMechanicalConcreteMaterialProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcMechanicalConcreteMaterialProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMechanicalConcreteMaterialProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_compressiveStrength;
        /**
         */
        Step::Real m_maxAggregateSize;
        /**
         */
        Step::String m_admixturesDescription;
        /**
         */
        Step::String m_workability;
        /**
         */
        Step::Real m_protectivePoreRatio;
        /**
         */
        Step::String m_waterImpermeability;

    };

}

#endif // IFC2X3_IFCMECHANICALCONCRETEMATERIALPROPERTIES_H
