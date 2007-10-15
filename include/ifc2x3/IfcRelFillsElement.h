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

#ifndef IFC2X3_IFCRELFILLSELEMENT_H
#define IFC2X3_IFCRELFILLSELEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>
#include "ifc2x3/IfcRelConnects.h"

namespace ifc2x3 {

    class CopyOp;
    class IfcElement;
    class IfcOpeningElement;

    /**
     */
    class IFC2X3_DLL_DEF IfcRelFillsElement : public IfcRelConnects {
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
        IfcOpeningElement *getRelatingOpeningElement();
        /**
         * Sets the value of the explicit attribute 'RelatingOpeningElement'.
         * 
         * @param value
         */
        void setRelatingOpeningElement(const Step::RefPtr< IfcOpeningElement > &value);
        /**
         */
        IfcElement *getRelatedBuildingElement();
        /**
         * Sets the value of the explicit attribute 'RelatedBuildingElement'.
         * 
         * @param value
         */
        void setRelatedBuildingElement(const Step::RefPtr< IfcElement > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelFillsElement(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelFillsElement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelFillsElement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcOpeningElement > m_relatingOpeningElement;
        /**
         */
        Step::RefPtr< IfcElement > m_relatedBuildingElement;

    };

}

#endif // IFC2X3_IFCRELFILLSELEMENT_H
