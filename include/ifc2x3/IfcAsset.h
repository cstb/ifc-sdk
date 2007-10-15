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

#ifndef IFC2X3_IFCASSET_H
#define IFC2X3_IFCASSET_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcGroup.h"
#include <Step/SPFData.h>
#include <string>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcActorSelect;
    class IfcCalendarDate;
    class IfcCostValue;
    class IfcPerson;

    /**
     */
    class IFC2X3_DLL_DEF IfcAsset : public IfcGroup {
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
        IfcIdentifier getAssetID();
        /**
         * Sets the value of the explicit attribute 'AssetID'.
         * 
         * @param value
         */
        void setAssetID(const IfcIdentifier &value);
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
        IfcCostValue *getCurrentValue();
        /**
         * Sets the value of the explicit attribute 'CurrentValue'.
         * 
         * @param value
         */
        void setCurrentValue(const Step::RefPtr< IfcCostValue > &value);
        /**
         */
        IfcCostValue *getTotalReplacementCost();
        /**
         * Sets the value of the explicit attribute 'TotalReplacementCost'.
         * 
         * @param value
         */
        void setTotalReplacementCost(const Step::RefPtr< IfcCostValue > &value);
        /**
         */
        IfcActorSelect *getOwner();
        /**
         * Sets the value of the explicit attribute 'Owner'.
         * 
         * @param value
         */
        void setOwner(const Step::RefPtr< IfcActorSelect > &value);
        /**
         */
        IfcActorSelect *getUser();
        /**
         * Sets the value of the explicit attribute 'User'.
         * 
         * @param value
         */
        void setUser(const Step::RefPtr< IfcActorSelect > &value);
        /**
         */
        IfcPerson *getResponsiblePerson();
        /**
         * Sets the value of the explicit attribute 'ResponsiblePerson'.
         * 
         * @param value
         */
        void setResponsiblePerson(const Step::RefPtr< IfcPerson > &value);
        /**
         */
        IfcCalendarDate *getIncorporationDate();
        /**
         * Sets the value of the explicit attribute 'IncorporationDate'.
         * 
         * @param value
         */
        void setIncorporationDate(const Step::RefPtr< IfcCalendarDate > &value);
        /**
         */
        IfcCostValue *getDepreciatedValue();
        /**
         * Sets the value of the explicit attribute 'DepreciatedValue'.
         * 
         * @param value
         */
        void setDepreciatedValue(const Step::RefPtr< IfcCostValue > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcAsset(Step::Id id, Step::SPFData *args);
        virtual ~IfcAsset();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcAsset &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_assetID;
        /**
         */
        Step::RefPtr< IfcCostValue > m_originalValue;
        /**
         */
        Step::RefPtr< IfcCostValue > m_currentValue;
        /**
         */
        Step::RefPtr< IfcCostValue > m_totalReplacementCost;
        /**
         */
        Step::RefPtr< IfcActorSelect > m_owner;
        /**
         */
        Step::RefPtr< IfcActorSelect > m_user;
        /**
         */
        Step::RefPtr< IfcPerson > m_responsiblePerson;
        /**
         */
        Step::RefPtr< IfcCalendarDate > m_incorporationDate;
        /**
         */
        Step::RefPtr< IfcCostValue > m_depreciatedValue;

    };

}

#endif // IFC2X3_IFCASSET_H
