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

#ifndef IFC2X3_IFCRELCONNECTSSTRUCTURALMEMBER_H
#define IFC2X3_IFCRELCONNECTSSTRUCTURALMEMBER_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/SPFData.h>
#include <Step/Referenced.h>
#include <Step/ClassType.h>
#include <string>
#include "ifc2x3/IfcRelConnects.h"

namespace ifc2x3 {

    class CopyOp;
    class IfcAxis2Placement3D;
    class IfcBoundaryCondition;
    class IfcStructuralConnection;
    class IfcStructuralConnectionCondition;
    class IfcStructuralMember;

    /**
     */
    class IFC2X3_DLL_DEF IfcRelConnectsStructuralMember : public IfcRelConnects {
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
        IfcStructuralMember *getRelatingStructuralMember();
        /**
         * Sets the value of the explicit attribute 'RelatingStructuralMember'.
         * 
         * @param value
         */
        void setRelatingStructuralMember(const Step::RefPtr< IfcStructuralMember > &value);
        /**
         */
        IfcStructuralConnection *getRelatedStructuralConnection();
        /**
         * Sets the value of the explicit attribute 'RelatedStructuralConnection'.
         * 
         * @param value
         */
        void setRelatedStructuralConnection(const Step::RefPtr< IfcStructuralConnection > &value);
        /**
         */
        IfcBoundaryCondition *getAppliedCondition();
        /**
         * Sets the value of the explicit attribute 'AppliedCondition'.
         * 
         * @param value
         */
        void setAppliedCondition(const Step::RefPtr< IfcBoundaryCondition > &value);
        /**
         */
        IfcStructuralConnectionCondition *getAdditionalConditions();
        /**
         * Sets the value of the explicit attribute 'AdditionalConditions'.
         * 
         * @param value
         */
        void setAdditionalConditions(const Step::RefPtr< IfcStructuralConnectionCondition > &value);
        /**
         */
        IfcLengthMeasure getSupportedLength();
        /**
         * Sets the value of the explicit attribute 'SupportedLength'.
         * 
         * @param value
         */
        void setSupportedLength(IfcLengthMeasure value);
        /**
         */
        IfcAxis2Placement3D *getConditionCoordinateSystem();
        /**
         * Sets the value of the explicit attribute 'ConditionCoordinateSystem'.
         * 
         * @param value
         */
        void setConditionCoordinateSystem(const Step::RefPtr< IfcAxis2Placement3D > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelConnectsStructuralMember(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelConnectsStructuralMember();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelConnectsStructuralMember &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcStructuralMember > m_relatingStructuralMember;
        /**
         */
        Step::RefPtr< IfcStructuralConnection > m_relatedStructuralConnection;
        /**
         */
        Step::RefPtr< IfcBoundaryCondition > m_appliedCondition;
        /**
         */
        Step::RefPtr< IfcStructuralConnectionCondition > m_additionalConditions;
        /**
         */
        Step::Real m_supportedLength;
        /**
         */
        Step::RefPtr< IfcAxis2Placement3D > m_conditionCoordinateSystem;

    };

}

#endif // IFC2X3_IFCRELCONNECTSSTRUCTURALMEMBER_H
