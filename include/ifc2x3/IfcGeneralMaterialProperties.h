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

#ifndef IFC2X3_IFCGENERALMATERIALPROPERTIES_H
#define IFC2X3_IFCGENERALMATERIALPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcMaterialProperties.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcGeneralMaterialProperties : public IfcMaterialProperties {
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
        IfcMolecularWeightMeasure getMolecularWeight();
        /**
         * Sets the value of the explicit attribute 'MolecularWeight'.
         * 
         * @param value
         */
        void setMolecularWeight(IfcMolecularWeightMeasure value);
        /**
         */
        IfcNormalisedRatioMeasure getPorosity();
        /**
         * Sets the value of the explicit attribute 'Porosity'.
         * 
         * @param value
         */
        void setPorosity(IfcNormalisedRatioMeasure value);
        /**
         */
        IfcMassDensityMeasure getMassDensity();
        /**
         * Sets the value of the explicit attribute 'MassDensity'.
         * 
         * @param value
         */
        void setMassDensity(IfcMassDensityMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcGeneralMaterialProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcGeneralMaterialProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcGeneralMaterialProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_molecularWeight;
        /**
         */
        Step::Real m_porosity;
        /**
         */
        Step::Real m_massDensity;

    };

}

#endif // IFC2X3_IFCGENERALMATERIALPROPERTIES_H
