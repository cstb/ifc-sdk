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

#ifndef IFC2X3_IFCRELCONNECTSPATHELEMENTS_H
#define IFC2X3_IFCRELCONNECTSPATHELEMENTS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcRelConnectsElements.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcRelConnectsPathElements : public IfcRelConnectsElements {
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
        Step::List< Step::Integer > &getRelatingPriorities();
        /**
         * Sets the value of the explicit attribute 'RelatingPriorities'.
         * 
         * @param value
         */
        void setRelatingPriorities(const Step::List< Step::Integer > &value);
        /**
         */
        Step::List< Step::Integer > &getRelatedPriorities();
        /**
         * Sets the value of the explicit attribute 'RelatedPriorities'.
         * 
         * @param value
         */
        void setRelatedPriorities(const Step::List< Step::Integer > &value);
        /**
         */
        IfcConnectionTypeEnum getRelatedConnectionType();
        /**
         * Sets the value of the explicit attribute 'RelatedConnectionType'.
         * 
         * @param value
         */
        void setRelatedConnectionType(IfcConnectionTypeEnum value);
        /**
         */
        IfcConnectionTypeEnum getRelatingConnectionType();
        /**
         * Sets the value of the explicit attribute 'RelatingConnectionType'.
         * 
         * @param value
         */
        void setRelatingConnectionType(IfcConnectionTypeEnum value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelConnectsPathElements(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelConnectsPathElements();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelConnectsPathElements &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::List< Step::Integer > m_relatingPriorities;
        /**
         */
        Step::List< Step::Integer > m_relatedPriorities;
        /**
         */
        IfcConnectionTypeEnum m_relatedConnectionType;
        /**
         */
        IfcConnectionTypeEnum m_relatingConnectionType;

    };

}

#endif // IFC2X3_IFCRELCONNECTSPATHELEMENTS_H
