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

#ifndef IFC2X3_IFCMATERIALLAYER_H
#define IFC2X3_IFCMATERIALLAYER_H
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
    class IfcMaterialLayerSet;

    /**
     * Generated class for the IfcMaterialLayer Entity.
     * 
     */
    class IFC2X3_EXPORT IfcMaterialLayer : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'Material'.
         * 
         */
        virtual IfcMaterial *getMaterial();
        /**
         * (const) Returns the value of the explicit attribute 'Material'.
         * 
         * @return the value of the explicit attribute 'Material'
         */
        virtual const IfcMaterial *getMaterial() const;
        /**
         * Sets the value of the explicit attribute 'Material'.
         * 
         * @param value
         */
        virtual void setMaterial(const Step::RefPtr< IfcMaterial > &value);
        /**
         * unset the attribute 'Material'.
         * 
         */
        virtual void unsetMaterial();
        /**
         * Test if the attribute 'Material' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMaterial() const;
        /**
         * Gets the value of the explicit attribute 'LayerThickness'.
         * 
         */
        virtual IfcPositiveLengthMeasure getLayerThickness();
        /**
         * (const) Returns the value of the explicit attribute 'LayerThickness'.
         * 
         * @return the value of the explicit attribute 'LayerThickness'
         */
        virtual const IfcPositiveLengthMeasure getLayerThickness() const;
        /**
         * Sets the value of the explicit attribute 'LayerThickness'.
         * 
         * @param value
         */
        virtual void setLayerThickness(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'LayerThickness'.
         * 
         */
        virtual void unsetLayerThickness();
        /**
         * Test if the attribute 'LayerThickness' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLayerThickness() const;
        /**
         * Gets the value of the explicit attribute 'IsVentilated'.
         * 
         */
        virtual IfcLogical getIsVentilated();
        /**
         * (const) Returns the value of the explicit attribute 'IsVentilated'.
         * 
         * @return the value of the explicit attribute 'IsVentilated'
         */
        virtual const IfcLogical getIsVentilated() const;
        /**
         * Sets the value of the explicit attribute 'IsVentilated'.
         * 
         * @param value
         */
        virtual void setIsVentilated(IfcLogical value);
        /**
         * unset the attribute 'IsVentilated'.
         * 
         */
        virtual void unsetIsVentilated();
        /**
         * Test if the attribute 'IsVentilated' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIsVentilated() const;
        /**
         * Gets the value of the inverse attribute 'ToMaterialLayerSet'.
         * 
         */
        IfcMaterialLayerSet *getToMaterialLayerSet();
        /**
         * (const) Returns the value of the explicit attribute 'ToMaterialLayerSet'.
         * 
         * @return the value of the explicit attribute 'ToMaterialLayerSet'
         */
        virtual const IfcMaterialLayerSet *getToMaterialLayerSet() const;
        /**
         * Test if the attribute 'ToMaterialLayerSet' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testToMaterialLayerSet() const;
        friend class Inverted_IfcMaterialLayerSet_MaterialLayers_type;
        friend class IfcMaterialLayerSet;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcMaterialLayer(Step::Id id, Step::SPFData *args);
        virtual ~IfcMaterialLayer();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMaterialLayer &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcMaterial > m_material;
        /**
         */
        Step::Real m_layerThickness;
        /**
         */
        Step::Logical m_isVentilated;
        /**
         */
        Step::ObsPtr< IfcMaterialLayerSet > m_toMaterialLayerSet;

    };

}

#endif // IFC2X3_IFCMATERIALLAYER_H
