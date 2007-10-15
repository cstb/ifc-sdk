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

#ifndef IFC2X3_IFCDRAUGHTINGCALLOUTELEMENT_H
#define IFC2X3_IFCDRAUGHTINGCALLOUTELEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcAnnotationCurveOccurrence;
    class IfcAnnotationSymbolOccurrence;
    class IfcAnnotationTextOccurrence;

    /**
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
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDraughtingCalloutElement &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcDraughtingCalloutElement_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcAnnotationCurveOccurrence *getIfcAnnotationCurveOccurrence();
        /**
         * @param value
         */
        void setIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *value);
        /**
         */
        IfcAnnotationTextOccurrence *getIfcAnnotationTextOccurrence();
        /**
         * @param value
         */
        void setIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *value);
        /**
         */
        IfcAnnotationSymbolOccurrence *getIfcAnnotationSymbolOccurrence();
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
