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

#ifndef IFC2X3_IFCMATERIALLAYERSET_H
#define IFC2X3_IFCMATERIALLAYERSET_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Aggregation.h>
#include <Step/SPFData.h>
#include <string>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcMaterialLayer;

    /**
     */
    class IFC2X3_DLL_DEF IfcMaterialLayerSet : public Step::BaseEntity {
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
        Step::List< Step::RefPtr< IfcMaterialLayer > > &getMaterialLayers();
        /**
         */
        IfcLabel getLayerSetName();
        /**
         * Sets the value of the explicit attribute 'LayerSetName'.
         * 
         * @param value
         */
        void setLayerSetName(const IfcLabel &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        /**
         */
        class Inverted_MaterialLayers_type : public Step::List< Step::RefPtr< IfcMaterialLayer > > {
        public:
            /**
             */
            IfcMaterialLayerSet *mOwner;
            /**
             */
            Inverted_MaterialLayers_type();
            /**
             * @param owner
             */
            void setOwner(IfcMaterialLayerSet *owner);
            /**
             * @param value
             */
            virtual void push_back(const Step::RefPtr< IfcMaterialLayer > &value);

        };


    protected:
        /**
         * @param id
         * @param args
         */
        IfcMaterialLayerSet(Step::Id id, Step::SPFData *args);
        virtual ~IfcMaterialLayerSet();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMaterialLayerSet &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverted_MaterialLayers_type m_materialLayers;
        /**
         */
        std::string m_layerSetName;

    };

}

#endif // IFC2X3_IFCMATERIALLAYERSET_H
