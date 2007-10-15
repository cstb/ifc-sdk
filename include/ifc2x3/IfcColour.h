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

#ifndef IFC2X3_IFCCOLOUR_H
#define IFC2X3_IFCCOLOUR_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcColourSpecification;
    class IfcPreDefinedColour;

    /**
     */
    class IFC2X3_DLL_DEF IfcColour : public Step::BaseObject {
    public:
        /**
 */
enum IfcColour_select {
            IFCCOLOURSPECIFICATION,
            IFCPREDEFINEDCOLOUR,
            UNSET,
        };

        union IfcColour_union {
            IfcColourSpecification *m_IfcColourSpecification;
            IfcPreDefinedColour *m_IfcPreDefinedColour;
        };
        /**
         */
        IfcColour();
        virtual ~IfcColour();
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
        virtual void copy(const IfcColour &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcColour_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcColourSpecification *getIfcColourSpecification();
        /**
         * @param value
         */
        void setIfcColourSpecification(IfcColourSpecification *value);
        /**
         */
        IfcPreDefinedColour *getIfcPreDefinedColour();
        /**
         * @param value
         */
        void setIfcPreDefinedColour(IfcPreDefinedColour *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcColour(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcColour_select m_type;
        /**
         */
        IfcColour_union m_IfcColour_union;

    };

}

#endif // IFC2X3_IFCCOLOUR_H
