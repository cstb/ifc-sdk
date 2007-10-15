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

#ifndef IFC2X3_IFCREPRESENTATION_H
#define IFC2X3_IFCREPRESENTATION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/SPFData.h>
#include <Step/Referenced.h>
#include <Step/ClassType.h>
#include <Step/BaseEntity.h>
#include <string>
#include <Step/Aggregation.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcPresentationLayerAssignment;
    class IfcProductRepresentation;
    class IfcRepresentationContext;
    class IfcRepresentationItem;
    class IfcRepresentationMap;

    /**
     */
    class IFC2X3_DLL_DEF IfcRepresentation : public Step::BaseEntity {
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
        IfcRepresentationContext *getContextOfItems();
        /**
         * Sets the value of the explicit attribute 'ContextOfItems'.
         * 
         * @param value
         */
        void setContextOfItems(const Step::RefPtr< IfcRepresentationContext > &value);
        /**
         */
        IfcLabel getRepresentationIdentifier();
        /**
         * Sets the value of the explicit attribute 'RepresentationIdentifier'.
         * 
         * @param value
         */
        void setRepresentationIdentifier(const IfcLabel &value);
        /**
         */
        IfcLabel getRepresentationType();
        /**
         * Sets the value of the explicit attribute 'RepresentationType'.
         * 
         * @param value
         */
        void setRepresentationType(const IfcLabel &value);
        /**
         */
        Step::Set< Step::RefPtr< IfcRepresentationItem > > &getItems();
        /**
         * Sets the value of the explicit attribute 'Items'.
         * 
         * @param value
         */
        void setItems(const Step::Set< Step::RefPtr< IfcRepresentationItem > > &value);
        /**
         */
        Step::Set< Step::ObsPtr< IfcRepresentationMap > > &getRepresentationMap();
        /**
         */
        Step::Set< Step::ObsPtr< IfcPresentationLayerAssignment > > &getLayerAssignments();
        /**
         */
        Step::Set< Step::ObsPtr< IfcProductRepresentation > > &getOfProductRepresentation();
        /**
         */
        virtual void release();
        friend class IfcRepresentationMap;
        friend class ExpressDataSet;
        friend class IfcProductRepresentation;
        friend class IfcPresentationLayerAssignment;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRepresentation(Step::Id id, Step::SPFData *args);
        virtual ~IfcRepresentation();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRepresentation &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcRepresentationContext > m_contextOfItems;
        /**
         */
        std::string m_representationIdentifier;
        /**
         */
        std::string m_representationType;
        /**
         */
        Step::Set< Step::RefPtr< IfcRepresentationItem > > m_items;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRepresentationMap > > m_representationMap;
        /**
         */
        Step::Set< Step::ObsPtr< IfcPresentationLayerAssignment > > m_layerAssignments;
        /**
         */
        Step::Set< Step::ObsPtr< IfcProductRepresentation > > m_ofProductRepresentation;

    };

}

#endif // IFC2X3_IFCREPRESENTATION_H
