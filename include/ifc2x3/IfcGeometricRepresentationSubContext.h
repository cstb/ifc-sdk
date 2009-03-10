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

#ifndef IFC2X3_IFCGEOMETRICREPRESENTATIONSUBCONTEXT_H
#define IFC2X3_IFCGEOMETRICREPRESENTATIONSUBCONTEXT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/String.h>
#include "ifc2x3/IfcGeometricRepresentationContext.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcGeometricRepresentationSubContext : public IfcGeometricRepresentationContext {
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
         * Gets the value of the explicit attribute 'ParentContext'.
         * 
         */
        virtual IfcGeometricRepresentationContext *getParentContext();
        /**
         * (const) Returns the value of the explicit attribute 'ParentContext'.
         * 
         * @return the value of the explicit attribute 'ParentContext'
         */
        virtual const IfcGeometricRepresentationContext *getParentContext() const;
        /**
         * Sets the value of the explicit attribute 'ParentContext'.
         * 
         * @param value
         */
        virtual void setParentContext(const Step::RefPtr< IfcGeometricRepresentationContext > &value);
        /**
         * Gets the value of the explicit attribute 'TargetScale'.
         * 
         */
        virtual IfcPositiveRatioMeasure getTargetScale();
        /**
         * (const) Returns the value of the explicit attribute 'TargetScale'.
         * 
         * @return the value of the explicit attribute 'TargetScale'
         */
        virtual const IfcPositiveRatioMeasure getTargetScale() const;
        /**
         * Sets the value of the explicit attribute 'TargetScale'.
         * 
         * @param value
         */
        virtual void setTargetScale(IfcPositiveRatioMeasure value);
        /**
         * Gets the value of the explicit attribute 'TargetView'.
         * 
         */
        virtual IfcGeometricProjectionEnum getTargetView();
        /**
         * (const) Returns the value of the explicit attribute 'TargetView'.
         * 
         * @return the value of the explicit attribute 'TargetView'
         */
        virtual const IfcGeometricProjectionEnum getTargetView() const;
        /**
         * Sets the value of the explicit attribute 'TargetView'.
         * 
         * @param value
         */
        virtual void setTargetView(IfcGeometricProjectionEnum value);
        /**
         * Gets the value of the explicit attribute 'UserDefinedTargetView'.
         * 
         */
        virtual IfcLabel getUserDefinedTargetView();
        /**
         * (const) Returns the value of the explicit attribute 'UserDefinedTargetView'.
         * 
         * @return the value of the explicit attribute 'UserDefinedTargetView'
         */
        virtual const IfcLabel getUserDefinedTargetView() const;
        /**
         * Sets the value of the explicit attribute 'UserDefinedTargetView'.
         * 
         * @param value
         */
        virtual void setUserDefinedTargetView(const IfcLabel &value);
        /**
         * Gets the value of the derived attribute redeclaration 'WorldCoordinateSystem'.
         * 
         */
        virtual IfcAxis2Placement *getWorldCoordinateSystem();
        /**
         * Gets the value of the derived attribute redeclaration 'CoordinateSpaceDimension'.
         * 
         */
        virtual IfcDimensionCount getCoordinateSpaceDimension();
        /**
         * Gets the value of the derived attribute redeclaration 'TrueNorth'.
         * 
         */
        virtual IfcDirection *getTrueNorth();
        /**
         * Gets the value of the derived attribute redeclaration 'Precision'.
         * 
         */
        virtual Step::Real getPrecision();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcGeometricRepresentationSubContext(Step::Id id, Step::SPFData *args);
        virtual ~IfcGeometricRepresentationSubContext();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcGeometricRepresentationSubContext &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcGeometricRepresentationContext > m_parentContext;
        /**
         */
        Step::Real m_targetScale;
        /**
         */
        IfcGeometricProjectionEnum m_targetView;
        /**
         */
        Step::String m_userDefinedTargetView;

    };

}

#endif // IFC2X3_IFCGEOMETRICREPRESENTATIONSUBCONTEXT_H
