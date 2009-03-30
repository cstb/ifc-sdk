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

#ifndef IFC2X3_IFCRELPROJECTSELEMENT_H
#define IFC2X3_IFCRELPROJECTSELEMENT_H
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
    class IfcFeatureElementAddition;

    /**
     * Generated class for the IfcRelProjectsElement Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcRelProjectsElement : public IfcRelConnects {
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
         * Gets the value of the explicit attribute 'RelatingElement'.
         * 
         */
        virtual IfcElement *getRelatingElement();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingElement'.
         * 
         * @return the value of the explicit attribute 'RelatingElement'
         */
        virtual const IfcElement *getRelatingElement() const;
        /**
         * Sets the value of the explicit attribute 'RelatingElement'.
         * 
         * @param value
         */
        virtual void setRelatingElement(const Step::RefPtr< IfcElement > &value);
        /**
         * unset the attribute 'RelatingElement'.
         * 
         */
        virtual void unsetRelatingElement();
        /**
         * Test if the attribute 'RelatingElement' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatingElement() const;
        /**
         * Gets the value of the explicit attribute 'RelatedFeatureElement'.
         * 
         */
        virtual IfcFeatureElementAddition *getRelatedFeatureElement();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedFeatureElement'.
         * 
         * @return the value of the explicit attribute 'RelatedFeatureElement'
         */
        virtual const IfcFeatureElementAddition *getRelatedFeatureElement() const;
        /**
         * Sets the value of the explicit attribute 'RelatedFeatureElement'.
         * 
         * @param value
         */
        virtual void setRelatedFeatureElement(const Step::RefPtr< IfcFeatureElementAddition > &value);
        /**
         * unset the attribute 'RelatedFeatureElement'.
         * 
         */
        virtual void unsetRelatedFeatureElement();
        /**
         * Test if the attribute 'RelatedFeatureElement' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatedFeatureElement() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelProjectsElement(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelProjectsElement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelProjectsElement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcElement > m_relatingElement;
        /**
         */
        Step::RefPtr< IfcFeatureElementAddition > m_relatedFeatureElement;

    };

}

#endif // IFC2X3_IFCRELPROJECTSELEMENT_H
