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

#ifndef IFC2X3_IFCREPRESENTATIONMAP_H
#define IFC2X3_IFCREPRESENTATIONMAP_H
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
    class IfcAxis2Placement;
    class IfcMappedItem;
    class IfcRepresentation;

    /**
     */
    class IFC2X3_DLL_DEF IfcRepresentationMap : public Step::BaseEntity {
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
        IfcAxis2Placement *getMappingOrigin();
        /**
         * Sets the value of the explicit attribute 'MappingOrigin'.
         * 
         * @param value
         */
        void setMappingOrigin(const Step::RefPtr< IfcAxis2Placement > &value);
        /**
         */
        IfcRepresentation *getMappedRepresentation();
        /**
         * Sets the value of the explicit attribute 'MappedRepresentation'.
         * 
         * @param value
         */
        void setMappedRepresentation(const Step::RefPtr< IfcRepresentation > &value);
        /**
         */
        Step::Set< Step::ObsPtr< IfcMappedItem > > &getMapUsage();
        /**
         */
        virtual void release();
        friend class IfcMappedItem;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRepresentationMap(Step::Id id, Step::SPFData *args);
        virtual ~IfcRepresentationMap();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRepresentationMap &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcAxis2Placement > m_mappingOrigin;
        /**
         */
        Step::RefPtr< IfcRepresentation > m_mappedRepresentation;
        /**
         */
        Step::Set< Step::ObsPtr< IfcMappedItem > > m_mapUsage;

    };

}

#endif // IFC2X3_IFCREPRESENTATIONMAP_H
