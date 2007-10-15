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

#ifndef IFC2X3_IFCPROJECT_H
#define IFC2X3_IFCPROJECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <string>
#include <Step/Referenced.h>
#include "ifc2x3/IfcObject.h"

namespace ifc2x3 {

    class CopyOp;
    class IfcRepresentationContext;
    class IfcUnitAssignment;

    /**
     */
    class IFC2X3_DLL_DEF IfcProject : public IfcObject {
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
        IfcLabel getPhase();
        /**
         * Sets the value of the explicit attribute 'Phase'.
         * 
         * @param value
         */
        void setPhase(const IfcLabel &value);
        /**
         */
        Step::Set< Step::RefPtr< IfcRepresentationContext > > &getRepresentationContexts();
        /**
         * Sets the value of the explicit attribute 'RepresentationContexts'.
         * 
         * @param value
         */
        void setRepresentationContexts(const Step::Set< Step::RefPtr< IfcRepresentationContext > > &value);
        /**
         */
        IfcUnitAssignment *getUnitsInContext();
        /**
         * Sets the value of the explicit attribute 'UnitsInContext'.
         * 
         * @param value
         */
        void setUnitsInContext(const Step::RefPtr< IfcUnitAssignment > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcProject(Step::Id id, Step::SPFData *args);
        virtual ~IfcProject();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcProject &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_longName;
        /**
         */
        std::string m_phase;
        /**
         */
        Step::Set< Step::RefPtr< IfcRepresentationContext > > m_representationContexts;
        /**
         */
        Step::RefPtr< IfcUnitAssignment > m_unitsInContext;

    };

}

#endif // IFC2X3_IFCPROJECT_H
