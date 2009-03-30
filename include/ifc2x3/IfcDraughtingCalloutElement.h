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

#ifndef IFC2X3_IFCDRAUGHTINGCALLOUTELEMENT_H
#define IFC2X3_IFCDRAUGHTINGCALLOUTELEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

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
    class IFC2X3_DLL_DEF IfcDraughtingCalloutElement : public Step::BaseObject {
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
