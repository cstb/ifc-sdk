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

#ifndef IFC2X3_IFCMATERIALLAYERSETUSAGE_H
#define IFC2X3_IFCMATERIALLAYERSETUSAGE_H
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
    class IfcMaterialLayerSet;

    /**
     * Generated class for the IfcMaterialLayerSetUsage Entity.
     * 
     */
    class IFC2X3_EXPORT IfcMaterialLayerSetUsage : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'ForLayerSet'.
         * 
         */
        virtual IfcMaterialLayerSet *getForLayerSet();
        /**
         * (const) Returns the value of the explicit attribute 'ForLayerSet'.
         * 
         * @return the value of the explicit attribute 'ForLayerSet'
         */
        virtual const IfcMaterialLayerSet *getForLayerSet() const;
        /**
         * Sets the value of the explicit attribute 'ForLayerSet'.
         * 
         * @param value
         */
        virtual void setForLayerSet(const Step::RefPtr< IfcMaterialLayerSet > &value);
        /**
         * unset the attribute 'ForLayerSet'.
         * 
         */
        virtual void unsetForLayerSet();
        /**
         * Test if the attribute 'ForLayerSet' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testForLayerSet() const;
        /**
         * Gets the value of the explicit attribute 'LayerSetDirection'.
         * 
         */
        virtual IfcLayerSetDirectionEnum getLayerSetDirection();
        /**
         * (const) Returns the value of the explicit attribute 'LayerSetDirection'.
         * 
         * @return the value of the explicit attribute 'LayerSetDirection'
         */
        virtual const IfcLayerSetDirectionEnum getLayerSetDirection() const;
        /**
         * Sets the value of the explicit attribute 'LayerSetDirection'.
         * 
         * @param value
         */
        virtual void setLayerSetDirection(IfcLayerSetDirectionEnum value);
        /**
         * unset the attribute 'LayerSetDirection'.
         * 
         */
        virtual void unsetLayerSetDirection();
        /**
         * Test if the attribute 'LayerSetDirection' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLayerSetDirection() const;
        /**
         * Gets the value of the explicit attribute 'DirectionSense'.
         * 
         */
        virtual IfcDirectionSenseEnum getDirectionSense();
        /**
         * (const) Returns the value of the explicit attribute 'DirectionSense'.
         * 
         * @return the value of the explicit attribute 'DirectionSense'
         */
        virtual const IfcDirectionSenseEnum getDirectionSense() const;
        /**
         * Sets the value of the explicit attribute 'DirectionSense'.
         * 
         * @param value
         */
        virtual void setDirectionSense(IfcDirectionSenseEnum value);
        /**
         * unset the attribute 'DirectionSense'.
         * 
         */
        virtual void unsetDirectionSense();
        /**
         * Test if the attribute 'DirectionSense' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDirectionSense() const;
        /**
         * Gets the value of the explicit attribute 'OffsetFromReferenceLine'.
         * 
         */
        virtual IfcLengthMeasure getOffsetFromReferenceLine();
        /**
         * (const) Returns the value of the explicit attribute 'OffsetFromReferenceLine'.
         * 
         * @return the value of the explicit attribute 'OffsetFromReferenceLine'
         */
        virtual const IfcLengthMeasure getOffsetFromReferenceLine() const;
        /**
         * Sets the value of the explicit attribute 'OffsetFromReferenceLine'.
         * 
         * @param value
         */
        virtual void setOffsetFromReferenceLine(IfcLengthMeasure value);
        /**
         * unset the attribute 'OffsetFromReferenceLine'.
         * 
         */
        virtual void unsetOffsetFromReferenceLine();
        /**
         * Test if the attribute 'OffsetFromReferenceLine' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testOffsetFromReferenceLine() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcMaterialLayerSetUsage(Step::Id id, Step::SPFData *args);
        virtual ~IfcMaterialLayerSetUsage();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMaterialLayerSetUsage &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcMaterialLayerSet > m_forLayerSet;
        /**
         */
        IfcLayerSetDirectionEnum m_layerSetDirection;
        /**
         */
        IfcDirectionSenseEnum m_directionSense;
        /**
         */
        Step::Real m_offsetFromReferenceLine;

    };

}

#endif // IFC2X3_IFCMATERIALLAYERSETUSAGE_H
