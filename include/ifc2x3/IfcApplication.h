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

#ifndef IFC2X3_IFCAPPLICATION_H
#define IFC2X3_IFCAPPLICATION_H
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
    class IfcOrganization;

    /**
     */
    class IFC2X3_DLL_DEF IfcApplication : public Step::BaseEntity {
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
        IfcOrganization *getApplicationDeveloper();
        /**
         * Sets the value of the explicit attribute 'ApplicationDeveloper'.
         * 
         * @param value
         */
        void setApplicationDeveloper(const Step::RefPtr< IfcOrganization > &value);
        /**
         */
        IfcLabel getVersion();
        /**
         * Sets the value of the explicit attribute 'Version'.
         * 
         * @param value
         */
        void setVersion(const IfcLabel &value);
        /**
         */
        IfcLabel getApplicationFullName();
        /**
         * Sets the value of the explicit attribute 'ApplicationFullName'.
         * 
         * @param value
         */
        void setApplicationFullName(const IfcLabel &value);
        /**
         */
        IfcIdentifier getApplicationIdentifier();
        /**
         * Sets the value of the explicit attribute 'ApplicationIdentifier'.
         * 
         * @param value
         */
        void setApplicationIdentifier(const IfcIdentifier &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcApplication(Step::Id id, Step::SPFData *args);
        virtual ~IfcApplication();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcApplication &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcOrganization > m_applicationDeveloper;
        /**
         */
        std::string m_version;
        /**
         */
        std::string m_applicationFullName;
        /**
         */
        std::string m_applicationIdentifier;

    };

}

#endif // IFC2X3_IFCAPPLICATION_H
