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

#ifndef IFC2X3_IFCBRIDGEPART_H
#define IFC2X3_IFCBRIDGEPART_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcBridgeStructureElement.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     * Physical Elements.
     * 
     */
    class IFC2X3_DLL_DEF IfcBridgePart : public IfcBridgeStructureElement {
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
        IfcBridgeStructureElementType getStrutureElementType();
        /**
         * Sets the value of the explicit attribute 'StrutureElementType'.
         * 
         * @param value
         */
        void setStrutureElementType(IfcBridgeStructureElementType value);
        /**
         */
        IfcBridgeTechnologicalElementType getTechnoElementType();
        /**
         * Sets the value of the explicit attribute 'TechnoElementType'.
         * 
         * @param value
         */
        void setTechnoElementType(IfcBridgeTechnologicalElementType value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcBridgePart(Step::Id id, Step::SPFData *args);
        virtual ~IfcBridgePart();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcBridgePart &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcBridgeStructureElementType m_strutureElementType;
        /**
         */
        IfcBridgeTechnologicalElementType m_technoElementType;

    };

}

#endif // IFC2X3_IFCBRIDGEPART_H
