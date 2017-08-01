// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

#ifndef IFC2X3_IFCSHELL_H
#define IFC2X3_IFCSHELL_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseObject.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcClosedShell;
    class IfcOpenShell;

    /**
     * .
     * 
     */
    class IFC2X3_EXPORT IfcShell : public Step::BaseObject {
    public:
        /**
 */
enum IfcShell_select {
            IFCCLOSEDSHELL,
            IFCOPENSHELL,
            UNSET,
        };

        union IfcShell_union {
            IfcClosedShell *m_IfcClosedShell;
            IfcOpenShell *m_IfcOpenShell;
        };
        /**
         */
        IfcShell();
        ~IfcShell() override;
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        bool acceptVisitor(Step::BaseVisitor *visitor) override;
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        const std::string &type() const override;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        const Step::ClassType &getType() const override;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        bool isOfType(const Step::ClassType &t) const override;
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcShell &obj, const CopyOp &copyop);
        /**
         */
        std::string currentTypeName() const;
        /**
         */
        IfcShell_select currentType() const;
        /**
         */
        void deleteUnion();
        /**
         */
        IfcClosedShell *getIfcClosedShell() const;
        /**
         * @param value
         */
        void setIfcClosedShell(IfcClosedShell *value);
        /**
         */
        IfcOpenShell *getIfcOpenShell() const;
        /**
         * @param value
         */
        void setIfcOpenShell(IfcOpenShell *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcShell(Step::SPFData *args);
        /**
         */
        bool init() override;

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcShell_select m_type;
        /**
         */
        IfcShell_union m_IfcShell_union;

    };

}

#endif // IFC2X3_IFCSHELL_H
