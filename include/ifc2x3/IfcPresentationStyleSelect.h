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

#ifndef IFC2X3_IFCPRESENTATIONSTYLESELECT_H
#define IFC2X3_IFCPRESENTATIONSTYLESELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseObject.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcCurveStyle;
    class IfcFillAreaStyle;
    class IfcSurfaceStyle;
    class IfcSymbolStyle;
    class IfcTextStyle;

    /**
     * .
     * 
     */
    class IFC2X3_EXPORT IfcPresentationStyleSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcPresentationStyleSelect_select {
            IFCNULLSTYLE,
            IFCCURVESTYLE,
            IFCSYMBOLSTYLE,
            IFCFILLAREASTYLE,
            IFCTEXTSTYLE,
            IFCSURFACESTYLE,
            UNSET,
        };

        union IfcPresentationStyleSelect_union {
            IfcNullStyle m_IfcNullStyle;
            IfcCurveStyle *m_IfcCurveStyle;
            IfcSymbolStyle *m_IfcSymbolStyle;
            IfcFillAreaStyle *m_IfcFillAreaStyle;
            IfcTextStyle *m_IfcTextStyle;
            IfcSurfaceStyle *m_IfcSurfaceStyle;
        };
        /**
         */
        IfcPresentationStyleSelect();
        virtual ~IfcPresentationStyleSelect();
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
        virtual void copy(const IfcPresentationStyleSelect &obj, const CopyOp &copyop);
        /**
         */
        std::string currentTypeName() const;
        /**
         */
        IfcPresentationStyleSelect_select currentType() const;
        /**
         */
        void deleteUnion();
        /**
         */
        IfcNullStyle getIfcNullStyle() const;
        /**
         * @param value
         */
        void setIfcNullStyle(IfcNullStyle value);
        /**
         */
        IfcCurveStyle *getIfcCurveStyle() const;
        /**
         * @param value
         */
        void setIfcCurveStyle(IfcCurveStyle *value);
        /**
         */
        IfcSymbolStyle *getIfcSymbolStyle() const;
        /**
         * @param value
         */
        void setIfcSymbolStyle(IfcSymbolStyle *value);
        /**
         */
        IfcFillAreaStyle *getIfcFillAreaStyle() const;
        /**
         * @param value
         */
        void setIfcFillAreaStyle(IfcFillAreaStyle *value);
        /**
         */
        IfcTextStyle *getIfcTextStyle() const;
        /**
         * @param value
         */
        void setIfcTextStyle(IfcTextStyle *value);
        /**
         */
        IfcSurfaceStyle *getIfcSurfaceStyle() const;
        /**
         * @param value
         */
        void setIfcSurfaceStyle(IfcSurfaceStyle *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcPresentationStyleSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcPresentationStyleSelect_select m_type;
        /**
         */
        IfcPresentationStyleSelect_union m_IfcPresentationStyleSelect_union;

    };

}

#endif // IFC2X3_IFCPRESENTATIONSTYLESELECT_H
