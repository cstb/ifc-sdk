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

#ifndef IFC2X3_IFCCLASSIFICATION_H
#define IFC2X3_IFCCLASSIFICATION_H
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
    class IfcCalendarDate;
    class IfcClassificationItem;

    /**
     */
    class IFC2X3_DLL_DEF IfcClassification : public Step::BaseEntity {
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
        IfcLabel getSource();
        /**
         * Sets the value of the explicit attribute 'Source'.
         * 
         * @param value
         */
        void setSource(const IfcLabel &value);
        /**
         */
        IfcLabel getEdition();
        /**
         * Sets the value of the explicit attribute 'Edition'.
         * 
         * @param value
         */
        void setEdition(const IfcLabel &value);
        /**
         */
        IfcCalendarDate *getEditionDate();
        /**
         * Sets the value of the explicit attribute 'EditionDate'.
         * 
         * @param value
         */
        void setEditionDate(const Step::RefPtr< IfcCalendarDate > &value);
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
        Step::Set< Step::ObsPtr< IfcClassificationItem > > &getContains();
        /**
         */
        virtual void release();
        friend class IfcClassificationItem;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcClassification(Step::Id id, Step::SPFData *args);
        virtual ~IfcClassification();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcClassification &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_source;
        /**
         */
        std::string m_edition;
        /**
         */
        Step::RefPtr< IfcCalendarDate > m_editionDate;
        /**
         */
        std::string m_name;
        /**
         */
        Step::Set< Step::ObsPtr< IfcClassificationItem > > m_contains;

    };

}

#endif // IFC2X3_IFCCLASSIFICATION_H
