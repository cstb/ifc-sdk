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

#ifndef IFC2X3_IFCSECTIONREINFORCEMENTPROPERTIES_H
#define IFC2X3_IFCSECTIONREINFORCEMENTPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcReinforcementBarProperties;
    class IfcSectionProperties;

    /**
     */
    class IFC2X3_DLL_DEF IfcSectionReinforcementProperties : public Step::BaseEntity {
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
        IfcLengthMeasure getLongitudinalStartPosition();
        /**
         * Sets the value of the explicit attribute 'LongitudinalStartPosition'.
         * 
         * @param value
         */
        void setLongitudinalStartPosition(IfcLengthMeasure value);
        /**
         */
        IfcLengthMeasure getLongitudinalEndPosition();
        /**
         * Sets the value of the explicit attribute 'LongitudinalEndPosition'.
         * 
         * @param value
         */
        void setLongitudinalEndPosition(IfcLengthMeasure value);
        /**
         */
        IfcLengthMeasure getTransversePosition();
        /**
         * Sets the value of the explicit attribute 'TransversePosition'.
         * 
         * @param value
         */
        void setTransversePosition(IfcLengthMeasure value);
        /**
         */
        IfcReinforcingBarRoleEnum getReinforcementRole();
        /**
         * Sets the value of the explicit attribute 'ReinforcementRole'.
         * 
         * @param value
         */
        void setReinforcementRole(IfcReinforcingBarRoleEnum value);
        /**
         */
        IfcSectionProperties *getSectionDefinition();
        /**
         * Sets the value of the explicit attribute 'SectionDefinition'.
         * 
         * @param value
         */
        void setSectionDefinition(const Step::RefPtr< IfcSectionProperties > &value);
        /**
         */
        Step::Set< Step::RefPtr< IfcReinforcementBarProperties > > &getCrossSectionReinforcementDefinitions();
        /**
         * Sets the value of the explicit attribute 'CrossSectionReinforcementDefinitions'.
         * 
         * @param value
         */
        void setCrossSectionReinforcementDefinitions(const Step::Set< Step::RefPtr< IfcReinforcementBarProperties > > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSectionReinforcementProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcSectionReinforcementProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSectionReinforcementProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_longitudinalStartPosition;
        /**
         */
        Step::Real m_longitudinalEndPosition;
        /**
         */
        Step::Real m_transversePosition;
        /**
         */
        IfcReinforcingBarRoleEnum m_reinforcementRole;
        /**
         */
        Step::RefPtr< IfcSectionProperties > m_sectionDefinition;
        /**
         */
        Step::Set< Step::RefPtr< IfcReinforcementBarProperties > > m_crossSectionReinforcementDefinitions;

    };

}

#endif // IFC2X3_IFCSECTIONREINFORCEMENTPROPERTIES_H
