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

#ifndef IFC2X3_IFCLIBRARYREFERENCE_H
#define IFC2X3_IFCLIBRARYREFERENCE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcExternalReference.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcLibraryReference Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcLibraryReference : public IfcExternalReference {
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
         * Gets the value of the inverse attribute 'ReferenceIntoLibrary'.
         * 
         */
        Inverse_Set_IfcLibraryInformation_0_1 &getReferenceIntoLibrary();
        /**
         * (const) Returns the value of the explicit attribute 'ReferenceIntoLibrary'.
         * 
         * @return the value of the explicit attribute 'ReferenceIntoLibrary'
         */
        virtual const Inverse_Set_IfcLibraryInformation_0_1 &getReferenceIntoLibrary() const;
        /**
         * Test if the attribute 'ReferenceIntoLibrary' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testReferenceIntoLibrary() const;
        friend class Inverted_IfcLibraryInformation_LibraryReference_type;
        friend class IfcLibraryInformation;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcLibraryReference(Step::Id id, Step::SPFData *args);
        virtual ~IfcLibraryReference();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcLibraryReference &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverse_Set_IfcLibraryInformation_0_1 m_referenceIntoLibrary;

    };

}

#endif // IFC2X3_IFCLIBRARYREFERENCE_H
