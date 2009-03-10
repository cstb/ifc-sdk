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

#ifndef IFC2X3_IFCMATERIALLAYERSET_H
#define IFC2X3_IFCMATERIALLAYERSET_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <stdexcept>
#include <Step/Referenced.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/String.h>

namespace ifc2x3 {

    class IfcMaterialLayer;
    class IfcMaterialLayerSet;

    /**
     */
    class Inverted_IfcMaterialLayerSet_MaterialLayers_type : public List_IfcMaterialLayer_1_n {
    public:
        /**
         */
        typedef List_IfcMaterialLayer_1_n::iterator iterator;

        /**
         */
        IfcMaterialLayerSet *mOwner;
        /**
         */
        Inverted_IfcMaterialLayerSet_MaterialLayers_type();
        /**
         * @param owner
         */
        void setOwner(IfcMaterialLayerSet *owner);
        /**
         * @param value
         */
        virtual void push_back(const Step::RefPtr< IfcMaterialLayer > &value) throw(std::out_of_range);
        /**
         * @param value
         */
        virtual iterator erase(const Step::RefPtr< IfcMaterialLayer > &value);

    };

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcMaterialLayerSet : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'MaterialLayers'.
         * 
         */
        virtual List_IfcMaterialLayer_1_n &getMaterialLayers();
        /**
         * (const) Returns the value of the explicit attribute 'MaterialLayers'.
         * 
         * @return the value of the explicit attribute 'MaterialLayers'
         */
        virtual const List_IfcMaterialLayer_1_n &getMaterialLayers() const;
        /**
         * Gets the value of the explicit attribute 'LayerSetName'.
         * 
         */
        virtual IfcLabel getLayerSetName();
        /**
         * (const) Returns the value of the explicit attribute 'LayerSetName'.
         * 
         * @return the value of the explicit attribute 'LayerSetName'
         */
        virtual const IfcLabel getLayerSetName() const;
        /**
         * Sets the value of the explicit attribute 'LayerSetName'.
         * 
         * @param value
         */
        virtual void setLayerSetName(const IfcLabel &value);
        /**
         * Gets the value of the derived attribute 'TotalThickness'.
         * 
         */
        virtual IfcLengthMeasure getTotalThickness() const;
        friend class ExpressDataSet;

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
        Inverted_IfcMaterialLayerSet_MaterialLayers_type m_materialLayers;
        /**
         */
        Step::String m_layerSetName;

    };

}

#endif // IFC2X3_IFCMATERIALLAYERSET_H
