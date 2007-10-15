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

#ifndef IFC2X3_IFCMATERIALLAYER_H
#define IFC2X3_IFCMATERIALLAYER_H
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
    class IfcMaterial;
    class IfcMaterialLayerSet;

    /**
     */
    class IFC2X3_DLL_DEF IfcMaterialLayer : public Step::BaseEntity {
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
        IfcMaterial *getMaterial();
        /**
         * Sets the value of the explicit attribute 'Material'.
         * 
         * @param value
         */
        void setMaterial(const Step::RefPtr< IfcMaterial > &value);
        /**
         */
        IfcPositiveLengthMeasure getLayerThickness();
        /**
         * Sets the value of the explicit attribute 'LayerThickness'.
         * 
         * @param value
         */
        void setLayerThickness(IfcPositiveLengthMeasure value);
        /**
         */
        IfcLogical getIsVentilated();
        /**
         * Sets the value of the explicit attribute 'IsVentilated'.
         * 
         * @param value
         */
        void setIsVentilated(IfcLogical value);
        /**
         */
        IfcMaterialLayerSet *getToMaterialLayerSet();
        /**
         */
        virtual void release();
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
