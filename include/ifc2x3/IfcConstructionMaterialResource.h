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

#ifndef IFC2X3_IFCCONSTRUCTIONMATERIALRESOURCE_H
#define IFC2X3_IFCCONSTRUCTIONMATERIALRESOURCE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcConstructionResource.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcConstructionMaterialResource Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcConstructionMaterialResource : public IfcConstructionResource {
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
         * Gets the value of the explicit attribute 'Suppliers'.
         * 
         */
        virtual Set_IfcActorSelect_1_n &getSuppliers();
        /**
         * (const) Returns the value of the explicit attribute 'Suppliers'.
         * 
         * @return the value of the explicit attribute 'Suppliers'
         */
        virtual const Set_IfcActorSelect_1_n &getSuppliers() const;
        /**
         * Sets the value of the explicit attribute 'Suppliers'.
         * 
         * @param value
         */
        virtual void setSuppliers(const Set_IfcActorSelect_1_n &value);
        /**
         * unset the attribute 'Suppliers'.
         * 
         */
        virtual void unsetSuppliers();
        /**
         * Test if the attribute 'Suppliers' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSuppliers() const;
        /**
         * Gets the value of the explicit attribute 'UsageRatio'.
         * 
         */
        virtual IfcRatioMeasure getUsageRatio();
        /**
         * (const) Returns the value of the explicit attribute 'UsageRatio'.
         * 
         * @return the value of the explicit attribute 'UsageRatio'
         */
        virtual const IfcRatioMeasure getUsageRatio() const;
        /**
         * Sets the value of the explicit attribute 'UsageRatio'.
         * 
         * @param value
         */
        virtual void setUsageRatio(IfcRatioMeasure value);
        /**
         * unset the attribute 'UsageRatio'.
         * 
         */
        virtual void unsetUsageRatio();
        /**
         * Test if the attribute 'UsageRatio' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUsageRatio() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcConstructionMaterialResource(Step::Id id, Step::SPFData *args);
        virtual ~IfcConstructionMaterialResource();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcConstructionMaterialResource &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Set_IfcActorSelect_1_n m_suppliers;
        /**
         */
        Step::Real m_usageRatio;

    };

}

#endif // IFC2X3_IFCCONSTRUCTIONMATERIALRESOURCE_H
