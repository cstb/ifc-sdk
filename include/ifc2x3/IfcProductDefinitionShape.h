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

#ifndef IFC2X3_IFCPRODUCTDEFINITIONSHAPE_H
#define IFC2X3_IFCPRODUCTDEFINITIONSHAPE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include "ifc2x3/IfcProductRepresentation.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcProduct;
    class IfcShapeAspect;

    /**
     */
    class IFC2X3_DLL_DEF IfcProductDefinitionShape : public IfcProductRepresentation {
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
        Step::Set< Step::ObsPtr< IfcProduct > > &getShapeOfProduct();
        /**
         */
        Step::Set< Step::ObsPtr< IfcShapeAspect > > &getHasShapeAspects();
        /**
         */
        virtual void release();
        friend class IfcShapeAspect;
        friend class IfcProduct;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcProductDefinitionShape(Step::Id id, Step::SPFData *args);
        virtual ~IfcProductDefinitionShape();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcProductDefinitionShape &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Set< Step::ObsPtr< IfcProduct > > m_shapeOfProduct;
        /**
         */
        Step::Set< Step::ObsPtr< IfcShapeAspect > > m_hasShapeAspects;

    };

}

#endif // IFC2X3_IFCPRODUCTDEFINITIONSHAPE_H
