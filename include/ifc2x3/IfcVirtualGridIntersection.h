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

#ifndef IFC2X3_IFCVIRTUALGRIDINTERSECTION_H
#define IFC2X3_IFCVIRTUALGRIDINTERSECTION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <stdexcept>
#include <Step/Referenced.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>

namespace ifc2x3 {

    class IfcGridAxis;
    class IfcVirtualGridIntersection;

    /**
     */
    class Inverted_IfcVirtualGridIntersection_IntersectingAxes_type : public List_IfcGridAxis_2_2 {
    public:
        /**
         */
        typedef List_IfcGridAxis_2_2::iterator iterator;

        /**
         */
        IfcVirtualGridIntersection *mOwner;
        /**
         */
        Inverted_IfcVirtualGridIntersection_IntersectingAxes_type();
        /**
         * @param owner
         */
        void setOwner(IfcVirtualGridIntersection *owner);
        /**
         * @param value
         */
        virtual void push_back(const Step::RefPtr< IfcGridAxis > &value) throw(std::out_of_range);
        /**
         * @param value
         */
        virtual iterator erase(const Step::RefPtr< IfcGridAxis > &value);

    };

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcVirtualGridIntersection : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'IntersectingAxes'.
         * 
         */
        virtual List_IfcGridAxis_2_2 &getIntersectingAxes();
        /**
         * (const) Returns the value of the explicit attribute 'IntersectingAxes'.
         * 
         * @return the value of the explicit attribute 'IntersectingAxes'
         */
        virtual const List_IfcGridAxis_2_2 &getIntersectingAxes() const;
        /**
         * Gets the value of the explicit attribute 'OffsetDistances'.
         * 
         */
        virtual List_IfcLengthMeasure_2_3 &getOffsetDistances();
        /**
         * (const) Returns the value of the explicit attribute 'OffsetDistances'.
         * 
         * @return the value of the explicit attribute 'OffsetDistances'
         */
        virtual const List_IfcLengthMeasure_2_3 &getOffsetDistances() const;
        /**
         * Sets the value of the explicit attribute 'OffsetDistances'.
         * 
         * @param value
         */
        virtual void setOffsetDistances(const List_IfcLengthMeasure_2_3 &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcVirtualGridIntersection(Step::Id id, Step::SPFData *args);
        virtual ~IfcVirtualGridIntersection();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcVirtualGridIntersection &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverted_IfcVirtualGridIntersection_IntersectingAxes_type m_intersectingAxes;
        /**
         */
        List_IfcLengthMeasure_2_3 m_offsetDistances;

    };

}

#endif // IFC2X3_IFCVIRTUALGRIDINTERSECTION_H
