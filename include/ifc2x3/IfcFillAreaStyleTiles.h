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

#ifndef IFC2X3_IFCFILLAREASTYLETILES_H
#define IFC2X3_IFCFILLAREASTYLETILES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcOneDirectionRepeatFactor;

    /**
     */
    class IFC2X3_DLL_DEF IfcFillAreaStyleTiles : public IfcGeometricRepresentationItem {
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
         * Gets the value of the explicit attribute 'TilingPattern'.
         * 
         */
        virtual IfcOneDirectionRepeatFactor *getTilingPattern();
        /**
         * (const) Returns the value of the explicit attribute 'TilingPattern'.
         * 
         * @return the value of the explicit attribute 'TilingPattern'
         */
        virtual const IfcOneDirectionRepeatFactor *getTilingPattern() const;
        /**
         * Sets the value of the explicit attribute 'TilingPattern'.
         * 
         * @param value
         */
        virtual void setTilingPattern(const Step::RefPtr< IfcOneDirectionRepeatFactor > &value);
        /**
         * Gets the value of the explicit attribute 'Tiles'.
         * 
         */
        virtual Set_IfcFillAreaStyleTileShapeSelect_1_n &getTiles();
        /**
         * (const) Returns the value of the explicit attribute 'Tiles'.
         * 
         * @return the value of the explicit attribute 'Tiles'
         */
        virtual const Set_IfcFillAreaStyleTileShapeSelect_1_n &getTiles() const;
        /**
         * Sets the value of the explicit attribute 'Tiles'.
         * 
         * @param value
         */
        virtual void setTiles(const Set_IfcFillAreaStyleTileShapeSelect_1_n &value);
        /**
         * Gets the value of the explicit attribute 'TilingScale'.
         * 
         */
        virtual IfcPositiveRatioMeasure getTilingScale();
        /**
         * (const) Returns the value of the explicit attribute 'TilingScale'.
         * 
         * @return the value of the explicit attribute 'TilingScale'
         */
        virtual const IfcPositiveRatioMeasure getTilingScale() const;
        /**
         * Sets the value of the explicit attribute 'TilingScale'.
         * 
         * @param value
         */
        virtual void setTilingScale(IfcPositiveRatioMeasure value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcFillAreaStyleTiles(Step::Id id, Step::SPFData *args);
        virtual ~IfcFillAreaStyleTiles();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcFillAreaStyleTiles &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcOneDirectionRepeatFactor > m_tilingPattern;
        /**
         */
        Set_IfcFillAreaStyleTileShapeSelect_1_n m_tiles;
        /**
         */
        Step::Real m_tilingScale;

    };

}

#endif // IFC2X3_IFCFILLAREASTYLETILES_H
