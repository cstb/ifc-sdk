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

#ifndef IFC2X3_IFCCHAMFEREDGEFEATURE_H
#define IFC2X3_IFCCHAMFEREDGEFEATURE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcEdgeFeature.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcChamferEdgeFeature : public IfcEdgeFeature {
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
         * Gets the value of the explicit attribute 'Width'.
         * 
         */
        virtual IfcPositiveLengthMeasure getWidth();
        /**
         * (const) Returns the value of the explicit attribute 'Width'.
         * 
         * @return the value of the explicit attribute 'Width'
         */
        virtual const IfcPositiveLengthMeasure getWidth() const;
        /**
         * Sets the value of the explicit attribute 'Width'.
         * 
         * @param value
         */
        virtual void setWidth(IfcPositiveLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'Height'.
         * 
         */
        virtual IfcPositiveLengthMeasure getHeight();
        /**
         * (const) Returns the value of the explicit attribute 'Height'.
         * 
         * @return the value of the explicit attribute 'Height'
         */
        virtual const IfcPositiveLengthMeasure getHeight() const;
        /**
         * Sets the value of the explicit attribute 'Height'.
         * 
         * @param value
         */
        virtual void setHeight(IfcPositiveLengthMeasure value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcChamferEdgeFeature(Step::Id id, Step::SPFData *args);
        virtual ~IfcChamferEdgeFeature();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcChamferEdgeFeature &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_width;
        /**
         */
        Step::Real m_height;

    };

}

#endif // IFC2X3_IFCCHAMFEREDGEFEATURE_H
