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

#ifndef IFC2X3_IFCRELVOIDSELEMENT_H
#define IFC2X3_IFCRELVOIDSELEMENT_H
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
    class IfcFeatureElementSubtraction;

    /**
     */
    class IFC2X3_DLL_DEF IfcRelVoidsElement : public IfcRelConnects {
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
         * Gets the value of the explicit attribute 'RelatingBuildingElement'.
         * 
         */
        virtual IfcElement *getRelatingBuildingElement();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingBuildingElement'.
         * 
         * @return the value of the explicit attribute 'RelatingBuildingElement'
         */
        virtual const IfcElement *getRelatingBuildingElement() const;
        /**
         * Sets the value of the explicit attribute 'RelatingBuildingElement'.
         * 
         * @param value
         */
        virtual void setRelatingBuildingElement(const Step::RefPtr< IfcElement > &value);
        /**
         * Gets the value of the explicit attribute 'RelatedOpeningElement'.
         * 
         */
        virtual IfcFeatureElementSubtraction *getRelatedOpeningElement();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedOpeningElement'.
         * 
         * @return the value of the explicit attribute 'RelatedOpeningElement'
         */
        virtual const IfcFeatureElementSubtraction *getRelatedOpeningElement() const;
        /**
         * Sets the value of the explicit attribute 'RelatedOpeningElement'.
         * 
         * @param value
         */
        virtual void setRelatedOpeningElement(const Step::RefPtr< IfcFeatureElementSubtraction > &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelVoidsElement(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelVoidsElement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelVoidsElement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcElement > m_relatingBuildingElement;
        /**
         */
        Step::RefPtr< IfcFeatureElementSubtraction > m_relatedOpeningElement;

    };

}

#endif // IFC2X3_IFCRELVOIDSELEMENT_H
