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

#ifndef IFC2X3_IFCTEXTSTYLESELECT_H
#define IFC2X3_IFCTEXTSTYLESELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseObject.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcTextStyleTextModel;
    class IfcTextStyleWithBoxCharacteristics;

    /**
     * .
     * 
     */
    class IFC2X3_EXPORT IfcTextStyleSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcTextStyleSelect_select {
            IFCTEXTSTYLEWITHBOXCHARACTERISTICS,
            IFCTEXTSTYLETEXTMODEL,
            UNSET,
        };

        union IfcTextStyleSelect_union {
            IfcTextStyleWithBoxCharacteristics *m_IfcTextStyleWithBoxCharacteristics;
            IfcTextStyleTextModel *m_IfcTextStyleTextModel;
        };
        /**
         */
        IfcTextStyleSelect();
        virtual ~IfcTextStyleSelect();
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
        virtual void copy(const IfcTextStyleSelect &obj, const CopyOp &copyop);
        /**
         */
        std::string currentTypeName() const;
        /**
         */
        IfcTextStyleSelect_select currentType() const;
        /**
         */
        void deleteUnion();
        /**
         */
        IfcTextStyleWithBoxCharacteristics *getIfcTextStyleWithBoxCharacteristics() const;
        /**
         * @param value
         */
        void setIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics *value);
        /**
         */
        IfcTextStyleTextModel *getIfcTextStyleTextModel() const;
        /**
         * @param value
         */
        void setIfcTextStyleTextModel(IfcTextStyleTextModel *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcTextStyleSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcTextStyleSelect_select m_type;
        /**
         */
        IfcTextStyleSelect_union m_IfcTextStyleSelect_union;

    };

}

#endif // IFC2X3_IFCTEXTSTYLESELECT_H
