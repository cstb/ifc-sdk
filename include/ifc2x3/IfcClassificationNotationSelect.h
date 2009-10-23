#ifndef IFC2X3_IFCCLASSIFICATIONNOTATIONSELECT_H
#define IFC2X3_IFCCLASSIFICATIONNOTATIONSELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseObject.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcClassificationNotation;
    class IfcClassificationReference;

    /**
     * .
     * 
     */
    class IFC2X3_DLL_DEF IfcClassificationNotationSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcClassificationNotationSelect_select {
            IFCCLASSIFICATIONNOTATION,
            IFCCLASSIFICATIONREFERENCE,
            UNSET,
        };

        union IfcClassificationNotationSelect_union {
            IfcClassificationNotation *m_IfcClassificationNotation;
            IfcClassificationReference *m_IfcClassificationReference;
        };
        /**
         */
        IfcClassificationNotationSelect();
        virtual ~IfcClassificationNotationSelect();
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
        virtual void copy(const IfcClassificationNotationSelect &obj, const CopyOp &copyop);
        /**
         */
        std::string currentTypeName() const;
        /**
         */
        IfcClassificationNotationSelect_select currentType() const;
        /**
         */
        void deleteUnion();
        /**
         */
        IfcClassificationNotation *getIfcClassificationNotation() const;
        /**
         * @param value
         */
        void setIfcClassificationNotation(IfcClassificationNotation *value);
        /**
         */
        IfcClassificationReference *getIfcClassificationReference() const;
        /**
         * @param value
         */
        void setIfcClassificationReference(IfcClassificationReference *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcClassificationNotationSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcClassificationNotationSelect_select m_type;
        /**
         */
        IfcClassificationNotationSelect_union m_IfcClassificationNotationSelect_union;

    };

}

#endif // IFC2X3_IFCCLASSIFICATIONNOTATIONSELECT_H
