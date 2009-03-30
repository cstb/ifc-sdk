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
 *     Copyright (C) 2009 CSTB                                             *
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

#ifndef IFC2X3_IFCSTRUCTURALACTION_H
#define IFC2X3_IFCSTRUCTURALACTION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcStructuralActivity.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcStructuralReaction;

    /**
     * Generated class for the IfcStructuralAction Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcStructuralAction : public IfcStructuralActivity {
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
         * Gets the value of the explicit attribute 'DestabilizingLoad'.
         * 
         */
        virtual Step::Boolean getDestabilizingLoad();
        /**
         * (const) Returns the value of the explicit attribute 'DestabilizingLoad'.
         * 
         * @return the value of the explicit attribute 'DestabilizingLoad'
         */
        virtual const Step::Boolean getDestabilizingLoad() const;
        /**
         * Sets the value of the explicit attribute 'DestabilizingLoad'.
         * 
         * @param value
         */
        virtual void setDestabilizingLoad(Step::Boolean value);
        /**
         * unset the attribute 'DestabilizingLoad'.
         * 
         */
        virtual void unsetDestabilizingLoad();
        /**
         * Test if the attribute 'DestabilizingLoad' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDestabilizingLoad() const;
        /**
         * Gets the value of the explicit attribute 'CausedBy'.
         * 
         */
        virtual IfcStructuralReaction *getCausedBy();
        /**
         * (const) Returns the value of the explicit attribute 'CausedBy'.
         * 
         * @return the value of the explicit attribute 'CausedBy'
         */
        virtual const IfcStructuralReaction *getCausedBy() const;
        /**
         * Sets the value of the explicit attribute 'CausedBy'.
         * 
         * @param value
         */
        virtual void setCausedBy(const Step::RefPtr< IfcStructuralReaction > &value);
        /**
         * unset the attribute 'CausedBy'.
         * 
         */
        virtual void unsetCausedBy();
        /**
         * Test if the attribute 'CausedBy' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCausedBy() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralAction(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralAction();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralAction &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Boolean m_destabilizingLoad;
        /**
         */
        Step::RefPtr< IfcStructuralReaction > m_causedBy;

    };

}

#endif // IFC2X3_IFCSTRUCTURALACTION_H
