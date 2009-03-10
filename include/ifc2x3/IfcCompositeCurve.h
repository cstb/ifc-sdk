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

#ifndef IFC2X3_IFCCOMPOSITECURVE_H
#define IFC2X3_IFCCOMPOSITECURVE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <stdexcept>
#include <Step/Referenced.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcBoundedCurve.h"

namespace ifc2x3 {

    class IfcCompositeCurve;
    class IfcCompositeCurveSegment;

    /**
     */
    class Inverted_IfcCompositeCurve_Segments_type : public List_IfcCompositeCurveSegment_1_n {
    public:
        /**
         */
        typedef List_IfcCompositeCurveSegment_1_n::iterator iterator;

        /**
         */
        IfcCompositeCurve *mOwner;
        /**
         */
        Inverted_IfcCompositeCurve_Segments_type();
        /**
         * @param owner
         */
        void setOwner(IfcCompositeCurve *owner);
        /**
         * @param value
         */
        virtual void push_back(const Step::RefPtr< IfcCompositeCurveSegment > &value) throw(std::out_of_range);
        /**
         * @param value
         */
        virtual iterator erase(const Step::RefPtr< IfcCompositeCurveSegment > &value);

    };

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcCompositeCurve : public IfcBoundedCurve {
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
         * Gets the value of the explicit attribute 'Segments'.
         * 
         */
        virtual List_IfcCompositeCurveSegment_1_n &getSegments();
        /**
         * (const) Returns the value of the explicit attribute 'Segments'.
         * 
         * @return the value of the explicit attribute 'Segments'
         */
        virtual const List_IfcCompositeCurveSegment_1_n &getSegments() const;
        /**
         * Gets the value of the explicit attribute 'SelfIntersect'.
         * 
         */
        virtual Step::Logical getSelfIntersect();
        /**
         * (const) Returns the value of the explicit attribute 'SelfIntersect'.
         * 
         * @return the value of the explicit attribute 'SelfIntersect'
         */
        virtual const Step::Logical getSelfIntersect() const;
        /**
         * Sets the value of the explicit attribute 'SelfIntersect'.
         * 
         * @param value
         */
        virtual void setSelfIntersect(Step::Logical value);
        /**
         * Gets the value of the derived attribute 'NSegments'.
         * 
         */
        virtual Step::Integer getNSegments() const;
        /**
         * Gets the value of the derived attribute 'ClosedCurve'.
         * 
         */
        virtual Step::Logical getClosedCurve() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCompositeCurve(Step::Id id, Step::SPFData *args);
        virtual ~IfcCompositeCurve();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCompositeCurve &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverted_IfcCompositeCurve_Segments_type m_segments;
        /**
         */
        Step::Logical m_selfIntersect;

    };

}

#endif // IFC2X3_IFCCOMPOSITECURVE_H
