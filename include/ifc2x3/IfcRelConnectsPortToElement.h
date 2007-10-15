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

#ifndef IFC2X3_IFCRELCONNECTSPORTTOELEMENT_H
#define IFC2X3_IFCRELCONNECTSPORTTOELEMENT_H
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
    class IfcPort;

    /**
     */
    class IFC2X3_DLL_DEF IfcRelConnectsPortToElement : public IfcRelConnects {
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
        IfcPort *getRelatingPort();
        /**
         * Sets the value of the explicit attribute 'RelatingPort'.
         * 
         * @param value
         */
        void setRelatingPort(const Step::RefPtr< IfcPort > &value);
        /**
         */
        IfcElement *getRelatedElement();
        /**
         * Sets the value of the explicit attribute 'RelatedElement'.
         * 
         * @param value
         */
        void setRelatedElement(const Step::RefPtr< IfcElement > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelConnectsPortToElement(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelConnectsPortToElement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelConnectsPortToElement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcPort > m_relatingPort;
        /**
         */
        Step::RefPtr< IfcElement > m_relatedElement;

    };

}

#endif // IFC2X3_IFCRELCONNECTSPORTTOELEMENT_H
