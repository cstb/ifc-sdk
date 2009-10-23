#ifndef IFC2X3_IFCREINFORCINGELEMENT_H
#define IFC2X3_IFCREINFORCINGELEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcBuildingElementComponent.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcReinforcingElement Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcReinforcingElement : public IfcBuildingElementComponent {
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
         * Gets the value of the explicit attribute 'SteelGrade'.
         * 
         */
        virtual IfcLabel getSteelGrade();
        /**
         * (const) Returns the value of the explicit attribute 'SteelGrade'.
         * 
         * @return the value of the explicit attribute 'SteelGrade'
         */
        virtual const IfcLabel getSteelGrade() const;
        /**
         * Sets the value of the explicit attribute 'SteelGrade'.
         * 
         * @param value
         */
        virtual void setSteelGrade(const IfcLabel &value);
        /**
         * unset the attribute 'SteelGrade'.
         * 
         */
        virtual void unsetSteelGrade();
        /**
         * Test if the attribute 'SteelGrade' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSteelGrade() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcReinforcingElement(Step::Id id, Step::SPFData *args);
        virtual ~IfcReinforcingElement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcReinforcingElement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_steelGrade;

    };

}

#endif // IFC2X3_IFCREINFORCINGELEMENT_H
