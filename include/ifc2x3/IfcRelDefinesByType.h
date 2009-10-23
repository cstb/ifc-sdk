#ifndef IFC2X3_IFCRELDEFINESBYTYPE_H
#define IFC2X3_IFCRELDEFINESBYTYPE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcRelDefines.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcTypeObject;

    /**
     * Generated class for the IfcRelDefinesByType Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcRelDefinesByType : public IfcRelDefines {
    public:
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
         * Gets the value of the explicit attribute 'RelatingType'.
         * 
         */
        virtual IfcTypeObject *getRelatingType();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingType'.
         * 
         * @return the value of the explicit attribute 'RelatingType'
         */
        virtual const IfcTypeObject *getRelatingType() const;
        /**
         * Sets the value of the explicit attribute 'RelatingType'.
         * 
         * @param value
         */
        virtual void setRelatingType(const Step::RefPtr< IfcTypeObject > &value);
        /**
         * unset the attribute 'RelatingType'.
         * 
         */
        virtual void unsetRelatingType();
        /**
         * Test if the attribute 'RelatingType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatingType() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelDefinesByType(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelDefinesByType();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelDefinesByType &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcTypeObject > m_relatingType;

    };

}

#endif // IFC2X3_IFCRELDEFINESBYTYPE_H
