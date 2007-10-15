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

#ifndef IFC2X3_IFCDRAUGHTINGCALLOUTRELATIONSHIP_H
#define IFC2X3_IFCDRAUGHTINGCALLOUTRELATIONSHIP_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcDraughtingCallout;

    /**
     */
    class IFC2X3_DLL_DEF IfcDraughtingCalloutRelationship : public Step::BaseEntity {
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
        IfcLabel getName();
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        void setName(const IfcLabel &value);
        /**
         */
        IfcText getDescription();
        /**
         * Sets the value of the explicit attribute 'Description'.
         * 
         * @param value
         */
        void setDescription(const IfcText &value);
        /**
         */
        IfcDraughtingCallout *getRelatingDraughtingCallout();
        /**
         * Sets the value of the explicit attribute 'RelatingDraughtingCallout'.
         * 
         * @param value
         */
        void setRelatingDraughtingCallout(const Step::RefPtr< IfcDraughtingCallout > &value);
        /**
         */
        IfcDraughtingCallout *getRelatedDraughtingCallout();
        /**
         * Sets the value of the explicit attribute 'RelatedDraughtingCallout'.
         * 
         * @param value
         */
        void setRelatedDraughtingCallout(const Step::RefPtr< IfcDraughtingCallout > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcDraughtingCalloutRelationship(Step::Id id, Step::SPFData *args);
        virtual ~IfcDraughtingCalloutRelationship();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDraughtingCalloutRelationship &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_name;
        /**
         */
        std::string m_description;
        /**
         */
        Step::RefPtr< IfcDraughtingCallout > m_relatingDraughtingCallout;
        /**
         */
        Step::RefPtr< IfcDraughtingCallout > m_relatedDraughtingCallout;

    };

}

#endif // IFC2X3_IFCDRAUGHTINGCALLOUTRELATIONSHIP_H
