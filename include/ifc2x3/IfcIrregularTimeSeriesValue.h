/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
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

#ifndef IFC2X3_IFCIRREGULARTIMESERIESVALUE_H
#define IFC2X3_IFCIRREGULARTIMESERIESVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcDateTimeSelect;

    /**
     */
    class IFC2X3_DLL_DEF IfcIrregularTimeSeriesValue : public Step::BaseEntity {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'TimeStamp'.
         * 
         */
        virtual IfcDateTimeSelect *getTimeStamp();
        /**
         * (const) Returns the value of the explicit attribute 'TimeStamp'.
         * 
         * @return the value of the explicit attribute 'TimeStamp'
         */
        virtual const IfcDateTimeSelect *getTimeStamp() const;
        /**
         * Sets the value of the explicit attribute 'TimeStamp'.
         * 
         * @param value
         */
        virtual void setTimeStamp(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         * Gets the value of the explicit attribute 'ListValues'.
         * 
         */
        virtual List_IfcValue_1_n &getListValues();
        /**
         * (const) Returns the value of the explicit attribute 'ListValues'.
         * 
         * @return the value of the explicit attribute 'ListValues'
         */
        virtual const List_IfcValue_1_n &getListValues() const;
        /**
         * Sets the value of the explicit attribute 'ListValues'.
         * 
         * @param value
         */
        virtual void setListValues(const List_IfcValue_1_n &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcIrregularTimeSeriesValue(Step::Id id, Step::SPFData *args);
        virtual ~IfcIrregularTimeSeriesValue();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcIrregularTimeSeriesValue &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_timeStamp;
        /**
         */
        List_IfcValue_1_n m_listValues;

    };

}

#endif // IFC2X3_IFCIRREGULARTIMESERIESVALUE_H
