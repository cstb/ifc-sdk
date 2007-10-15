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

#ifndef IFC2X3_IFCSWEPTAREASOLID_H
#define IFC2X3_IFCSWEPTAREASOLID_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcSolidModel.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcAxis2Placement3D;
    class IfcProfileDef;

    /**
     */
    class IFC2X3_DLL_DEF IfcSweptAreaSolid : public IfcSolidModel {
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
        IfcProfileDef *getSweptArea();
        /**
         * Sets the value of the explicit attribute 'SweptArea'.
         * 
         * @param value
         */
        void setSweptArea(const Step::RefPtr< IfcProfileDef > &value);
        /**
         */
        IfcAxis2Placement3D *getPosition();
        /**
         * Sets the value of the explicit attribute 'Position'.
         * 
         * @param value
         */
        void setPosition(const Step::RefPtr< IfcAxis2Placement3D > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSweptAreaSolid(Step::Id id, Step::SPFData *args);
        virtual ~IfcSweptAreaSolid();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSweptAreaSolid &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcProfileDef > m_sweptArea;
        /**
         */
        Step::RefPtr< IfcAxis2Placement3D > m_position;

    };

}

#endif // IFC2X3_IFCSWEPTAREASOLID_H
