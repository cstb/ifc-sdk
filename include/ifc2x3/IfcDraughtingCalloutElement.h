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

#ifndef IFC2X3_IFCDRAUGHTINGCALLOUTELEMENT_H
#define IFC2X3_IFCDRAUGHTINGCALLOUTELEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseObject.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcAnnotationCurveOccurrence;
    class IfcAnnotationSymbolOccurrence;
    class IfcAnnotationTextOccurrence;

    /**
     * .
     * 
     */
    class IFC2X3_EXPORT IfcDraughtingCalloutElement : public Step::BaseObject {
    public:
        /**
 */
enum IfcDraughtingCalloutElement_select {
            IFCANNOTATIONCURVEOCCURRENCE,
            IFCANNOTATIONTEXTOCCURRENCE,
            IFCANNOTATIONSYMBOLOCCURRENCE,
            UNSET,
        };

        union IfcDraughtingCalloutElement_union {
            IfcAnnotationCurveOccurrence *m_IfcAnnotationCurveOccurrence;
            IfcAnnotationTextOccurrence *m_IfcAnnotationTextOccurrence;
            IfcAnnotationSymbolOccurrence *m_IfcAnnotationSymbolOccurrence;
        };
        /**
         */
        IfcDraughtingCalloutElement();
        virtual ~IfcDraughtingCalloutElement();
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
        virtual void copy(const IfcDraughtingCalloutElement &obj, const CopyOp &copyop);
        /**
         */
        std::string currentTypeName() const;
        /**
         */
        IfcDraughtingCalloutElement_select currentType() const;
        /**
         */
        void deleteUnion();
        /**
         */
        IfcAnnotationCurveOccurrence *getIfcAnnotationCurveOccurrence() const;
        /**
         * @param value
         */
        void setIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *value);
        /**
         */
        IfcAnnotationTextOccurrence *getIfcAnnotationTextOccurrence() const;
        /**
         * @param value
         */
        void setIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *value);
        /**
         */
        IfcAnnotationSymbolOccurrence *getIfcAnnotationSymbolOccurrence() const;
        /**
         * @param value
         */
        void setIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcDraughtingCalloutElement(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcDraughtingCalloutElement_select m_type;
        /**
         */
        IfcDraughtingCalloutElement_union m_IfcDraughtingCalloutElement_union;

    };

}

#endif // IFC2X3_IFCDRAUGHTINGCALLOUTELEMENT_H
