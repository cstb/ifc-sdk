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

#ifndef IFC2X3_IFCSTRUCTURALLOADLINEARFORCE_H
#define IFC2X3_IFCSTRUCTURALLOADLINEARFORCE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcStructuralLoadStatic.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcStructuralLoadLinearForce Entity.
     * 
     */
    class IFC2X3_EXPORT IfcStructuralLoadLinearForce : public IfcStructuralLoadStatic {
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
         * Gets the value of the explicit attribute 'LinearForceX'.
         * 
         */
        virtual IfcLinearForceMeasure getLinearForceX();
        /**
         * (const) Returns the value of the explicit attribute 'LinearForceX'.
         * 
         * @return the value of the explicit attribute 'LinearForceX'
         */
        virtual const IfcLinearForceMeasure getLinearForceX() const;
        /**
         * Sets the value of the explicit attribute 'LinearForceX'.
         * 
         * @param value
         */
        virtual void setLinearForceX(IfcLinearForceMeasure value);
        /**
         * unset the attribute 'LinearForceX'.
         * 
         */
        virtual void unsetLinearForceX();
        /**
         * Test if the attribute 'LinearForceX' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLinearForceX() const;
        /**
         * Gets the value of the explicit attribute 'LinearForceY'.
         * 
         */
        virtual IfcLinearForceMeasure getLinearForceY();
        /**
         * (const) Returns the value of the explicit attribute 'LinearForceY'.
         * 
         * @return the value of the explicit attribute 'LinearForceY'
         */
        virtual const IfcLinearForceMeasure getLinearForceY() const;
        /**
         * Sets the value of the explicit attribute 'LinearForceY'.
         * 
         * @param value
         */
        virtual void setLinearForceY(IfcLinearForceMeasure value);
        /**
         * unset the attribute 'LinearForceY'.
         * 
         */
        virtual void unsetLinearForceY();
        /**
         * Test if the attribute 'LinearForceY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLinearForceY() const;
        /**
         * Gets the value of the explicit attribute 'LinearForceZ'.
         * 
         */
        virtual IfcLinearForceMeasure getLinearForceZ();
        /**
         * (const) Returns the value of the explicit attribute 'LinearForceZ'.
         * 
         * @return the value of the explicit attribute 'LinearForceZ'
         */
        virtual const IfcLinearForceMeasure getLinearForceZ() const;
        /**
         * Sets the value of the explicit attribute 'LinearForceZ'.
         * 
         * @param value
         */
        virtual void setLinearForceZ(IfcLinearForceMeasure value);
        /**
         * unset the attribute 'LinearForceZ'.
         * 
         */
        virtual void unsetLinearForceZ();
        /**
         * Test if the attribute 'LinearForceZ' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLinearForceZ() const;
        /**
         * Gets the value of the explicit attribute 'LinearMomentX'.
         * 
         */
        virtual IfcLinearMomentMeasure getLinearMomentX();
        /**
         * (const) Returns the value of the explicit attribute 'LinearMomentX'.
         * 
         * @return the value of the explicit attribute 'LinearMomentX'
         */
        virtual const IfcLinearMomentMeasure getLinearMomentX() const;
        /**
         * Sets the value of the explicit attribute 'LinearMomentX'.
         * 
         * @param value
         */
        virtual void setLinearMomentX(IfcLinearMomentMeasure value);
        /**
         * unset the attribute 'LinearMomentX'.
         * 
         */
        virtual void unsetLinearMomentX();
        /**
         * Test if the attribute 'LinearMomentX' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLinearMomentX() const;
        /**
         * Gets the value of the explicit attribute 'LinearMomentY'.
         * 
         */
        virtual IfcLinearMomentMeasure getLinearMomentY();
        /**
         * (const) Returns the value of the explicit attribute 'LinearMomentY'.
         * 
         * @return the value of the explicit attribute 'LinearMomentY'
         */
        virtual const IfcLinearMomentMeasure getLinearMomentY() const;
        /**
         * Sets the value of the explicit attribute 'LinearMomentY'.
         * 
         * @param value
         */
        virtual void setLinearMomentY(IfcLinearMomentMeasure value);
        /**
         * unset the attribute 'LinearMomentY'.
         * 
         */
        virtual void unsetLinearMomentY();
        /**
         * Test if the attribute 'LinearMomentY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLinearMomentY() const;
        /**
         * Gets the value of the explicit attribute 'LinearMomentZ'.
         * 
         */
        virtual IfcLinearMomentMeasure getLinearMomentZ();
        /**
         * (const) Returns the value of the explicit attribute 'LinearMomentZ'.
         * 
         * @return the value of the explicit attribute 'LinearMomentZ'
         */
        virtual const IfcLinearMomentMeasure getLinearMomentZ() const;
        /**
         * Sets the value of the explicit attribute 'LinearMomentZ'.
         * 
         * @param value
         */
        virtual void setLinearMomentZ(IfcLinearMomentMeasure value);
        /**
         * unset the attribute 'LinearMomentZ'.
         * 
         */
        virtual void unsetLinearMomentZ();
        /**
         * Test if the attribute 'LinearMomentZ' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLinearMomentZ() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralLoadLinearForce(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralLoadLinearForce();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralLoadLinearForce &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_linearForceX;
        /**
         */
        Step::Real m_linearForceY;
        /**
         */
        Step::Real m_linearForceZ;
        /**
         */
        Step::Real m_linearMomentX;
        /**
         */
        Step::Real m_linearMomentY;
        /**
         */
        Step::Real m_linearMomentZ;

    };

}

#endif // IFC2X3_IFCSTRUCTURALLOADLINEARFORCE_H
