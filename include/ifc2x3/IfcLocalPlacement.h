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

#ifndef IFC2X3_IFCLOCALPLACEMENT_H
#define IFC2X3_IFCLOCALPLACEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>
#include "ifc2x3/IfcObjectPlacement.h"

namespace ifc2x3 {

    class CopyOp;
    class IfcAxis2Placement;

    /**
     */
    class IFC2X3_DLL_DEF IfcLocalPlacement : public IfcObjectPlacement {
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
        IfcObjectPlacement *getPlacementRelTo();
        /**
         * Sets the value of the explicit attribute 'PlacementRelTo'.
         * 
         * @param value
         */
        void setPlacementRelTo(const Step::RefPtr< IfcObjectPlacement > &value);
        /**
         */
        IfcAxis2Placement *getRelativePlacement();
        /**
         * Sets the value of the explicit attribute 'RelativePlacement'.
         * 
         * @param value
         */
        void setRelativePlacement(const Step::RefPtr< IfcAxis2Placement > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcLocalPlacement(Step::Id id, Step::SPFData *args);
        virtual ~IfcLocalPlacement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcLocalPlacement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcObjectPlacement > m_placementRelTo;
        /**
         */
        Step::RefPtr< IfcAxis2Placement > m_relativePlacement;

    };

}

#endif // IFC2X3_IFCLOCALPLACEMENT_H
