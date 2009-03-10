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

#ifndef IFC2X3_IFCSTRUCTURALLOADGROUP_H
#define IFC2X3_IFCSTRUCTURALLOADGROUP_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcGroup.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/String.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcStructuralLoadGroup : public IfcGroup {
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
         * Gets the value of the explicit attribute 'PredefinedType'.
         * 
         */
        virtual IfcLoadGroupTypeEnum getPredefinedType();
        /**
         * (const) Returns the value of the explicit attribute 'PredefinedType'.
         * 
         * @return the value of the explicit attribute 'PredefinedType'
         */
        virtual const IfcLoadGroupTypeEnum getPredefinedType() const;
        /**
         * Sets the value of the explicit attribute 'PredefinedType'.
         * 
         * @param value
         */
        virtual void setPredefinedType(IfcLoadGroupTypeEnum value);
        /**
         * Gets the value of the explicit attribute 'ActionType'.
         * 
         */
        virtual IfcActionTypeEnum getActionType();
        /**
         * (const) Returns the value of the explicit attribute 'ActionType'.
         * 
         * @return the value of the explicit attribute 'ActionType'
         */
        virtual const IfcActionTypeEnum getActionType() const;
        /**
         * Sets the value of the explicit attribute 'ActionType'.
         * 
         * @param value
         */
        virtual void setActionType(IfcActionTypeEnum value);
        /**
         * Gets the value of the explicit attribute 'ActionSource'.
         * 
         */
        virtual IfcActionSourceTypeEnum getActionSource();
        /**
         * (const) Returns the value of the explicit attribute 'ActionSource'.
         * 
         * @return the value of the explicit attribute 'ActionSource'
         */
        virtual const IfcActionSourceTypeEnum getActionSource() const;
        /**
         * Sets the value of the explicit attribute 'ActionSource'.
         * 
         * @param value
         */
        virtual void setActionSource(IfcActionSourceTypeEnum value);
        /**
         * Gets the value of the explicit attribute 'Coefficient'.
         * 
         */
        virtual IfcRatioMeasure getCoefficient();
        /**
         * (const) Returns the value of the explicit attribute 'Coefficient'.
         * 
         * @return the value of the explicit attribute 'Coefficient'
         */
        virtual const IfcRatioMeasure getCoefficient() const;
        /**
         * Sets the value of the explicit attribute 'Coefficient'.
         * 
         * @param value
         */
        virtual void setCoefficient(IfcRatioMeasure value);
        /**
         * Gets the value of the explicit attribute 'Purpose'.
         * 
         */
        virtual IfcLabel getPurpose();
        /**
         * (const) Returns the value of the explicit attribute 'Purpose'.
         * 
         * @return the value of the explicit attribute 'Purpose'
         */
        virtual const IfcLabel getPurpose() const;
        /**
         * Sets the value of the explicit attribute 'Purpose'.
         * 
         * @param value
         */
        virtual void setPurpose(const IfcLabel &value);
        /**
         * Gets the value of the inverse attribute 'SourceOfResultGroup'.
         * 
         */
        Inverse_Set_IfcStructuralResultGroup_0_1 &getSourceOfResultGroup();
        /**
         * (const) Returns the value of the explicit attribute 'SourceOfResultGroup'.
         * 
         * @return the value of the explicit attribute 'SourceOfResultGroup'
         */
        virtual const Inverse_Set_IfcStructuralResultGroup_0_1 &getSourceOfResultGroup() const;
        /**
         * Gets the value of the inverse attribute 'LoadGroupFor'.
         * 
         */
        Inverse_Set_IfcStructuralAnalysisModel_0_n &getLoadGroupFor();
        /**
         * (const) Returns the value of the explicit attribute 'LoadGroupFor'.
         * 
         * @return the value of the explicit attribute 'LoadGroupFor'
         */
        virtual const Inverse_Set_IfcStructuralAnalysisModel_0_n &getLoadGroupFor() const;
        friend class IfcStructuralAnalysisModel;
        friend class IfcStructuralResultGroup;
        friend class ExpressDataSet;
        friend class Inverted_IfcStructuralAnalysisModel_LoadedBy_type;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralLoadGroup(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralLoadGroup();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralLoadGroup &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcLoadGroupTypeEnum m_predefinedType;
        /**
         */
        IfcActionTypeEnum m_actionType;
        /**
         */
        IfcActionSourceTypeEnum m_actionSource;
        /**
         */
        Step::Real m_coefficient;
        /**
         */
        Step::String m_purpose;
        /**
         */
        Inverse_Set_IfcStructuralResultGroup_0_1 m_sourceOfResultGroup;
        /**
         */
        Inverse_Set_IfcStructuralAnalysisModel_0_n m_loadGroupFor;

    };

}

#endif // IFC2X3_IFCSTRUCTURALLOADGROUP_H
