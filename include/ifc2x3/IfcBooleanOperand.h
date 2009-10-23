#ifndef IFC2X3_IFCBOOLEANOPERAND_H
#define IFC2X3_IFCBOOLEANOPERAND_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseObject.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcBooleanResult;
    class IfcCsgPrimitive3D;
    class IfcHalfSpaceSolid;
    class IfcSolidModel;

    /**
     * .
     * 
     */
    class IFC2X3_DLL_DEF IfcBooleanOperand : public Step::BaseObject {
    public:
        /**
 */
enum IfcBooleanOperand_select {
            IFCSOLIDMODEL,
            IFCHALFSPACESOLID,
            IFCBOOLEANRESULT,
            IFCCSGPRIMITIVE3D,
            UNSET,
        };

        union IfcBooleanOperand_union {
            IfcSolidModel *m_IfcSolidModel;
            IfcHalfSpaceSolid *m_IfcHalfSpaceSolid;
            IfcBooleanResult *m_IfcBooleanResult;
            IfcCsgPrimitive3D *m_IfcCsgPrimitive3D;
        };
        /**
         */
        IfcBooleanOperand();
        virtual ~IfcBooleanOperand();
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
        virtual void copy(const IfcBooleanOperand &obj, const CopyOp &copyop);
        /**
         */
        std::string currentTypeName() const;
        /**
         */
        IfcBooleanOperand_select currentType() const;
        /**
         */
        void deleteUnion();
        /**
         */
        IfcSolidModel *getIfcSolidModel() const;
        /**
         * @param value
         */
        void setIfcSolidModel(IfcSolidModel *value);
        /**
         */
        IfcHalfSpaceSolid *getIfcHalfSpaceSolid() const;
        /**
         * @param value
         */
        void setIfcHalfSpaceSolid(IfcHalfSpaceSolid *value);
        /**
         */
        IfcBooleanResult *getIfcBooleanResult() const;
        /**
         * @param value
         */
        void setIfcBooleanResult(IfcBooleanResult *value);
        /**
         */
        IfcCsgPrimitive3D *getIfcCsgPrimitive3D() const;
        /**
         * @param value
         */
        void setIfcCsgPrimitive3D(IfcCsgPrimitive3D *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcBooleanOperand(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcBooleanOperand_select m_type;
        /**
         */
        IfcBooleanOperand_union m_IfcBooleanOperand_union;

    };

}

#endif // IFC2X3_IFCBOOLEANOPERAND_H
