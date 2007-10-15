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

#ifndef IFC2X3_IFCOBJECTPLACEMENT_H
#define IFC2X3_IFCOBJECTPLACEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcLocalPlacement;
    class IfcProduct;

    /**
     */
    class IFC2X3_DLL_DEF IfcObjectPlacement : public Step::BaseEntity {
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
        Step::Set< Step::ObsPtr< IfcProduct > > &getPlacesObject();
        /**
         */
        Step::Set< Step::ObsPtr< IfcLocalPlacement > > &getReferencedByPlacements();
        /**
         */
        virtual void release();
        friend class IfcLocalPlacement;
        friend class IfcProduct;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcObjectPlacement(Step::Id id, Step::SPFData *args);
        virtual ~IfcObjectPlacement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcObjectPlacement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Set< Step::ObsPtr< IfcProduct > > m_placesObject;
        /**
         */
        Step::Set< Step::ObsPtr< IfcLocalPlacement > > m_referencedByPlacements;

    };

}

#endif // IFC2X3_IFCOBJECTPLACEMENT_H
