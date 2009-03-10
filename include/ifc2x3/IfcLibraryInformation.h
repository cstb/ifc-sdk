/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
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

#include <stdexcept>
#include <Step/Referenced.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/String.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class IfcLibraryInformation;
    class IfcLibraryReference;

    /**
     */
    class Inverted_IfcLibraryInformation_LibraryReference_type : public Set_IfcLibraryReference_1_n {
    public:
        /**
         */
        typedef Set_IfcLibraryReference_1_n::size_type size_type;

        /**
         */
        IfcLibraryInformation *mOwner;
        /**
         */
        Inverted_IfcLibraryInformation_LibraryReference_type();
        /**
         * @param owner
         */
        void setOwner(IfcLibraryInformation *owner);
        /**
         * @param value
         */
        virtual void insert(const Step::RefPtr< IfcLibraryReference > &value) throw(std::out_of_range);
        /**
         * @param value
         */
        virtual size_type erase(const Step::RefPtr< IfcLibraryReference > &value);

    };

    class CopyOp;
    class IfcCalendarDate;
    class IfcOrganization;

    /**
     */
    class IFC2X3_DLL_DEF IfcLibraryInformation : public Step::BaseEntity {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'Name'.
         * 
         */
        virtual IfcLabel getName();
        /**
         * (const) Returns the value of the explicit attribute 'Name'.
         * 
         * @return the value of the explicit attribute 'Name'
         */
        virtual const IfcLabel getName() const;
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        virtual void setName(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'Version'.
         * 
         */
        virtual IfcLabel getVersion();
        /**
         * (const) Returns the value of the explicit attribute 'Version'.
         * 
         * @return the value of the explicit attribute 'Version'
         */
        virtual const IfcLabel getVersion() const;
        /**
         * Sets the value of the explicit attribute 'Version'.
         * 
         * @param value
         */
        virtual void setVersion(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'Publisher'.
         * 
         */
        virtual IfcOrganization *getPublisher();
        /**
         * (const) Returns the value of the explicit attribute 'Publisher'.
         * 
         * @return the value of the explicit attribute 'Publisher'
         */
        virtual const IfcOrganization *getPublisher() const;
        /**
         * Sets the value of the explicit attribute 'Publisher'.
         * 
         * @param value
         */
        virtual void setPublisher(const Step::RefPtr< IfcOrganization > &value);
        /**
         * Gets the value of the explicit attribute 'VersionDate'.
         * 
         */
        virtual IfcCalendarDate *getVersionDate();
        /**
         * (const) Returns the value of the explicit attribute 'VersionDate'.
         * 
         * @return the value of the explicit attribute 'VersionDate'
         */
        virtual const IfcCalendarDate *getVersionDate() const;
        /**
         * Sets the value of the explicit attribute 'VersionDate'.
         * 
         * @param value
         */
        virtual void setVersionDate(const Step::RefPtr< IfcCalendarDate > &value);
        /**
         * Gets the value of the explicit attribute 'LibraryReference'.
         * 
         */
        virtual Set_IfcLibraryReference_1_n &getLibraryReference();
        /**
         * (const) Returns the value of the explicit attribute 'LibraryReference'.
         * 
         * @return the value of the explicit attribute 'LibraryReference'
         */
        virtual const Set_IfcLibraryReference_1_n &getLibraryReference() const;
        friend class ExpressDataSet;

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
        Step::String m_name;
        /**
         */
        Step::String m_version;
        /**
         */
        Step::RefPtr< IfcOrganization > m_publisher;
        /**
         */
        Step::RefPtr< IfcCalendarDate > m_versionDate;
        /**
         */
        Inverted_IfcLibraryInformation_LibraryReference_type m_libraryReference;

    };

}

#endif // IFC2X3_IFCLIBRARYINFORMATION_H
