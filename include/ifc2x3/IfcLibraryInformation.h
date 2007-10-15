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

#ifndef IFC2X3_IFCLIBRARYINFORMATION_H
#define IFC2X3_IFCLIBRARYINFORMATION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Aggregation.h>
#include <Step/SPFData.h>
#include <string>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCalendarDate;
    class IfcLibraryReference;
    class IfcOrganization;

    /**
     */
    class IFC2X3_DLL_DEF IfcLibraryInformation : public Step::BaseEntity {
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
        IfcLabel getVersion();
        /**
         * Sets the value of the explicit attribute 'Version'.
         * 
         * @param value
         */
        void setVersion(const IfcLabel &value);
        /**
         */
        IfcOrganization *getPublisher();
        /**
         * Sets the value of the explicit attribute 'Publisher'.
         * 
         * @param value
         */
        void setPublisher(const Step::RefPtr< IfcOrganization > &value);
        /**
         */
        IfcCalendarDate *getVersionDate();
        /**
         * Sets the value of the explicit attribute 'VersionDate'.
         * 
         * @param value
         */
        void setVersionDate(const Step::RefPtr< IfcCalendarDate > &value);
        /**
         */
        Step::Set< Step::RefPtr< IfcLibraryReference > > &getLibraryReference();
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        /**
         */
        class Inverted_LibraryReference_type : public Step::Set< Step::RefPtr< IfcLibraryReference > > {
        public:
            /**
             */
            IfcLibraryInformation *mOwner;
            /**
             */
            Inverted_LibraryReference_type();
            /**
             * @param owner
             */
            void setOwner(IfcLibraryInformation *owner);
            /**
             * @param value
             */
            virtual void insert(const Step::RefPtr< IfcLibraryReference > &value);

        };


    protected:
        /**
         * @param id
         * @param args
         */
        IfcLibraryInformation(Step::Id id, Step::SPFData *args);
        virtual ~IfcLibraryInformation();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcLibraryInformation &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_name;
        /**
         */
        std::string m_version;
        /**
         */
        Step::RefPtr< IfcOrganization > m_publisher;
        /**
         */
        Step::RefPtr< IfcCalendarDate > m_versionDate;
        /**
         */
        Inverted_LibraryReference_type m_libraryReference;

    };

}

#endif // IFC2X3_IFCLIBRARYINFORMATION_H
