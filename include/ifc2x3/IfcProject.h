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

#ifndef IFC2X3_IFCPROJECT_H
#define IFC2X3_IFCPROJECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <Step/Referenced.h>
#include "ifc2x3/IfcObject.h"

namespace ifc2x3 {

    class CopyOp;
    class IfcUnitAssignment;

    /**
     */
    class IFC2X3_DLL_DEF IfcProject : public IfcObject {
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
         * Gets the value of the explicit attribute 'Phase'.
         * 
         */
        virtual IfcLabel getPhase();
        /**
         * (const) Returns the value of the explicit attribute 'Phase'.
         * 
         * @return the value of the explicit attribute 'Phase'
         */
        virtual const IfcLabel getPhase() const;
        /**
         * Sets the value of the explicit attribute 'Phase'.
         * 
         * @param value
         */
        virtual void setPhase(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'RepresentationContexts'.
         * 
         */
        virtual Set_IfcRepresentationContext_1_n &getRepresentationContexts();
        /**
         * (const) Returns the value of the explicit attribute 'RepresentationContexts'.
         * 
         * @return the value of the explicit attribute 'RepresentationContexts'
         */
        virtual const Set_IfcRepresentationContext_1_n &getRepresentationContexts() const;
        /**
         * Sets the value of the explicit attribute 'RepresentationContexts'.
         * 
         * @param value
         */
        virtual void setRepresentationContexts(const Set_IfcRepresentationContext_1_n &value);
        /**
         * Gets the value of the explicit attribute 'UnitsInContext'.
         * 
         */
        virtual IfcUnitAssignment *getUnitsInContext();
        /**
         * (const) Returns the value of the explicit attribute 'UnitsInContext'.
         * 
         * @return the value of the explicit attribute 'UnitsInContext'
         */
        virtual const IfcUnitAssignment *getUnitsInContext() const;
        /**
         * Sets the value of the explicit attribute 'UnitsInContext'.
         * 
         * @param value
         */
        virtual void setUnitsInContext(const Step::RefPtr< IfcUnitAssignment > &value);
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
        Step::String m_longName;
        /**
         */
        Step::String m_phase;
        /**
         */
        Set_IfcRepresentationContext_1_n m_representationContexts;
        /**
         */
        Step::RefPtr< IfcUnitAssignment > m_unitsInContext;

    };

}

#endif // IFC2X3_IFCPROJECT_H
