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
 *     Copyright (C) 2009 CSTB                                             *
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

#ifndef IFC2X3_IFCLIBRARYSELECT_H
#define IFC2X3_IFCLIBRARYSELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseObject.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcLibraryInformation;
    class IfcLibraryReference;

    /**
     * .
     * 
     */
    class IFC2X3_DLL_DEF IfcLibrarySelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcLibrarySelect_select {
            IFCLIBRARYREFERENCE,
            IFCLIBRARYINFORMATION,
            UNSET,
        };

        union IfcLibrarySelect_union {
            IfcLibraryReference *m_IfcLibraryReference;
            IfcLibraryInformation *m_IfcLibraryInformation;
        };
        /**
         */
        IfcLibrarySelect();
        virtual ~IfcLibrarySelect();
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
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcLibrarySelect &obj, const CopyOp &copyop);
        /**
         */
        std::string currentTypeName() const;
        /**
         */
        IfcLibrarySelect_select currentType() const;
        /**
         */
        void deleteUnion();
        /**
         */
        IfcLibraryReference *getIfcLibraryReference() const;
        /**
         * @param value
         */
        void setIfcLibraryReference(IfcLibraryReference *value);
        /**
         */
        IfcLibraryInformation *getIfcLibraryInformation() const;
        /**
         * @param value
         */
        void setIfcLibraryInformation(IfcLibraryInformation *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcLibrarySelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcLibrarySelect_select m_type;
        /**
         */
        IfcLibrarySelect_union m_IfcLibrarySelect_union;

    };

}

#endif // IFC2X3_IFCLIBRARYSELECT_H
