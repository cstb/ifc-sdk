#ifndef IFC2X3_IFCSIUNIT_H
#define IFC2X3_IFCSIUNIT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcNamedUnit.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcSIUnit Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcSIUnit : public IfcNamedUnit {
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
         * Gets the value of the explicit attribute 'Prefix'.
         * 
         */
        virtual IfcSIPrefix getPrefix();
        /**
         * (const) Returns the value of the explicit attribute 'Prefix'.
         * 
         * @return the value of the explicit attribute 'Prefix'
         */
        virtual const IfcSIPrefix getPrefix() const;
        /**
         * Sets the value of the explicit attribute 'Prefix'.
         * 
         * @param value
         */
        virtual void setPrefix(IfcSIPrefix value);
        /**
         * unset the attribute 'Prefix'.
         * 
         */
        virtual void unsetPrefix();
        /**
         * Test if the attribute 'Prefix' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPrefix() const;
        /**
         * Gets the value of the explicit attribute 'Name'.
         * 
         */
        virtual IfcSIUnitName getName();
        /**
         * (const) Returns the value of the explicit attribute 'Name'.
         * 
         * @return the value of the explicit attribute 'Name'
         */
        virtual const IfcSIUnitName getName() const;
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        virtual void setName(IfcSIUnitName value);
        /**
         * unset the attribute 'Name'.
         * 
         */
        virtual void unsetName();
        /**
         * Test if the attribute 'Name' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testName() const;
        /**
         * Gets the value of the derived attribute redeclaration 'Dimensions'.
         * 
         */
        virtual IfcDimensionalExponents *getDimensions();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSIUnit(Step::Id id, Step::SPFData *args);
        virtual ~IfcSIUnit();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSIUnit &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcSIPrefix m_prefix;
        /**
         */
        IfcSIUnitName m_name;

    };

}

#endif // IFC2X3_IFCSIUNIT_H
