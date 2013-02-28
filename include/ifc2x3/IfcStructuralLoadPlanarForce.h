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

#ifndef IFC2X3_IFCSTRUCTURALLOADPLANARFORCE_H
#define IFC2X3_IFCSTRUCTURALLOADPLANARFORCE_H
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
     * Generated class for the IfcStructuralLoadPlanarForce Entity.
     * 
     */
    class IFC2X3_EXPORT IfcStructuralLoadPlanarForce : public IfcStructuralLoadStatic {
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
         * Gets the value of the explicit attribute 'PlanarForceX'.
         * 
         */
        virtual IfcPlanarForceMeasure getPlanarForceX();
        /**
         * (const) Returns the value of the explicit attribute 'PlanarForceX'.
         * 
         * @return the value of the explicit attribute 'PlanarForceX'
         */
        virtual const IfcPlanarForceMeasure getPlanarForceX() const;
        /**
         * Sets the value of the explicit attribute 'PlanarForceX'.
         * 
         * @param value
         */
        virtual void setPlanarForceX(IfcPlanarForceMeasure value);
        /**
         * unset the attribute 'PlanarForceX'.
         * 
         */
        virtual void unsetPlanarForceX();
        /**
         * Test if the attribute 'PlanarForceX' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPlanarForceX() const;
        /**
         * Gets the value of the explicit attribute 'PlanarForceY'.
         * 
         */
        virtual IfcPlanarForceMeasure getPlanarForceY();
        /**
         * (const) Returns the value of the explicit attribute 'PlanarForceY'.
         * 
         * @return the value of the explicit attribute 'PlanarForceY'
         */
        virtual const IfcPlanarForceMeasure getPlanarForceY() const;
        /**
         * Sets the value of the explicit attribute 'PlanarForceY'.
         * 
         * @param value
         */
        virtual void setPlanarForceY(IfcPlanarForceMeasure value);
        /**
         * unset the attribute 'PlanarForceY'.
         * 
         */
        virtual void unsetPlanarForceY();
        /**
         * Test if the attribute 'PlanarForceY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPlanarForceY() const;
        /**
         * Gets the value of the explicit attribute 'PlanarForceZ'.
         * 
         */
        virtual IfcPlanarForceMeasure getPlanarForceZ();
        /**
         * (const) Returns the value of the explicit attribute 'PlanarForceZ'.
         * 
         * @return the value of the explicit attribute 'PlanarForceZ'
         */
        virtual const IfcPlanarForceMeasure getPlanarForceZ() const;
        /**
         * Sets the value of the explicit attribute 'PlanarForceZ'.
         * 
         * @param value
         */
        virtual void setPlanarForceZ(IfcPlanarForceMeasure value);
        /**
         * unset the attribute 'PlanarForceZ'.
         * 
         */
        virtual void unsetPlanarForceZ();
        /**
         * Test if the attribute 'PlanarForceZ' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPlanarForceZ() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralLoadPlanarForce(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralLoadPlanarForce();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralLoadPlanarForce &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_planarForceX;
        /**
         */
        Step::Real m_planarForceY;
        /**
         */
        Step::Real m_planarForceZ;

    };

}

#endif // IFC2X3_IFCSTRUCTURALLOADPLANARFORCE_H
