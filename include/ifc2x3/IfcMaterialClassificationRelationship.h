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

#ifndef IFC2X3_IFCMATERIALCLASSIFICATIONRELATIONSHIP_H
#define IFC2X3_IFCMATERIALCLASSIFICATIONRELATIONSHIP_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include "ifc2x3/IfcClassificationNotationSelect.h"
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcMaterial;

    /**
     */
    class IFC2X3_DLL_DEF IfcMaterialClassificationRelationship : public Step::BaseEntity {
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
        Step::Set< Step::RefPtr< IfcClassificationNotationSelect > > &getMaterialClassifications();
        /**
         * Sets the value of the explicit attribute 'MaterialClassifications'.
         * 
         * @param value
         */
        void setMaterialClassifications(const Step::Set< Step::RefPtr< IfcClassificationNotationSelect > > &value);
        /**
         */
        IfcMaterial *getClassifiedMaterial();
        /**
         * Sets the value of the explicit attribute 'ClassifiedMaterial'.
         * 
         * @param value
         */
        void setClassifiedMaterial(const Step::RefPtr< IfcMaterial > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcMaterialClassificationRelationship(Step::Id id, Step::SPFData *args);
        virtual ~IfcMaterialClassificationRelationship();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMaterialClassificationRelationship &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Set< Step::RefPtr< IfcClassificationNotationSelect > > m_materialClassifications;
        /**
         */
        Step::RefPtr< IfcMaterial > m_classifiedMaterial;

    };

}

#endif // IFC2X3_IFCMATERIALCLASSIFICATIONRELATIONSHIP_H
