#ifndef IFC2X3_IFCSYSTEM_H
#define IFC2X3_IFCSYSTEM_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcGroup.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcSystem Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcSystem : public IfcGroup {
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
         * Gets the value of the inverse attribute 'ServicesBuildings'.
         * 
         */
        Inverse_Set_IfcRelServicesBuildings_0_1 &getServicesBuildings();
        /**
         * (const) Returns the value of the explicit attribute 'ServicesBuildings'.
         * 
         * @return the value of the explicit attribute 'ServicesBuildings'
         */
        virtual const Inverse_Set_IfcRelServicesBuildings_0_1 &getServicesBuildings() const;
        /**
         * Test if the attribute 'ServicesBuildings' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testServicesBuildings() const;
        friend class IfcRelServicesBuildings;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSystem(Step::Id id, Step::SPFData *args);
        virtual ~IfcSystem();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSystem &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverse_Set_IfcRelServicesBuildings_0_1 m_servicesBuildings;

    };

}

#endif // IFC2X3_IFCSYSTEM_H
