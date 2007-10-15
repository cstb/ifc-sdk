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

#ifndef IFC2X3_IFCOBJECTDEFINITION_H
#define IFC2X3_IFCOBJECTDEFINITION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcRoot.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcRelAssigns;
    class IfcRelAssociates;
    class IfcRelDecomposes;

    /**
     */
    class IFC2X3_DLL_DEF IfcObjectDefinition : public IfcRoot {
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
        Step::Set< Step::ObsPtr< IfcRelAssigns > > &getHasAssignments();
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelDecomposes > > &getIsDecomposedBy();
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelDecomposes > > &getDecomposes();
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelAssociates > > &getHasAssociations();
        /**
         */
        virtual void release();
        friend class IfcRelDecomposes;
        friend class IfcRelAssociates;
        friend class ExpressDataSet;
        friend class IfcRelAssigns;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcObjectDefinition(Step::Id id, Step::SPFData *args);
        virtual ~IfcObjectDefinition();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcObjectDefinition &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelAssigns > > m_hasAssignments;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelDecomposes > > m_isDecomposedBy;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelDecomposes > > m_decomposes;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelAssociates > > m_hasAssociations;

    };

}

#endif // IFC2X3_IFCOBJECTDEFINITION_H
