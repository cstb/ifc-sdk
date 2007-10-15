/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
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
         * Accepts a read/write DatatypeVisitor.
         * 
         * @param v the read/write DatatypeVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *v);
        /**
         */
        virtual const std::string &type();
        /**
         */
        static Step::ClassType getClassType();
        /**
         */
        virtual Step::ClassType getType() const;
        /**
         * @param t
         */
        virtual bool isOfType(Step::ClassType t);
        /**
         */
        IfcMaterialLayerSet *getForLayerSet();
        /**
         * Sets the value of the explicit attribute 'ForLayerSet'.
         * 
         * @param value
         */
        void setForLayerSet(const Step::RefPtr< IfcMaterialLayerSet > &value);
        /**
         */
        IfcLayerSetDirectionEnum getLayerSetDirection();
        /**
         * Sets the value of the explicit attribute 'LayerSetDirection'.
         * 
         * @param value
         */
        void setLayerSetDirection(IfcLayerSetDirectionEnum value);
        /**
         */
        IfcDirectionSenseEnum getDirectionSense();
        /**
         * Sets the value of the explicit attribute 'DirectionSense'.
         * 
         * @param value
         */
        void setDirectionSense(IfcDirectionSenseEnum value);
        /**
         */
        IfcLengthMeasure getOffsetFromReferenceLine();
        /**
         * Sets the value of the explicit attribute 'OffsetFromReferenceLine'.
         * 
         * @param value
         */
        void setOffsetFromReferenceLine(IfcLengthMeasure value);
        /**
         */
        virtual void release();
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
