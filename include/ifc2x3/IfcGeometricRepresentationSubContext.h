// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

#ifndef IFC2X3_IFCGEOMETRICREPRESENTATIONSUBCONTEXT_H
#define IFC2X3_IFCGEOMETRICREPRESENTATIONSUBCONTEXT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcGeometricRepresentationContext.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcGeometricRepresentationSubContext Entity.
     * 
     */
    class IFC2X3_EXPORT IfcGeometricRepresentationSubContext : public IfcGeometricRepresentationContext {
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
         * unset the attribute 'ParentContext'.
         * 
         */
        virtual void unsetParentContext();
        /**
         * Test if the attribute 'ParentContext' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testParentContext() const;
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
         * unset the attribute 'TargetScale'.
         * 
         */
        virtual void unsetTargetScale();
        /**
         * Test if the attribute 'TargetScale' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTargetScale() const;
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
         * unset the attribute 'TargetView'.
         * 
         */
        virtual void unsetTargetView();
        /**
         * Test if the attribute 'TargetView' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTargetView() const;
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
         * unset the attribute 'UserDefinedTargetView'.
         * 
         */
        virtual void unsetUserDefinedTargetView();
        /**
         * Test if the attribute 'UserDefinedTargetView' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUserDefinedTargetView() const;
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
