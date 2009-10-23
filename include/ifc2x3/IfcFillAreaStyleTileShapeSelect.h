#ifndef IFC2X3_IFCFILLAREASTYLETILESHAPESELECT_H
#define IFC2X3_IFCFILLAREASTYLETILESHAPESELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseObject.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcFillAreaStyleTileSymbolWithStyle;

    /**
     * .
     * 
     */
    class IFC2X3_DLL_DEF IfcFillAreaStyleTileShapeSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcFillAreaStyleTileShapeSelect_select {
            IFCFILLAREASTYLETILESYMBOLWITHSTYLE,
            UNSET,
        };

        union IfcFillAreaStyleTileShapeSelect_union {
            IfcFillAreaStyleTileSymbolWithStyle *m_IfcFillAreaStyleTileSymbolWithStyle;
        };
        /**
         */
        IfcFillAreaStyleTileShapeSelect();
        virtual ~IfcFillAreaStyleTileShapeSelect();
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
        virtual void copy(const IfcFillAreaStyleTileShapeSelect &obj, const CopyOp &copyop);
        /**
         */
        std::string currentTypeName() const;
        /**
         */
        IfcFillAreaStyleTileShapeSelect_select currentType() const;
        /**
         */
        void deleteUnion();
        /**
         */
        IfcFillAreaStyleTileSymbolWithStyle *getIfcFillAreaStyleTileSymbolWithStyle() const;
        /**
         * @param value
         */
        void setIfcFillAreaStyleTileSymbolWithStyle(IfcFillAreaStyleTileSymbolWithStyle *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcFillAreaStyleTileShapeSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcFillAreaStyleTileShapeSelect_select m_type;
        /**
         */
        IfcFillAreaStyleTileShapeSelect_union m_IfcFillAreaStyleTileShapeSelect_union;

    };

}

#endif // IFC2X3_IFCFILLAREASTYLETILESHAPESELECT_H
