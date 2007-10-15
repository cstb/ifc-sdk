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

#ifndef IFC2X3_IFCSPATIALSTRUCTUREELEMENT_H
#define IFC2X3_IFCSPATIALSTRUCTUREELEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <string>
#include "ifc2x3/IfcProduct.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcRelContainedInSpatialStructure;
    class IfcRelReferencedInSpatialStructure;
    class IfcRelServicesBuildings;

    /**
     */
    class IFC2X3_DLL_DEF IfcSpatialStructureElement : public IfcProduct {
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
        IfcLabel getLongName();
        /**
         * Sets the value of the explicit attribute 'LongName'.
         * 
         * @param value
         */
        void setLongName(const IfcLabel &value);
        /**
         */
        IfcElementCompositionEnum getCompositionType();
        /**
         * Sets the value of the explicit attribute 'CompositionType'.
         * 
         * @param value
         */
        void setCompositionType(IfcElementCompositionEnum value);
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelReferencedInSpatialStructure > > &getReferencesElements();
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelServicesBuildings > > &getServicedBySystems();
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelContainedInSpatialStructure > > &getContainsElements();
        /**
         */
        virtual void release();
        friend class IfcRelServicesBuildings;
        friend class IfcRelContainedInSpatialStructure;
        friend class ExpressDataSet;
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
        std::string m_longName;
        /**
         */
        IfcElementCompositionEnum m_compositionType;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelReferencedInSpatialStructure > > m_referencesElements;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelServicesBuildings > > m_servicedBySystems;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelContainedInSpatialStructure > > m_containsElements;

    };

}

#endif // IFC2X3_IFCSPATIALSTRUCTUREELEMENT_H
