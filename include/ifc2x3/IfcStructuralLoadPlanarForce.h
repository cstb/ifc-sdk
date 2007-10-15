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

#ifndef IFC2X3_IFCSTRUCTURALLOADPLANARFORCE_H
#define IFC2X3_IFCSTRUCTURALLOADPLANARFORCE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcStructuralLoadStatic.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcStructuralLoadPlanarForce : public IfcStructuralLoadStatic {
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
        IfcPlanarForceMeasure getPlanarForceX();
        /**
         * Sets the value of the explicit attribute 'PlanarForceX'.
         * 
         * @param value
         */
        void setPlanarForceX(IfcPlanarForceMeasure value);
        /**
         */
        IfcPlanarForceMeasure getPlanarForceY();
        /**
         * Sets the value of the explicit attribute 'PlanarForceY'.
         * 
         * @param value
         */
        void setPlanarForceY(IfcPlanarForceMeasure value);
        /**
         */
        IfcPlanarForceMeasure getPlanarForceZ();
        /**
         * Sets the value of the explicit attribute 'PlanarForceZ'.
         * 
         * @param value
         */
        void setPlanarForceZ(IfcPlanarForceMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralLoadPlanarForce(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralLoadPlanarForce();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralLoadPlanarForce &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_planarForceX;
        /**
         */
        Step::Real m_planarForceY;
        /**
         */
        Step::Real m_planarForceZ;

    };

}

#endif // IFC2X3_IFCSTRUCTURALLOADPLANARFORCE_H
