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

#ifndef IFC2X3_IFCRELFILLSELEMENT_H
#define IFC2X3_IFCRELFILLSELEMENT_H
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
    class IfcOpeningElement;

    /**
     * Generated class for the IfcRelFillsElement Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcRelFillsElement : public IfcRelConnects {
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
         * Gets the value of the explicit attribute 'RelatingOpeningElement'.
         * 
         */
        virtual IfcOpeningElement *getRelatingOpeningElement();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingOpeningElement'.
         * 
         * @return the value of the explicit attribute 'RelatingOpeningElement'
         */
        virtual const IfcOpeningElement *getRelatingOpeningElement() const;
        /**
         * Sets the value of the explicit attribute 'RelatingOpeningElement'.
         * 
         * @param value
         */
        virtual void setRelatingOpeningElement(const Step::RefPtr< IfcOpeningElement > &value);
        /**
         * unset the attribute 'RelatingOpeningElement'.
         * 
         */
        virtual void unsetRelatingOpeningElement();
        /**
         * Test if the attribute 'RelatingOpeningElement' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatingOpeningElement() const;
        /**
         * Gets the value of the explicit attribute 'RelatedBuildingElement'.
         * 
         */
        virtual IfcElement *getRelatedBuildingElement();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedBuildingElement'.
         * 
         * @return the value of the explicit attribute 'RelatedBuildingElement'
         */
        virtual const IfcElement *getRelatedBuildingElement() const;
        /**
         * Sets the value of the explicit attribute 'RelatedBuildingElement'.
         * 
         * @param value
         */
        virtual void setRelatedBuildingElement(const Step::RefPtr< IfcElement > &value);
        /**
         * unset the attribute 'RelatedBuildingElement'.
         * 
         */
        virtual void unsetRelatedBuildingElement();
        /**
         * Test if the attribute 'RelatedBuildingElement' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatedBuildingElement() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelFillsElement(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelFillsElement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelFillsElement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcOpeningElement > m_relatingOpeningElement;
        /**
         */
        Step::RefPtr< IfcElement > m_relatedBuildingElement;

    };

}

#endif // IFC2X3_IFCRELFILLSELEMENT_H
