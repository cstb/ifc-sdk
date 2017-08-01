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

#ifndef IFC2X3_IFCMATERIALCLASSIFICATIONRELATIONSHIP_H
#define IFC2X3_IFCMATERIALCLASSIFICATIONRELATIONSHIP_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcMaterial;

    /**
     * Generated class for the IfcMaterialClassificationRelationship Entity.
     * 
     */
    class IFC2X3_EXPORT IfcMaterialClassificationRelationship : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'MaterialClassifications'.
         * 
         */
        virtual Set_IfcClassificationNotationSelect_1_n &getMaterialClassifications();
        /**
         * (const) Returns the value of the explicit attribute 'MaterialClassifications'.
         * 
         * @return the value of the explicit attribute 'MaterialClassifications'
         */
        virtual const Set_IfcClassificationNotationSelect_1_n &getMaterialClassifications() const;
        /**
         * Sets the value of the explicit attribute 'MaterialClassifications'.
         * 
         * @param value
         */
        virtual void setMaterialClassifications(const Set_IfcClassificationNotationSelect_1_n &value);
        /**
         * unset the attribute 'MaterialClassifications'.
         * 
         */
        virtual void unsetMaterialClassifications();
        /**
         * Test if the attribute 'MaterialClassifications' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMaterialClassifications() const;
        /**
         * Gets the value of the explicit attribute 'ClassifiedMaterial'.
         * 
         */
        virtual IfcMaterial *getClassifiedMaterial();
        /**
         * (const) Returns the value of the explicit attribute 'ClassifiedMaterial'.
         * 
         * @return the value of the explicit attribute 'ClassifiedMaterial'
         */
        virtual const IfcMaterial *getClassifiedMaterial() const;
        /**
         * Sets the value of the explicit attribute 'ClassifiedMaterial'.
         * 
         * @param value
         */
        virtual void setClassifiedMaterial(const Step::RefPtr< IfcMaterial > &value);
        /**
         * unset the attribute 'ClassifiedMaterial'.
         * 
         */
        virtual void unsetClassifiedMaterial();
        /**
         * Test if the attribute 'ClassifiedMaterial' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testClassifiedMaterial() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcMaterialClassificationRelationship(Step::Id id, Step::SPFData *args);
        ~IfcMaterialClassificationRelationship() override;
        /**
         */
        bool init() override;
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMaterialClassificationRelationship &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Set_IfcClassificationNotationSelect_1_n m_materialClassifications;
        /**
         */
        Step::RefPtr< IfcMaterial > m_classifiedMaterial;

    };

}

#endif // IFC2X3_IFCMATERIALCLASSIFICATIONRELATIONSHIP_H
