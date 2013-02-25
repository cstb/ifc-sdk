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

#ifndef IFC2X3_IFCSECTIONEDSPINE_H
#define IFC2X3_IFCSECTIONEDSPINE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcCompositeCurve;

    /**
     * Generated class for the IfcSectionedSpine Entity.
     * 
     */
    class IFC2X3_EXPORT IfcSectionedSpine : public IfcGeometricRepresentationItem {
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
         * Gets the value of the explicit attribute 'SpineCurve'.
         * 
         */
        virtual IfcCompositeCurve *getSpineCurve();
        /**
         * (const) Returns the value of the explicit attribute 'SpineCurve'.
         * 
         * @return the value of the explicit attribute 'SpineCurve'
         */
        virtual const IfcCompositeCurve *getSpineCurve() const;
        /**
         * Sets the value of the explicit attribute 'SpineCurve'.
         * 
         * @param value
         */
        virtual void setSpineCurve(const Step::RefPtr< IfcCompositeCurve > &value);
        /**
         * unset the attribute 'SpineCurve'.
         * 
         */
        virtual void unsetSpineCurve();
        /**
         * Test if the attribute 'SpineCurve' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSpineCurve() const;
        /**
         * Gets the value of the explicit attribute 'CrossSections'.
         * 
         */
        virtual List_IfcProfileDef_2_n &getCrossSections();
        /**
         * (const) Returns the value of the explicit attribute 'CrossSections'.
         * 
         * @return the value of the explicit attribute 'CrossSections'
         */
        virtual const List_IfcProfileDef_2_n &getCrossSections() const;
        /**
         * Sets the value of the explicit attribute 'CrossSections'.
         * 
         * @param value
         */
        virtual void setCrossSections(const List_IfcProfileDef_2_n &value);
        /**
         * unset the attribute 'CrossSections'.
         * 
         */
        virtual void unsetCrossSections();
        /**
         * Test if the attribute 'CrossSections' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCrossSections() const;
        /**
         * Gets the value of the explicit attribute 'CrossSectionPositions'.
         * 
         */
        virtual List_IfcAxis2Placement3D_2_n &getCrossSectionPositions();
        /**
         * (const) Returns the value of the explicit attribute 'CrossSectionPositions'.
         * 
         * @return the value of the explicit attribute 'CrossSectionPositions'
         */
        virtual const List_IfcAxis2Placement3D_2_n &getCrossSectionPositions() const;
        /**
         * Sets the value of the explicit attribute 'CrossSectionPositions'.
         * 
         * @param value
         */
        virtual void setCrossSectionPositions(const List_IfcAxis2Placement3D_2_n &value);
        /**
         * unset the attribute 'CrossSectionPositions'.
         * 
         */
        virtual void unsetCrossSectionPositions();
        /**
         * Test if the attribute 'CrossSectionPositions' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCrossSectionPositions() const;
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
        IfcSectionedSpine(Step::Id id, Step::SPFData *args);
        virtual ~IfcSectionedSpine();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSectionedSpine &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcCompositeCurve > m_spineCurve;
        /**
         */
        List_IfcProfileDef_2_n m_crossSections;
        /**
         */
        List_IfcAxis2Placement3D_2_n m_crossSectionPositions;

    };

}

#endif // IFC2X3_IFCSECTIONEDSPINE_H
