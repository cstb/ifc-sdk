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

#ifndef IFC2X3_IFCCONSTRUCTIONRESOURCE_H
#define IFC2X3_IFCCONSTRUCTIONRESOURCE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcResource.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcMeasureWithUnit;

    /**
     */
    class IFC2X3_DLL_DEF IfcConstructionResource : public IfcResource {
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
         * Gets the value of the explicit attribute 'ResourceIdentifier'.
         * 
         */
        virtual IfcIdentifier getResourceIdentifier();
        /**
         * (const) Returns the value of the explicit attribute 'ResourceIdentifier'.
         * 
         * @return the value of the explicit attribute 'ResourceIdentifier'
         */
        virtual const IfcIdentifier getResourceIdentifier() const;
        /**
         * Sets the value of the explicit attribute 'ResourceIdentifier'.
         * 
         * @param value
         */
        virtual void setResourceIdentifier(const IfcIdentifier &value);
        /**
         * Gets the value of the explicit attribute 'ResourceGroup'.
         * 
         */
        virtual IfcLabel getResourceGroup();
        /**
         * (const) Returns the value of the explicit attribute 'ResourceGroup'.
         * 
         * @return the value of the explicit attribute 'ResourceGroup'
         */
        virtual const IfcLabel getResourceGroup() const;
        /**
         * Sets the value of the explicit attribute 'ResourceGroup'.
         * 
         * @param value
         */
        virtual void setResourceGroup(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'ResourceConsumption'.
         * 
         */
        virtual IfcResourceConsumptionEnum getResourceConsumption();
        /**
         * (const) Returns the value of the explicit attribute 'ResourceConsumption'.
         * 
         * @return the value of the explicit attribute 'ResourceConsumption'
         */
        virtual const IfcResourceConsumptionEnum getResourceConsumption() const;
        /**
         * Sets the value of the explicit attribute 'ResourceConsumption'.
         * 
         * @param value
         */
        virtual void setResourceConsumption(IfcResourceConsumptionEnum value);
        /**
         * Gets the value of the explicit attribute 'BaseQuantity'.
         * 
         */
        virtual IfcMeasureWithUnit *getBaseQuantity();
        /**
         * (const) Returns the value of the explicit attribute 'BaseQuantity'.
         * 
         * @return the value of the explicit attribute 'BaseQuantity'
         */
        virtual const IfcMeasureWithUnit *getBaseQuantity() const;
        /**
         * Sets the value of the explicit attribute 'BaseQuantity'.
         * 
         * @param value
         */
        virtual void setBaseQuantity(const Step::RefPtr< IfcMeasureWithUnit > &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcConstructionResource(Step::Id id, Step::SPFData *args);
        virtual ~IfcConstructionResource();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcConstructionResource &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_resourceIdentifier;
        /**
         */
        Step::String m_resourceGroup;
        /**
         */
        IfcResourceConsumptionEnum m_resourceConsumption;
        /**
         */
        Step::RefPtr< IfcMeasureWithUnit > m_baseQuantity;

    };

}

#endif // IFC2X3_IFCCONSTRUCTIONRESOURCE_H
