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

#ifndef IFC2X3_IFCPRODUCT_H
#define IFC2X3_IFCPRODUCT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/Referenced.h>
#include "ifc2x3/IfcObject.h"

namespace ifc2x3 {

    class CopyOp;
    class IfcObjectPlacement;
    class IfcProductRepresentation;
    class IfcRelAssignsToProduct;

    /**
     */
    class IFC2X3_DLL_DEF IfcProduct : public IfcObject {
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
        IfcObjectPlacement *getObjectPlacement();
        /**
         * Sets the value of the explicit attribute 'ObjectPlacement'.
         * 
         * @param value
         */
        void setObjectPlacement(const Step::RefPtr< IfcObjectPlacement > &value);
        /**
         */
        IfcProductRepresentation *getRepresentation();
        /**
         * Sets the value of the explicit attribute 'Representation'.
         * 
         * @param value
         */
        void setRepresentation(const Step::RefPtr< IfcProductRepresentation > &value);
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelAssignsToProduct > > &getReferencedBy();
        /**
         */
        virtual void release();
        friend class IfcRelAssignsToProduct;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcProduct(Step::Id id, Step::SPFData *args);
        virtual ~IfcProduct();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcProduct &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcObjectPlacement > m_objectPlacement;
        /**
         */
        Step::RefPtr< IfcProductRepresentation > m_representation;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelAssignsToProduct > > m_referencedBy;

    };

}

#endif // IFC2X3_IFCPRODUCT_H
