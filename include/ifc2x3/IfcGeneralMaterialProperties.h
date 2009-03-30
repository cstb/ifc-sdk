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
 *     Copyright (C) 2009 CSTB                                             *
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

#include "ifc2x3/IfcMaterialProperties.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcGeneralMaterialProperties Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcGeneralMaterialProperties : public IfcMaterialProperties {
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
         * Gets the value of the explicit attribute 'MolecularWeight'.
         * 
         */
        virtual IfcMolecularWeightMeasure getMolecularWeight();
        /**
         * (const) Returns the value of the explicit attribute 'MolecularWeight'.
         * 
         * @return the value of the explicit attribute 'MolecularWeight'
         */
        virtual const IfcMolecularWeightMeasure getMolecularWeight() const;
        /**
         * Sets the value of the explicit attribute 'MolecularWeight'.
         * 
         * @param value
         */
        virtual void setMolecularWeight(IfcMolecularWeightMeasure value);
        /**
         * unset the attribute 'MolecularWeight'.
         * 
         */
        virtual void unsetMolecularWeight();
        /**
         * Test if the attribute 'MolecularWeight' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMolecularWeight() const;
        /**
         * Gets the value of the explicit attribute 'Porosity'.
         * 
         */
        virtual IfcNormalisedRatioMeasure getPorosity();
        /**
         * (const) Returns the value of the explicit attribute 'Porosity'.
         * 
         * @return the value of the explicit attribute 'Porosity'
         */
        virtual const IfcNormalisedRatioMeasure getPorosity() const;
        /**
         * Sets the value of the explicit attribute 'Porosity'.
         * 
         * @param value
         */
        virtual void setPorosity(IfcNormalisedRatioMeasure value);
        /**
         * unset the attribute 'Porosity'.
         * 
         */
        virtual void unsetPorosity();
        /**
         * Test if the attribute 'Porosity' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPorosity() const;
        /**
         * Gets the value of the explicit attribute 'MassDensity'.
         * 
         */
        virtual IfcMassDensityMeasure getMassDensity();
        /**
         * (const) Returns the value of the explicit attribute 'MassDensity'.
         * 
         * @return the value of the explicit attribute 'MassDensity'
         */
        virtual const IfcMassDensityMeasure getMassDensity() const;
        /**
         * Sets the value of the explicit attribute 'MassDensity'.
         * 
         * @param value
         */
        virtual void setMassDensity(IfcMassDensityMeasure value);
        /**
         * unset the attribute 'MassDensity'.
         * 
         */
        virtual void unsetMassDensity();
        /**
         * Test if the attribute 'MassDensity' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMassDensity() const;
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
