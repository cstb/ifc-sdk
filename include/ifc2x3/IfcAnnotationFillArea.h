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

#ifndef IFC2X3_IFCANNOTATIONFILLAREA_H
#define IFC2X3_IFCANNOTATIONFILLAREA_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCurve;

    /**
     */
    class IFC2X3_DLL_DEF IfcAnnotationFillArea : public IfcGeometricRepresentationItem {
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
         * Gets the value of the explicit attribute 'OuterBoundary'.
         * 
         */
        virtual IfcCurve *getOuterBoundary();
        /**
         * (const) Returns the value of the explicit attribute 'OuterBoundary'.
         * 
         * @return the value of the explicit attribute 'OuterBoundary'
         */
        virtual const IfcCurve *getOuterBoundary() const;
        /**
         * Sets the value of the explicit attribute 'OuterBoundary'.
         * 
         * @param value
         */
        virtual void setOuterBoundary(const Step::RefPtr< IfcCurve > &value);
        /**
         * Gets the value of the explicit attribute 'InnerBoundaries'.
         * 
         */
        virtual Set_IfcCurve_1_n &getInnerBoundaries();
        /**
         * (const) Returns the value of the explicit attribute 'InnerBoundaries'.
         * 
         * @return the value of the explicit attribute 'InnerBoundaries'
         */
        virtual const Set_IfcCurve_1_n &getInnerBoundaries() const;
        /**
         * Sets the value of the explicit attribute 'InnerBoundaries'.
         * 
         * @param value
         */
        virtual void setInnerBoundaries(const Set_IfcCurve_1_n &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcAnnotationFillArea(Step::Id id, Step::SPFData *args);
        virtual ~IfcAnnotationFillArea();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcAnnotationFillArea &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcCurve > m_outerBoundary;
        /**
         */
        Set_IfcCurve_1_n m_innerBoundaries;

    };

}

#endif // IFC2X3_IFCANNOTATIONFILLAREA_H
