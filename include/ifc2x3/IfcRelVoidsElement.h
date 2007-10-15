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

#ifndef IFC2X3_IFCRELVOIDSELEMENT_H
#define IFC2X3_IFCRELVOIDSELEMENT_H
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
    class IfcFeatureElementSubtraction;

    /**
     */
    class IFC2X3_DLL_DEF IfcRelVoidsElement : public IfcRelConnects {
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
        IfcElement *getRelatingBuildingElement();
        /**
         * Sets the value of the explicit attribute 'RelatingBuildingElement'.
         * 
         * @param value
         */
        void setRelatingBuildingElement(const Step::RefPtr< IfcElement > &value);
        /**
         */
        IfcFeatureElementSubtraction *getRelatedOpeningElement();
        /**
         * Sets the value of the explicit attribute 'RelatedOpeningElement'.
         * 
         * @param value
         */
        void setRelatedOpeningElement(const Step::RefPtr< IfcFeatureElementSubtraction > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelVoidsElement(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelVoidsElement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelVoidsElement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcElement > m_relatingBuildingElement;
        /**
         */
        Step::RefPtr< IfcFeatureElementSubtraction > m_relatedOpeningElement;

    };

}

#endif // IFC2X3_IFCRELVOIDSELEMENT_H
