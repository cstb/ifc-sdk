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

#ifndef IFC2X3_IFCCURRENCYRELATIONSHIP_H
#define IFC2X3_IFCCURRENCYRELATIONSHIP_H
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
    class IfcDateAndTime;
    class IfcLibraryInformation;
    class IfcMonetaryUnit;

    /**
     */
    class IFC2X3_DLL_DEF IfcCurrencyRelationship : public Step::BaseEntity {
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
        IfcMonetaryUnit *getRelatingMonetaryUnit();
        /**
         * Sets the value of the explicit attribute 'RelatingMonetaryUnit'.
         * 
         * @param value
         */
        void setRelatingMonetaryUnit(const Step::RefPtr< IfcMonetaryUnit > &value);
        /**
         */
        IfcMonetaryUnit *getRelatedMonetaryUnit();
        /**
         * Sets the value of the explicit attribute 'RelatedMonetaryUnit'.
         * 
         * @param value
         */
        void setRelatedMonetaryUnit(const Step::RefPtr< IfcMonetaryUnit > &value);
        /**
         */
        IfcPositiveRatioMeasure getExchangeRate();
        /**
         * Sets the value of the explicit attribute 'ExchangeRate'.
         * 
         * @param value
         */
        void setExchangeRate(IfcPositiveRatioMeasure value);
        /**
         */
        IfcDateAndTime *getRateDateTime();
        /**
         * Sets the value of the explicit attribute 'RateDateTime'.
         * 
         * @param value
         */
        void setRateDateTime(const Step::RefPtr< IfcDateAndTime > &value);
        /**
         */
        IfcLibraryInformation *getRateSource();
        /**
         * Sets the value of the explicit attribute 'RateSource'.
         * 
         * @param value
         */
        void setRateSource(const Step::RefPtr< IfcLibraryInformation > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCurrencyRelationship(Step::Id id, Step::SPFData *args);
        virtual ~IfcCurrencyRelationship();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCurrencyRelationship &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcMonetaryUnit > m_relatingMonetaryUnit;
        /**
         */
        Step::RefPtr< IfcMonetaryUnit > m_relatedMonetaryUnit;
        /**
         */
        Step::Real m_exchangeRate;
        /**
         */
        Step::RefPtr< IfcDateAndTime > m_rateDateTime;
        /**
         */
        Step::RefPtr< IfcLibraryInformation > m_rateSource;

    };

}

#endif // IFC2X3_IFCCURRENCYRELATIONSHIP_H
