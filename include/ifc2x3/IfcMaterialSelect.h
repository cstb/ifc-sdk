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

#ifndef IFC2X3_IFCMATERIALSELECT_H
#define IFC2X3_IFCMATERIALSELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcMaterial;
    class IfcMaterialLayer;
    class IfcMaterialLayerSet;
    class IfcMaterialLayerSetUsage;
    class IfcMaterialList;

    /**
     */
    class IFC2X3_DLL_DEF IfcMaterialSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcMaterialSelect_select {
            IFCMATERIAL,
            IFCMATERIALLIST,
            IFCMATERIALLAYERSETUSAGE,
            IFCMATERIALLAYERSET,
            IFCMATERIALLAYER,
            UNSET,
        };

        union IfcMaterialSelect_union {
            IfcMaterial *m_IfcMaterial;
            IfcMaterialList *m_IfcMaterialList;
            IfcMaterialLayerSetUsage *m_IfcMaterialLayerSetUsage;
            IfcMaterialLayerSet *m_IfcMaterialLayerSet;
            IfcMaterialLayer *m_IfcMaterialLayer;
        };
        /**
         */
        IfcMaterialSelect();
        virtual ~IfcMaterialSelect();
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
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMaterialSelect &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcMaterialSelect_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcMaterial *getIfcMaterial();
        /**
         * @param value
         */
        void setIfcMaterial(IfcMaterial *value);
        /**
         */
        IfcMaterialList *getIfcMaterialList();
        /**
         * @param value
         */
        void setIfcMaterialList(IfcMaterialList *value);
        /**
         */
        IfcMaterialLayerSetUsage *getIfcMaterialLayerSetUsage();
        /**
         * @param value
         */
        void setIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage *value);
        /**
         */
        IfcMaterialLayerSet *getIfcMaterialLayerSet();
        /**
         * @param value
         */
        void setIfcMaterialLayerSet(IfcMaterialLayerSet *value);
        /**
         */
        IfcMaterialLayer *getIfcMaterialLayer();
        /**
         * @param value
         */
        void setIfcMaterialLayer(IfcMaterialLayer *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcMaterialSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcMaterialSelect_select m_type;
        /**
         */
        IfcMaterialSelect_union m_IfcMaterialSelect_union;

    };

}

#endif // IFC2X3_IFCMATERIALSELECT_H
