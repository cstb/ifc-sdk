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

#ifndef IFC2X3_IFCSTRUCTURALLOADGROUP_H
#define IFC2X3_IFCSTRUCTURALLOADGROUP_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcGroup.h"
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <string>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcStructuralAnalysisModel;
    class IfcStructuralResultGroup;

    /**
     */
    class IFC2X3_DLL_DEF IfcStructuralLoadGroup : public IfcGroup {
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
        IfcLoadGroupTypeEnum getPredefinedType();
        /**
         * Sets the value of the explicit attribute 'PredefinedType'.
         * 
         * @param value
         */
        void setPredefinedType(IfcLoadGroupTypeEnum value);
        /**
         */
        IfcActionTypeEnum getActionType();
        /**
         * Sets the value of the explicit attribute 'ActionType'.
         * 
         * @param value
         */
        void setActionType(IfcActionTypeEnum value);
        /**
         */
        IfcActionSourceTypeEnum getActionSource();
        /**
         * Sets the value of the explicit attribute 'ActionSource'.
         * 
         * @param value
         */
        void setActionSource(IfcActionSourceTypeEnum value);
        /**
         */
        IfcPositiveRatioMeasure getCoefficient();
        /**
         * Sets the value of the explicit attribute 'Coefficient'.
         * 
         * @param value
         */
        void setCoefficient(IfcPositiveRatioMeasure value);
        /**
         */
        IfcLabel getPurpose();
        /**
         * Sets the value of the explicit attribute 'Purpose'.
         * 
         * @param value
         */
        void setPurpose(const IfcLabel &value);
        /**
         */
        Step::Set< Step::ObsPtr< IfcStructuralResultGroup > > &getSourceOfResultGroup();
        /**
         */
        Step::Set< Step::ObsPtr< IfcStructuralAnalysisModel > > &getLoadGroupFor();
        /**
         */
        virtual void release();
        friend class IfcStructuralResultGroup;
        friend class IfcStructuralAnalysisModel;
        friend class ExpressDataSet;

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
        std::string m_purpose;
        /**
         */
        Step::Set< Step::ObsPtr< IfcStructuralResultGroup > > m_sourceOfResultGroup;
        /**
         */
        Step::Set< Step::ObsPtr< IfcStructuralAnalysisModel > > m_loadGroupFor;

    };

}

#endif // IFC2X3_IFCSTRUCTURALLOADGROUP_H
