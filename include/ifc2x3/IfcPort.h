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

#ifndef IFC2X3_IFCPORT_H
#define IFC2X3_IFCPORT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcProduct.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcRelConnectsPortToElement;

    /**
     * Generated class for the IfcPort Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcPort : public IfcProduct {
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
         * Gets the value of the inverse attribute 'ContainedIn'.
         * 
         */
        IfcRelConnectsPortToElement *getContainedIn();
        /**
         * (const) Returns the value of the explicit attribute 'ContainedIn'.
         * 
         * @return the value of the explicit attribute 'ContainedIn'
         */
        virtual const IfcRelConnectsPortToElement *getContainedIn() const;
        /**
         * Test if the attribute 'ContainedIn' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testContainedIn() const;
        /**
         * Gets the value of the inverse attribute 'ConnectedFrom'.
         * 
         */
        Inverse_Set_IfcRelConnectsPorts_0_1 &getConnectedFrom();
        /**
         * (const) Returns the value of the explicit attribute 'ConnectedFrom'.
         * 
         * @return the value of the explicit attribute 'ConnectedFrom'
         */
        virtual const Inverse_Set_IfcRelConnectsPorts_0_1 &getConnectedFrom() const;
        /**
         * Test if the attribute 'ConnectedFrom' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testConnectedFrom() const;
        /**
         * Gets the value of the inverse attribute 'ConnectedTo'.
         * 
         */
        Inverse_Set_IfcRelConnectsPorts_0_1 &getConnectedTo();
        /**
         * (const) Returns the value of the explicit attribute 'ConnectedTo'.
         * 
         * @return the value of the explicit attribute 'ConnectedTo'
         */
        virtual const Inverse_Set_IfcRelConnectsPorts_0_1 &getConnectedTo() const;
        /**
         * Test if the attribute 'ConnectedTo' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testConnectedTo() const;
        friend class ExpressDataSet;
        friend class IfcRelConnectsPortToElement;
        friend class IfcRelConnectsPorts;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPort(Step::Id id, Step::SPFData *args);
        virtual ~IfcPort();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPort &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::ObsPtr< IfcRelConnectsPortToElement > m_containedIn;
        /**
         */
        Inverse_Set_IfcRelConnectsPorts_0_1 m_connectedFrom;
        /**
         */
        Inverse_Set_IfcRelConnectsPorts_0_1 m_connectedTo;

    };

}

#endif // IFC2X3_IFCPORT_H
