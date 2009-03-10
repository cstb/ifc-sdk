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

#ifndef IFC2X3_IFCFACEBOUND_H
#define IFC2X3_IFCFACEBOUND_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcTopologicalRepresentationItem.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcLoop;

    /**
     */
    class IFC2X3_DLL_DEF IfcFaceBound : public IfcTopologicalRepresentationItem {
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
         * Gets the value of the explicit attribute 'Bound'.
         * 
         */
        virtual IfcLoop *getBound();
        /**
         * (const) Returns the value of the explicit attribute 'Bound'.
         * 
         * @return the value of the explicit attribute 'Bound'
         */
        virtual const IfcLoop *getBound() const;
        /**
         * Sets the value of the explicit attribute 'Bound'.
         * 
         * @param value
         */
        virtual void setBound(const Step::RefPtr< IfcLoop > &value);
        /**
         * Gets the value of the explicit attribute 'Orientation'.
         * 
         */
        virtual Step::Boolean getOrientation();
        /**
         * (const) Returns the value of the explicit attribute 'Orientation'.
         * 
         * @return the value of the explicit attribute 'Orientation'
         */
        virtual const Step::Boolean getOrientation() const;
        /**
         * Sets the value of the explicit attribute 'Orientation'.
         * 
         * @param value
         */
        virtual void setOrientation(Step::Boolean value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcFaceBound(Step::Id id, Step::SPFData *args);
        virtual ~IfcFaceBound();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcFaceBound &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcLoop > m_bound;
        /**
         */
        Step::Boolean m_orientation;

    };

}

#endif // IFC2X3_IFCFACEBOUND_H
