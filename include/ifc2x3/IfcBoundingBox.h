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

#ifndef IFC2X3_IFCBOUNDINGBOX_H
#define IFC2X3_IFCBOUNDINGBOX_H
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
    class IfcCartesianPoint;

    /**
     */
    class IFC2X3_DLL_DEF IfcBoundingBox : public IfcGeometricRepresentationItem {
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
         * Gets the value of the explicit attribute 'Corner'.
         * 
         */
        virtual IfcCartesianPoint *getCorner();
        /**
         * (const) Returns the value of the explicit attribute 'Corner'.
         * 
         * @return the value of the explicit attribute 'Corner'
         */
        virtual const IfcCartesianPoint *getCorner() const;
        /**
         * Sets the value of the explicit attribute 'Corner'.
         * 
         * @param value
         */
        virtual void setCorner(const Step::RefPtr< IfcCartesianPoint > &value);
        /**
         * Gets the value of the explicit attribute 'XDim'.
         * 
         */
        virtual IfcPositiveLengthMeasure getXDim();
        /**
         * (const) Returns the value of the explicit attribute 'XDim'.
         * 
         * @return the value of the explicit attribute 'XDim'
         */
        virtual const IfcPositiveLengthMeasure getXDim() const;
        /**
         * Sets the value of the explicit attribute 'XDim'.
         * 
         * @param value
         */
        virtual void setXDim(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'YDim'.
         * 
         */
        virtual IfcPositiveLengthMeasure getYDim();
        /**
         * (const) Returns the value of the explicit attribute 'YDim'.
         * 
         * @return the value of the explicit attribute 'YDim'
         */
        virtual const IfcPositiveLengthMeasure getYDim() const;
        /**
         * Sets the value of the explicit attribute 'YDim'.
         * 
         * @param value
         */
        virtual void setYDim(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'ZDim'.
         * 
         */
        virtual IfcPositiveLengthMeasure getZDim();
        /**
         * (const) Returns the value of the explicit attribute 'ZDim'.
         * 
         * @return the value of the explicit attribute 'ZDim'
         */
        virtual const IfcPositiveLengthMeasure getZDim() const;
        /**
         * Sets the value of the explicit attribute 'ZDim'.
         * 
         * @param value
         */
        virtual void setZDim(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the derived attribute 'Dim'.
         * 
         */
        virtual IfcDimensionCount getDim() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcBoundingBox(Step::Id id, Step::SPFData *args);
        virtual ~IfcBoundingBox();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcBoundingBox &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcCartesianPoint > m_corner;
        /**
         */
        Step::Real m_xDim;
        /**
         */
        Step::Real m_yDim;
        /**
         */
        Step::Real m_zDim;

    };

}

#endif // IFC2X3_IFCBOUNDINGBOX_H
