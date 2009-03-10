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
 *     Copyright (C) 2008 CSTB                                             *
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

#ifndef IFC2X3_IFCRELCONNECTSPORTTOELEMENT_H
#define IFC2X3_IFCRELCONNECTSPORTTOELEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>
#include "ifc2x3/IfcRelConnects.h"

namespace ifc2x3 {

    class CopyOp;
    class IfcElement;
    class IfcPort;

    /**
     */
    class IFC2X3_DLL_DEF IfcRelConnectsPortToElement : public IfcRelConnects {
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
         * Gets the value of the explicit attribute 'RelatedElement'.
         * 
         */
        virtual IfcElement *getRelatedElement();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedElement'.
         * 
         * @return the value of the explicit attribute 'RelatedElement'
         */
        virtual const IfcElement *getRelatedElement() const;
        /**
         * Sets the value of the explicit attribute 'RelatedElement'.
         * 
         * @param value
         */
        virtual void setRelatedElement(const Step::RefPtr< IfcElement > &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelConnectsPortToElement(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelConnectsPortToElement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelConnectsPortToElement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcPort > m_relatingPort;
        /**
         */
        Step::RefPtr< IfcElement > m_relatedElement;

    };

}

#endif // IFC2X3_IFCRELCONNECTSPORTTOELEMENT_H
