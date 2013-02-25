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

#ifndef IFC2X3_IFCSTRUCTURALLOADSINGLEFORCE_H
#define IFC2X3_IFCSTRUCTURALLOADSINGLEFORCE_H
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
     * Generated class for the IfcStructuralLoadSingleForce Entity.
     * 
     */
    class IFC2X3_EXPORT IfcStructuralLoadSingleForce : public IfcStructuralLoadStatic {
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
         * Gets the value of the explicit attribute 'ForceX'.
         * 
         */
        virtual IfcForceMeasure getForceX();
        /**
         * (const) Returns the value of the explicit attribute 'ForceX'.
         * 
         * @return the value of the explicit attribute 'ForceX'
         */
        virtual const IfcForceMeasure getForceX() const;
        /**
         * Sets the value of the explicit attribute 'ForceX'.
         * 
         * @param value
         */
        virtual void setForceX(IfcForceMeasure value);
        /**
         * unset the attribute 'ForceX'.
         * 
         */
        virtual void unsetForceX();
        /**
         * Test if the attribute 'ForceX' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testForceX() const;
        /**
         * Gets the value of the explicit attribute 'ForceY'.
         * 
         */
        virtual IfcForceMeasure getForceY();
        /**
         * (const) Returns the value of the explicit attribute 'ForceY'.
         * 
         * @return the value of the explicit attribute 'ForceY'
         */
        virtual const IfcForceMeasure getForceY() const;
        /**
         * Sets the value of the explicit attribute 'ForceY'.
         * 
         * @param value
         */
        virtual void setForceY(IfcForceMeasure value);
        /**
         * unset the attribute 'ForceY'.
         * 
         */
        virtual void unsetForceY();
        /**
         * Test if the attribute 'ForceY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testForceY() const;
        /**
         * Gets the value of the explicit attribute 'ForceZ'.
         * 
         */
        virtual IfcForceMeasure getForceZ();
        /**
         * (const) Returns the value of the explicit attribute 'ForceZ'.
         * 
         * @return the value of the explicit attribute 'ForceZ'
         */
        virtual const IfcForceMeasure getForceZ() const;
        /**
         * Sets the value of the explicit attribute 'ForceZ'.
         * 
         * @param value
         */
        virtual void setForceZ(IfcForceMeasure value);
        /**
         * unset the attribute 'ForceZ'.
         * 
         */
        virtual void unsetForceZ();
        /**
         * Test if the attribute 'ForceZ' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testForceZ() const;
        /**
         * Gets the value of the explicit attribute 'MomentX'.
         * 
         */
        virtual IfcTorqueMeasure getMomentX();
        /**
         * (const) Returns the value of the explicit attribute 'MomentX'.
         * 
         * @return the value of the explicit attribute 'MomentX'
         */
        virtual const IfcTorqueMeasure getMomentX() const;
        /**
         * Sets the value of the explicit attribute 'MomentX'.
         * 
         * @param value
         */
        virtual void setMomentX(IfcTorqueMeasure value);
        /**
         * unset the attribute 'MomentX'.
         * 
         */
        virtual void unsetMomentX();
        /**
         * Test if the attribute 'MomentX' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMomentX() const;
        /**
         * Gets the value of the explicit attribute 'MomentY'.
         * 
         */
        virtual IfcTorqueMeasure getMomentY();
        /**
         * (const) Returns the value of the explicit attribute 'MomentY'.
         * 
         * @return the value of the explicit attribute 'MomentY'
         */
        virtual const IfcTorqueMeasure getMomentY() const;
        /**
         * Sets the value of the explicit attribute 'MomentY'.
         * 
         * @param value
         */
        virtual void setMomentY(IfcTorqueMeasure value);
        /**
         * unset the attribute 'MomentY'.
         * 
         */
        virtual void unsetMomentY();
        /**
         * Test if the attribute 'MomentY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMomentY() const;
        /**
         * Gets the value of the explicit attribute 'MomentZ'.
         * 
         */
        virtual IfcTorqueMeasure getMomentZ();
        /**
         * (const) Returns the value of the explicit attribute 'MomentZ'.
         * 
         * @return the value of the explicit attribute 'MomentZ'
         */
        virtual const IfcTorqueMeasure getMomentZ() const;
        /**
         * Sets the value of the explicit attribute 'MomentZ'.
         * 
         * @param value
         */
        virtual void setMomentZ(IfcTorqueMeasure value);
        /**
         * unset the attribute 'MomentZ'.
         * 
         */
        virtual void unsetMomentZ();
        /**
         * Test if the attribute 'MomentZ' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMomentZ() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralLoadSingleForce(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralLoadSingleForce();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralLoadSingleForce &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_forceX;
        /**
         */
        Step::Real m_forceY;
        /**
         */
        Step::Real m_forceZ;
        /**
         */
        Step::Real m_momentX;
        /**
         */
        Step::Real m_momentY;
        /**
         */
        Step::Real m_momentZ;

    };

}

#endif // IFC2X3_IFCSTRUCTURALLOADSINGLEFORCE_H
