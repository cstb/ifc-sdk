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
 *     Copyright (C) 2009 CSTB                                             *
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

#include <Step/BaseObject.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcMaterial;
    class IfcMaterialLayer;
    class IfcMaterialLayerSet;
    class IfcMaterialLayerSetUsage;
    class IfcMaterialList;

    /**
     * .
     * 
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
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMaterialSelect &obj, const CopyOp &copyop);
        /**
         */
        std::string currentTypeName() const;
        /**
         */
        IfcMaterialSelect_select currentType() const;
        /**
         */
        void deleteUnion();
        /**
         */
        IfcMaterial *getIfcMaterial() const;
        /**
         * @param value
         */
        void setIfcMaterial(IfcMaterial *value);
        /**
         */
        IfcMaterialList *getIfcMaterialList() const;
        /**
         * @param value
         */
        void setIfcMaterialList(IfcMaterialList *value);
        /**
         */
        IfcMaterialLayerSetUsage *getIfcMaterialLayerSetUsage() const;
        /**
         * @param value
         */
        void setIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage *value);
        /**
         */
        IfcMaterialLayerSet *getIfcMaterialLayerSet() const;
        /**
         * @param value
         */
        void setIfcMaterialLayerSet(IfcMaterialLayerSet *value);
        /**
         */
        IfcMaterialLayer *getIfcMaterialLayer() const;
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
