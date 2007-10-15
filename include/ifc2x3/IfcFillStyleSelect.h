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

#ifndef IFC2X3_IFCFILLSTYLESELECT_H
#define IFC2X3_IFCFILLSTYLESELECT_H
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
    class IfcExternallyDefinedHatchStyle;
    class IfcFillAreaStyleHatching;
    class IfcFillAreaStyleTiles;
    class IfcPreDefinedColour;

    /**
     */
    class IFC2X3_DLL_DEF IfcFillStyleSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcFillStyleSelect_select {
            IFCFILLAREASTYLEHATCHING,
            IFCFILLAREASTYLETILES,
            IFCCOLOURSPECIFICATION,
            IFCPREDEFINEDCOLOUR,
            IFCEXTERNALLYDEFINEDHATCHSTYLE,
            UNSET,
        };

        union IfcFillStyleSelect_union {
            IfcFillAreaStyleHatching *m_IfcFillAreaStyleHatching;
            IfcFillAreaStyleTiles *m_IfcFillAreaStyleTiles;
            IfcColourSpecification *m_IfcColourSpecification;
            IfcPreDefinedColour *m_IfcPreDefinedColour;
            IfcExternallyDefinedHatchStyle *m_IfcExternallyDefinedHatchStyle;
        };
        /**
         */
        IfcFillStyleSelect();
        virtual ~IfcFillStyleSelect();
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
        virtual void copy(const IfcFillStyleSelect &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcFillStyleSelect_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcFillAreaStyleHatching *getIfcFillAreaStyleHatching();
        /**
         * @param value
         */
        void setIfcFillAreaStyleHatching(IfcFillAreaStyleHatching *value);
        /**
         */
        IfcFillAreaStyleTiles *getIfcFillAreaStyleTiles();
        /**
         * @param value
         */
        void setIfcFillAreaStyleTiles(IfcFillAreaStyleTiles *value);
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
         */
        IfcExternallyDefinedHatchStyle *getIfcExternallyDefinedHatchStyle();
        /**
         * @param value
         */
        void setIfcExternallyDefinedHatchStyle(IfcExternallyDefinedHatchStyle *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcFillStyleSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcFillStyleSelect_select m_type;
        /**
         */
        IfcFillStyleSelect_union m_IfcFillStyleSelect_union;

    };

}

#endif // IFC2X3_IFCFILLSTYLESELECT_H
