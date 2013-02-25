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

#ifndef IFC2X3_IFCSURFACECURVESWEPTAREASOLID_H
#define IFC2X3_IFCSURFACECURVESWEPTAREASOLID_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcSweptAreaSolid.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcCurve;
    class IfcSurface;

    /**
     * Generated class for the IfcSurfaceCurveSweptAreaSolid Entity.
     * 
     */
    class IFC2X3_EXPORT IfcSurfaceCurveSweptAreaSolid : public IfcSweptAreaSolid {
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
         * Gets the value of the explicit attribute 'Directrix'.
         * 
         */
        virtual IfcCurve *getDirectrix();
        /**
         * (const) Returns the value of the explicit attribute 'Directrix'.
         * 
         * @return the value of the explicit attribute 'Directrix'
         */
        virtual const IfcCurve *getDirectrix() const;
        /**
         * Sets the value of the explicit attribute 'Directrix'.
         * 
         * @param value
         */
        virtual void setDirectrix(const Step::RefPtr< IfcCurve > &value);
        /**
         * unset the attribute 'Directrix'.
         * 
         */
        virtual void unsetDirectrix();
        /**
         * Test if the attribute 'Directrix' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDirectrix() const;
        /**
         * Gets the value of the explicit attribute 'StartParam'.
         * 
         */
        virtual IfcParameterValue getStartParam();
        /**
         * (const) Returns the value of the explicit attribute 'StartParam'.
         * 
         * @return the value of the explicit attribute 'StartParam'
         */
        virtual const IfcParameterValue getStartParam() const;
        /**
         * Sets the value of the explicit attribute 'StartParam'.
         * 
         * @param value
         */
        virtual void setStartParam(IfcParameterValue value);
        /**
         * unset the attribute 'StartParam'.
         * 
         */
        virtual void unsetStartParam();
        /**
         * Test if the attribute 'StartParam' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testStartParam() const;
        /**
         * Gets the value of the explicit attribute 'EndParam'.
         * 
         */
        virtual IfcParameterValue getEndParam();
        /**
         * (const) Returns the value of the explicit attribute 'EndParam'.
         * 
         * @return the value of the explicit attribute 'EndParam'
         */
        virtual const IfcParameterValue getEndParam() const;
        /**
         * Sets the value of the explicit attribute 'EndParam'.
         * 
         * @param value
         */
        virtual void setEndParam(IfcParameterValue value);
        /**
         * unset the attribute 'EndParam'.
         * 
         */
        virtual void unsetEndParam();
        /**
         * Test if the attribute 'EndParam' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testEndParam() const;
        /**
         * Gets the value of the explicit attribute 'ReferenceSurface'.
         * 
         */
        virtual IfcSurface *getReferenceSurface();
        /**
         * (const) Returns the value of the explicit attribute 'ReferenceSurface'.
         * 
         * @return the value of the explicit attribute 'ReferenceSurface'
         */
        virtual const IfcSurface *getReferenceSurface() const;
        /**
         * Sets the value of the explicit attribute 'ReferenceSurface'.
         * 
         * @param value
         */
        virtual void setReferenceSurface(const Step::RefPtr< IfcSurface > &value);
        /**
         * unset the attribute 'ReferenceSurface'.
         * 
         */
        virtual void unsetReferenceSurface();
        /**
         * Test if the attribute 'ReferenceSurface' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testReferenceSurface() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSurfaceCurveSweptAreaSolid(Step::Id id, Step::SPFData *args);
        virtual ~IfcSurfaceCurveSweptAreaSolid();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSurfaceCurveSweptAreaSolid &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcCurve > m_directrix;
        /**
         */
        Step::Real m_startParam;
        /**
         */
        Step::Real m_endParam;
        /**
         */
        Step::RefPtr< IfcSurface > m_referenceSurface;

    };

}

#endif // IFC2X3_IFCSURFACECURVESWEPTAREASOLID_H
