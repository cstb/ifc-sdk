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

#ifndef IFC2X3_IFCCARTESIANTRANSFORMATIONOPERATOR3D_H
#define IFC2X3_IFCCARTESIANTRANSFORMATIONOPERATOR3D_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcCartesianTransformationOperator.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcDirection;

    /**
     * Generated class for the IfcCartesianTransformationOperator3D Entity.
     * 
     */
    class IFC2X3_EXPORT IfcCartesianTransformationOperator3D : public IfcCartesianTransformationOperator {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        bool acceptVisitor(Step::BaseVisitor *visitor) override;
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        const std::string &type() const override;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        const Step::ClassType &getType() const override;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        bool isOfType(const Step::ClassType &t) const override;
        /**
         * Gets the value of the explicit attribute 'Axis3'.
         * 
         */
        virtual IfcDirection *getAxis3();
        /**
         * (const) Returns the value of the explicit attribute 'Axis3'.
         * 
         * @return the value of the explicit attribute 'Axis3'
         */
        virtual const IfcDirection *getAxis3() const;
        /**
         * Sets the value of the explicit attribute 'Axis3'.
         * 
         * @param value
         */
        virtual void setAxis3(const Step::RefPtr< IfcDirection > &value);
        /**
         * unset the attribute 'Axis3'.
         * 
         */
        virtual void unsetAxis3();
        /**
         * Test if the attribute 'Axis3' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testAxis3() const;
        /**
         * Gets the value of the derived attribute 'U'.
         * 
         */
        virtual List_IfcDirection_3_3 getU() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCartesianTransformationOperator3D(Step::Id id, Step::SPFData *args);
        ~IfcCartesianTransformationOperator3D() override;
        /**
         */
        bool init() override;
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCartesianTransformationOperator3D &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcDirection > m_axis3;

    };

}

#endif // IFC2X3_IFCCARTESIANTRANSFORMATIONOPERATOR3D_H
