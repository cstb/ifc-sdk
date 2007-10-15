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

#ifndef IFC2X3_IFCPRESENTATIONLAYERWITHSTYLE_H
#define IFC2X3_IFCPRESENTATIONLAYERWITHSTYLE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include "ifc2x3/IfcPresentationLayerAssignment.h"
#include "ifc2x3/IfcPresentationStyleSelect.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcPresentationLayerWithStyle : public IfcPresentationLayerAssignment {
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
        Step::Logical getLayerOn();
        /**
         * Sets the value of the explicit attribute 'LayerOn'.
         * 
         * @param value
         */
        void setLayerOn(Step::Logical value);
        /**
         */
        Step::Logical getLayerFrozen();
        /**
         * Sets the value of the explicit attribute 'LayerFrozen'.
         * 
         * @param value
         */
        void setLayerFrozen(Step::Logical value);
        /**
         */
        Step::Logical getLayerBlocked();
        /**
         * Sets the value of the explicit attribute 'LayerBlocked'.
         * 
         * @param value
         */
        void setLayerBlocked(Step::Logical value);
        /**
         */
        Step::Set< Step::RefPtr< IfcPresentationStyleSelect > > &getLayerStyles();
        /**
         * Sets the value of the explicit attribute 'LayerStyles'.
         * 
         * @param value
         */
        void setLayerStyles(const Step::Set< Step::RefPtr< IfcPresentationStyleSelect > > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPresentationLayerWithStyle(Step::Id id, Step::SPFData *args);
        virtual ~IfcPresentationLayerWithStyle();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPresentationLayerWithStyle &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Logical m_layerOn;
        /**
         */
        Step::Logical m_layerFrozen;
        /**
         */
        Step::Logical m_layerBlocked;
        /**
         */
        Step::Set< Step::RefPtr< IfcPresentationStyleSelect > > m_layerStyles;

    };

}

#endif // IFC2X3_IFCPRESENTATIONLAYERWITHSTYLE_H
