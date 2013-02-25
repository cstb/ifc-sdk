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

#ifndef IFC2X3_IFCAXIS2PLACEMENT_H
#define IFC2X3_IFCAXIS2PLACEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseObject.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcAxis2Placement2D;
    class IfcAxis2Placement3D;

    /**
     * .
     * 
     */
    class IFC2X3_EXPORT IfcAxis2Placement : public Step::BaseObject {
    public:
        /**
 */
enum IfcAxis2Placement_select {
            IFCAXIS2PLACEMENT2D,
            IFCAXIS2PLACEMENT3D,
            UNSET,
        };

        union IfcAxis2Placement_union {
            IfcAxis2Placement2D *m_IfcAxis2Placement2D;
            IfcAxis2Placement3D *m_IfcAxis2Placement3D;
        };
        /**
         */
        IfcAxis2Placement();
        virtual ~IfcAxis2Placement();
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
        virtual void copy(const IfcAxis2Placement &obj, const CopyOp &copyop);
        /**
         */
        std::string currentTypeName() const;
        /**
         */
        IfcAxis2Placement_select currentType() const;
        /**
         */
        void deleteUnion();
        /**
         */
        IfcAxis2Placement2D *getIfcAxis2Placement2D() const;
        /**
         * @param value
         */
        void setIfcAxis2Placement2D(IfcAxis2Placement2D *value);
        /**
         */
        IfcAxis2Placement3D *getIfcAxis2Placement3D() const;
        /**
         * @param value
         */
        void setIfcAxis2Placement3D(IfcAxis2Placement3D *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcAxis2Placement(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcAxis2Placement_select m_type;
        /**
         */
        IfcAxis2Placement_union m_IfcAxis2Placement_union;

    };

}

#endif // IFC2X3_IFCAXIS2PLACEMENT_H
