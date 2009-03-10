/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCMATERIALLAYERSETUSAGE_H
#define IFC2X3_IFCMATERIALLAYERSETUSAGE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcMaterialLayerSet;

    /**
     */
    class IFC2X3_DLL_DEF IfcMaterialLayerSetUsage : public Step::BaseEntity {
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
