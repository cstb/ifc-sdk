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

#ifndef IFC2X3_IFCSPATIALSTRUCTUREELEMENT_H
#define IFC2X3_IFCSPATIALSTRUCTUREELEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/String.h>
#include "ifc2x3/IfcProduct.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcSpatialStructureElement : public IfcProduct {
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
         * Gets the value of the explicit attribute 'LongName'.
         * 
         */
        virtual IfcLabel getLongName();
        /**
         * (const) Returns the value of the explicit attribute 'LongName'.
         * 
         * @return the value of the explicit attribute 'LongName'
         */
        virtual const IfcLabel getLongName() const;
        /**
         * Sets the value of the explicit attribute 'LongName'.
         * 
         * @param value
         */
        virtual void setLongName(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'CompositionType'.
         * 
         */
        virtual IfcElementCompositionEnum getCompositionType();
        /**
         * (const) Returns the value of the explicit attribute 'CompositionType'.
         * 
         * @return the value of the explicit attribute 'CompositionType'
         */
        virtual const IfcElementCompositionEnum getCompositionType() const;
        /**
         * Sets the value of the explicit attribute 'CompositionType'.
         * 
         * @param value
         */
        virtual void setCompositionType(IfcElementCompositionEnum value);
        /**
         * Gets the value of the inverse attribute 'ReferencesElements'.
         * 
         */
        Inverse_Set_IfcRelReferencedInSpatialStructure_0_n &getReferencesElements();
        /**
         * (const) Returns the value of the explicit attribute 'ReferencesElements'.
         * 
         * @return the value of the explicit attribute 'ReferencesElements'
         */
        virtual const Inverse_Set_IfcRelReferencedInSpatialStructure_0_n &getReferencesElements() const;
        /**
         * Gets the value of the inverse attribute 'ServicedBySystems'.
         * 
         */
        Inverse_Set_IfcRelServicesBuildings_0_n &getServicedBySystems();
        /**
         * (const) Returns the value of the explicit attribute 'ServicedBySystems'.
         * 
         * @return the value of the explicit attribute 'ServicedBySystems'
         */
        virtual const Inverse_Set_IfcRelServicesBuildings_0_n &getServicedBySystems() const;
        /**
         * Gets the value of the inverse attribute 'ContainsElements'.
         * 
         */
        Inverse_Set_IfcRelContainedInSpatialStructure_0_n &getContainsElements();
        /**
         * (const) Returns the value of the explicit attribute 'ContainsElements'.
         * 
         * @return the value of the explicit attribute 'ContainsElements'
         */
        virtual const Inverse_Set_IfcRelContainedInSpatialStructure_0_n &getContainsElements() const;
        friend class IfcRelServicesBuildings;
        friend class ExpressDataSet;
        friend class Inverted_IfcRelServicesBuildings_RelatedBuildings_type;
        friend class IfcRelContainedInSpatialStructure;
        friend class IfcRelReferencedInSpatialStructure;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSpatialStructureElement(Step::Id id, Step::SPFData *args);
        virtual ~IfcSpatialStructureElement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSpatialStructureElement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_longName;
        /**
         */
        IfcElementCompositionEnum m_compositionType;
        /**
         */
        Inverse_Set_IfcRelReferencedInSpatialStructure_0_n m_referencesElements;
        /**
         */
        Inverse_Set_IfcRelServicesBuildings_0_n m_servicedBySystems;
        /**
         */
        Inverse_Set_IfcRelContainedInSpatialStructure_0_n m_containsElements;

    };

}

#endif // IFC2X3_IFCSPATIALSTRUCTUREELEMENT_H
