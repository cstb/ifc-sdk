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

#ifndef IFC2X3_IFCMATERIAL_H
#define IFC2X3_IFCMATERIAL_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <string>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcMaterialClassificationRelationship;
    class IfcMaterialDefinitionRepresentation;

    /**
     */
    class IFC2X3_DLL_DEF IfcMaterial : public Step::BaseEntity {
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
        IfcLabel getName();
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        void setName(const IfcLabel &value);
        /**
         */
        Step::Set< Step::ObsPtr< IfcMaterialDefinitionRepresentation > > &getHasRepresentation();
        /**
         */
        Step::Set< Step::ObsPtr< IfcMaterialClassificationRelationship > > &getClassifiedAs();
        /**
         */
        virtual void release();
        friend class IfcMaterialDefinitionRepresentation;
        friend class ExpressDataSet;
        friend class IfcMaterialClassificationRelationship;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcMaterial(Step::Id id, Step::SPFData *args);
        virtual ~IfcMaterial();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMaterial &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_name;
        /**
         */
        Step::Set< Step::ObsPtr< IfcMaterialDefinitionRepresentation > > m_hasRepresentation;
        /**
         */
        Step::Set< Step::ObsPtr< IfcMaterialClassificationRelationship > > m_classifiedAs;

    };

}

#endif // IFC2X3_IFCMATERIAL_H
