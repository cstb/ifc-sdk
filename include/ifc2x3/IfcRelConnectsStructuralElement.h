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

#ifndef IFC2X3_IFCRELCONNECTSSTRUCTURALELEMENT_H
#define IFC2X3_IFCRELCONNECTSSTRUCTURALELEMENT_H
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
    class IfcStructuralMember;

    /**
     */
    class IFC2X3_DLL_DEF IfcRelConnectsStructuralElement : public IfcRelConnects {
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
        IfcElement *getRelatingElement();
        /**
         * Sets the value of the explicit attribute 'RelatingElement'.
         * 
         * @param value
         */
        void setRelatingElement(const Step::RefPtr< IfcElement > &value);
        /**
         */
        IfcStructuralMember *getRelatedStructuralMember();
        /**
         * Sets the value of the explicit attribute 'RelatedStructuralMember'.
         * 
         * @param value
         */
        void setRelatedStructuralMember(const Step::RefPtr< IfcStructuralMember > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelConnectsStructuralElement(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelConnectsStructuralElement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelConnectsStructuralElement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcElement > m_relatingElement;
        /**
         */
        Step::RefPtr< IfcStructuralMember > m_relatedStructuralMember;

    };

}

#endif // IFC2X3_IFCRELCONNECTSSTRUCTURALELEMENT_H
