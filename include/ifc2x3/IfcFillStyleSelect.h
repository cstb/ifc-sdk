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
 *     Copyright (C) 2008 CSTB                                             *
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
        virtual void copy(const IfcFillStyleSelect &obj, const CopyOp &copyop);
        /**
         */
        std::string currentTypeName() const;
        /**
         */
        IfcFillStyleSelect_select currentType() const;
        /**
         */
        void deleteUnion();
        /**
         */
        IfcFillAreaStyleHatching *getIfcFillAreaStyleHatching() const;
        /**
         * @param value
         */
        void setIfcFillAreaStyleHatching(IfcFillAreaStyleHatching *value);
        /**
         */
        IfcFillAreaStyleTiles *getIfcFillAreaStyleTiles() const;
        /**
         * @param value
         */
        void setIfcFillAreaStyleTiles(IfcFillAreaStyleTiles *value);
        /**
         */
        IfcColourSpecification *getIfcColourSpecification() const;
        /**
         * @param value
         */
        void setIfcColourSpecification(IfcColourSpecification *value);
        /**
         */
        IfcPreDefinedColour *getIfcPreDefinedColour() const;
        /**
         * @param value
         */
        void setIfcPreDefinedColour(IfcPreDefinedColour *value);
        /**
         */
        IfcExternallyDefinedHatchStyle *getIfcExternallyDefinedHatchStyle() const;
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
