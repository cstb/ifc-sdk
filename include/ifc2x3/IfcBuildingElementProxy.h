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
 *     Copyright (C) 2009 CSTB                                             *
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

#ifndef IFC2X3_IFCBUILDINGELEMENTPROXY_H
#define IFC2X3_IFCBUILDINGELEMENTPROXY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcBuildingElement.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcBuildingElementProxy Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcBuildingElementProxy : public IfcBuildingElement {
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
         * Gets the value of the explicit attribute 'CompositionType'.
         * 
         */
        virtual IfcElementCompositionEnum getCompositionType();
        /**
         * (const) Returns the value of the explicit attribute 'CompositionType'.
         * 
         * @return the value of the explicit attribute 'CompositionType'
         */
        virtual const IfcElementCompositionEnum getCompositionType() const;
        /**
         * Sets the value of the explicit attribute 'CompositionType'.
         * 
         * @param value
         */
        virtual void setCompositionType(IfcElementCompositionEnum value);
        /**
         * unset the attribute 'CompositionType'.
         * 
         */
        virtual void unsetCompositionType();
        /**
         * Test if the attribute 'CompositionType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCompositionType() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcBuildingElementProxy(Step::Id id, Step::SPFData *args);
        virtual ~IfcBuildingElementProxy();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcBuildingElementProxy &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcElementCompositionEnum m_compositionType;

    };

}

#endif // IFC2X3_IFCBUILDINGELEMENTPROXY_H
