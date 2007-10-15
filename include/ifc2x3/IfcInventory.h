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

#ifndef IFC2X3_IFCINVENTORY_H
#define IFC2X3_IFCINVENTORY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/SPFData.h>
#include <Step/Referenced.h>
#include "ifc2x3/IfcGroup.h"
#include <Step/ClassType.h>
#include <Step/Aggregation.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcActorSelect;
    class IfcCalendarDate;
    class IfcCostValue;
    class IfcPerson;

    /**
     */
    class IFC2X3_DLL_DEF IfcInventory : public IfcGroup {
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
        IfcInventoryTypeEnum getInventoryType();
        /**
         * Sets the value of the explicit attribute 'InventoryType'.
         * 
         * @param value
         */
        void setInventoryType(IfcInventoryTypeEnum value);
        /**
         */
        IfcActorSelect *getJurisdiction();
        /**
         * Sets the value of the explicit attribute 'Jurisdiction'.
         * 
         * @param value
         */
        void setJurisdiction(const Step::RefPtr< IfcActorSelect > &value);
        /**
         */
        Step::Set< Step::RefPtr< IfcPerson > > &getResponsiblePersons();
        /**
         * Sets the value of the explicit attribute 'ResponsiblePersons'.
         * 
         * @param value
         */
        void setResponsiblePersons(const Step::Set< Step::RefPtr< IfcPerson > > &value);
        /**
         */
        IfcCalendarDate *getLastUpdateDate();
        /**
         * Sets the value of the explicit attribute 'LastUpdateDate'.
         * 
         * @param value
         */
        void setLastUpdateDate(const Step::RefPtr< IfcCalendarDate > &value);
        /**
         */
        IfcCostValue *getCurrentValue();
        /**
         * Sets the value of the explicit attribute 'CurrentValue'.
         * 
         * @param value
         */
        void setCurrentValue(const Step::RefPtr< IfcCostValue > &value);
        /**
         */
        IfcCostValue *getOriginalValue();
        /**
         * Sets the value of the explicit attribute 'OriginalValue'.
         * 
         * @param value
         */
        void setOriginalValue(const Step::RefPtr< IfcCostValue > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcInventory(Step::Id id, Step::SPFData *args);
        virtual ~IfcInventory();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcInventory &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcInventoryTypeEnum m_inventoryType;
        /**
         */
        Step::RefPtr< IfcActorSelect > m_jurisdiction;
        /**
         */
        Step::Set< Step::RefPtr< IfcPerson > > m_responsiblePersons;
        /**
         */
        Step::RefPtr< IfcCalendarDate > m_lastUpdateDate;
        /**
         */
        Step::RefPtr< IfcCostValue > m_currentValue;
        /**
         */
        Step::RefPtr< IfcCostValue > m_originalValue;

    };

}

#endif // IFC2X3_IFCINVENTORY_H
