#ifndef IFC2X3_IFCCOLOUR_H
#define IFC2X3_IFCCOLOUR_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseObject.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcColourSpecification;
    class IfcPreDefinedColour;

    /**
     * .
     * 
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
        virtual void copy(const IfcColour &obj, const CopyOp &copyop);
        /**
         */
        std::string currentTypeName() const;
        /**
         */
        IfcColour_select currentType() const;
        /**
         */
        void deleteUnion();
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
