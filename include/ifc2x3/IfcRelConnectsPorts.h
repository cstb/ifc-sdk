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

#ifndef IFC2X3_IFCRELCONNECTSPORTS_H
#define IFC2X3_IFCRELCONNECTSPORTS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcRelConnects.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcElement;
    class IfcPort;

    /**
     * Generated class for the IfcRelConnectsPorts Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcRelConnectsPorts : public IfcRelConnects {
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
         * Gets the value of the explicit attribute 'RelatingPort'.
         * 
         */
        virtual IfcPort *getRelatingPort();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingPort'.
         * 
         * @return the value of the explicit attribute 'RelatingPort'
         */
        virtual const IfcPort *getRelatingPort() const;
        /**
         * Sets the value of the explicit attribute 'RelatingPort'.
         * 
         * @param value
         */
        virtual void setRelatingPort(const Step::RefPtr< IfcPort > &value);
        /**
         * unset the attribute 'RelatingPort'.
         * 
         */
        virtual void unsetRelatingPort();
        /**
         * Test if the attribute 'RelatingPort' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatingPort() const;
        /**
         * Gets the value of the explicit attribute 'RelatedPort'.
         * 
         */
        virtual IfcPort *getRelatedPort();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedPort'.
         * 
         * @return the value of the explicit attribute 'RelatedPort'
         */
        virtual const IfcPort *getRelatedPort() const;
        /**
         * Sets the value of the explicit attribute 'RelatedPort'.
         * 
         * @param value
         */
        virtual void setRelatedPort(const Step::RefPtr< IfcPort > &value);
        /**
         * unset the attribute 'RelatedPort'.
         * 
         */
        virtual void unsetRelatedPort();
        /**
         * Test if the attribute 'RelatedPort' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatedPort() const;
        /**
         * Gets the value of the explicit attribute 'RealizingElement'.
         * 
         */
        virtual IfcElement *getRealizingElement();
        /**
         * (const) Returns the value of the explicit attribute 'RealizingElement'.
         * 
         * @return the value of the explicit attribute 'RealizingElement'
         */
        virtual const IfcElement *getRealizingElement() const;
        /**
         * Sets the value of the explicit attribute 'RealizingElement'.
         * 
         * @param value
         */
        virtual void setRealizingElement(const Step::RefPtr< IfcElement > &value);
        /**
         * unset the attribute 'RealizingElement'.
         * 
         */
        virtual void unsetRealizingElement();
        /**
         * Test if the attribute 'RealizingElement' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRealizingElement() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelConnectsPorts(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelConnectsPorts();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelConnectsPorts &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcPort > m_relatingPort;
        /**
         */
        Step::RefPtr< IfcPort > m_relatedPort;
        /**
         */
        Step::RefPtr< IfcElement > m_realizingElement;

    };

}

#endif // IFC2X3_IFCRELCONNECTSPORTS_H
