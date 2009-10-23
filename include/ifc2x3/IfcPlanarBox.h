#ifndef IFC2X3_IFCPLANARBOX_H
#define IFC2X3_IFCPLANARBOX_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcPlanarExtent.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcAxis2Placement;

    /**
     * Generated class for the IfcPlanarBox Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcPlanarBox : public IfcPlanarExtent {
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
         * Gets the value of the explicit attribute 'Placement'.
         * 
         */
        virtual IfcAxis2Placement *getPlacement();
        /**
         * (const) Returns the value of the explicit attribute 'Placement'.
         * 
         * @return the value of the explicit attribute 'Placement'
         */
        virtual const IfcAxis2Placement *getPlacement() const;
        /**
         * Sets the value of the explicit attribute 'Placement'.
         * 
         * @param value
         */
        virtual void setPlacement(const Step::RefPtr< IfcAxis2Placement > &value);
        /**
         * unset the attribute 'Placement'.
         * 
         */
        virtual void unsetPlacement();
        /**
         * Test if the attribute 'Placement' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPlacement() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPlanarBox(Step::Id id, Step::SPFData *args);
        virtual ~IfcPlanarBox();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPlanarBox &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcAxis2Placement > m_placement;

    };

}

#endif // IFC2X3_IFCPLANARBOX_H
