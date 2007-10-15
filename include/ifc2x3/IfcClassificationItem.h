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

#ifndef IFC2X3_IFCCLASSIFICATIONITEM_H
#define IFC2X3_IFCCLASSIFICATIONITEM_H
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
    class IfcClassification;
    class IfcClassificationItemRelationship;
    class IfcClassificationNotationFacet;

    /**
     */
    class IFC2X3_DLL_DEF IfcClassificationItem : public Step::BaseEntity {
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
        IfcClassificationNotationFacet *getNotation();
        /**
         * Sets the value of the explicit attribute 'Notation'.
         * 
         * @param value
         */
        void setNotation(const Step::RefPtr< IfcClassificationNotationFacet > &value);
        /**
         */
        IfcClassification *getItemOf();
        /**
         * Sets the value of the explicit attribute 'ItemOf'.
         * 
         * @param value
         */
        void setItemOf(const Step::RefPtr< IfcClassification > &value);
        /**
         */
        IfcLabel getTitle();
        /**
         * Sets the value of the explicit attribute 'Title'.
         * 
         * @param value
         */
        void setTitle(const IfcLabel &value);
        /**
         */
        Step::Set< Step::ObsPtr< IfcClassificationItemRelationship > > &getIsClassifiedItemIn();
        /**
         */
        Step::Set< Step::ObsPtr< IfcClassificationItemRelationship > > &getIsClassifyingItemIn();
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        friend class IfcClassificationItemRelationship;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcClassificationItem(Step::Id id, Step::SPFData *args);
        virtual ~IfcClassificationItem();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcClassificationItem &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcClassificationNotationFacet > m_notation;
        /**
         */
        Step::RefPtr< IfcClassification > m_itemOf;
        /**
         */
        std::string m_title;
        /**
         */
        Step::Set< Step::ObsPtr< IfcClassificationItemRelationship > > m_isClassifiedItemIn;
        /**
         */
        Step::Set< Step::ObsPtr< IfcClassificationItemRelationship > > m_isClassifyingItemIn;

    };

}

#endif // IFC2X3_IFCCLASSIFICATIONITEM_H
