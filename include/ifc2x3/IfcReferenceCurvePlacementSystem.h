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

#ifndef IFC2X3_IFCREFERENCECURVEPLACEMENTSYSTEM_H
#define IFC2X3_IFCREFERENCECURVEPLACEMENTSYSTEM_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <string>
#include "ifc2x3/IfcReferencePlacement.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcReferenceCurve;
    class IfcReferenceCurvePlacement;

    /**
     * Element Part.
     * 
     */
    class IFC2X3_DLL_DEF IfcReferenceCurvePlacementSystem : public IfcReferencePlacement {
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
        std::string getLabel();
        /**
         * Sets the value of the explicit attribute 'Label'.
         * 
         * @param value
         */
        void setLabel(const std::string &value);
        /**
         */
        IfcReferenceCurve *getBasedOn();
        /**
         * Sets the value of the explicit attribute 'BasedOn'.
         * 
         * @param value
         */
        void setBasedOn(const Step::RefPtr< IfcReferenceCurve > &value);
        /**
         */
        Step::Set< Step::ObsPtr< IfcReferenceCurvePlacement > > &getIncludes();
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        friend class IfcReferenceCurvePlacement;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcReferenceCurvePlacementSystem(Step::Id id, Step::SPFData *args);
        virtual ~IfcReferenceCurvePlacementSystem();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcReferenceCurvePlacementSystem &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_label;
        /**
         */
        Step::RefPtr< IfcReferenceCurve > m_basedOn;
        /**
         */
        Step::Set< Step::ObsPtr< IfcReferenceCurvePlacement > > m_includes;

    };

}

#endif // IFC2X3_IFCREFERENCECURVEPLACEMENTSYSTEM_H
