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

#ifndef IFC2X3_IFCFILLAREASTYLETILES_H
#define IFC2X3_IFCFILLAREASTYLETILES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcFillAreaStyleTileShapeSelect.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcOneDirectionRepeatFactor;

    /**
     */
    class IFC2X3_DLL_DEF IfcFillAreaStyleTiles : public IfcGeometricRepresentationItem {
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
        IfcOneDirectionRepeatFactor *getTilingPattern();
        /**
         * Sets the value of the explicit attribute 'TilingPattern'.
         * 
         * @param value
         */
        void setTilingPattern(const Step::RefPtr< IfcOneDirectionRepeatFactor > &value);
        /**
         */
        Step::Set< Step::RefPtr< IfcFillAreaStyleTileShapeSelect > > &getTiles();
        /**
         * Sets the value of the explicit attribute 'Tiles'.
         * 
         * @param value
         */
        void setTiles(const Step::Set< Step::RefPtr< IfcFillAreaStyleTileShapeSelect > > &value);
        /**
         */
        IfcPositiveRatioMeasure getTilingScale();
        /**
         * Sets the value of the explicit attribute 'TilingScale'.
         * 
         * @param value
         */
        void setTilingScale(IfcPositiveRatioMeasure value);
        /**
         */
        virtual void release();
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
        Step::Set< Step::RefPtr< IfcFillAreaStyleTileShapeSelect > > m_tiles;
        /**
         */
        Step::Real m_tilingScale;

    };

}

#endif // IFC2X3_IFCFILLAREASTYLETILES_H
