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
 *     Copyright (C) 2009 CSTB                                             *
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

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcDateAndTime;
    class IfcLibraryInformation;
    class IfcMonetaryUnit;

    /**
     * Generated class for the IfcCurrencyRelationship Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcCurrencyRelationship : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'RelatingMonetaryUnit'.
         * 
         */
        virtual IfcMonetaryUnit *getRelatingMonetaryUnit();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingMonetaryUnit'.
         * 
         * @return the value of the explicit attribute 'RelatingMonetaryUnit'
         */
        virtual const IfcMonetaryUnit *getRelatingMonetaryUnit() const;
        /**
         * Sets the value of the explicit attribute 'RelatingMonetaryUnit'.
         * 
         * @param value
         */
        virtual void setRelatingMonetaryUnit(const Step::RefPtr< IfcMonetaryUnit > &value);
        /**
         * unset the attribute 'RelatingMonetaryUnit'.
         * 
         */
        virtual void unsetRelatingMonetaryUnit();
        /**
         * Test if the attribute 'RelatingMonetaryUnit' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatingMonetaryUnit() const;
        /**
         * Gets the value of the explicit attribute 'RelatedMonetaryUnit'.
         * 
         */
        virtual IfcMonetaryUnit *getRelatedMonetaryUnit();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedMonetaryUnit'.
         * 
         * @return the value of the explicit attribute 'RelatedMonetaryUnit'
         */
        virtual const IfcMonetaryUnit *getRelatedMonetaryUnit() const;
        /**
         * Sets the value of the explicit attribute 'RelatedMonetaryUnit'.
         * 
         * @param value
         */
        virtual void setRelatedMonetaryUnit(const Step::RefPtr< IfcMonetaryUnit > &value);
        /**
         * unset the attribute 'RelatedMonetaryUnit'.
         * 
         */
        virtual void unsetRelatedMonetaryUnit();
        /**
         * Test if the attribute 'RelatedMonetaryUnit' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatedMonetaryUnit() const;
        /**
         * Gets the value of the explicit attribute 'ExchangeRate'.
         * 
         */
        virtual IfcPositiveRatioMeasure getExchangeRate();
        /**
         * (const) Returns the value of the explicit attribute 'ExchangeRate'.
         * 
         * @return the value of the explicit attribute 'ExchangeRate'
         */
        virtual const IfcPositiveRatioMeasure getExchangeRate() const;
        /**
         * Sets the value of the explicit attribute 'ExchangeRate'.
         * 
         * @param value
         */
        virtual void setExchangeRate(IfcPositiveRatioMeasure value);
        /**
         * unset the attribute 'ExchangeRate'.
         * 
         */
        virtual void unsetExchangeRate();
        /**
         * Test if the attribute 'ExchangeRate' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testExchangeRate() const;
        /**
         * Gets the value of the explicit attribute 'RateDateTime'.
         * 
         */
        virtual IfcDateAndTime *getRateDateTime();
        /**
         * (const) Returns the value of the explicit attribute 'RateDateTime'.
         * 
         * @return the value of the explicit attribute 'RateDateTime'
         */
        virtual const IfcDateAndTime *getRateDateTime() const;
        /**
         * Sets the value of the explicit attribute 'RateDateTime'.
         * 
         * @param value
         */
        virtual void setRateDateTime(const Step::RefPtr< IfcDateAndTime > &value);
        /**
         * unset the attribute 'RateDateTime'.
         * 
         */
        virtual void unsetRateDateTime();
        /**
         * Test if the attribute 'RateDateTime' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRateDateTime() const;
        /**
         * Gets the value of the explicit attribute 'RateSource'.
         * 
         */
        virtual IfcLibraryInformation *getRateSource();
        /**
         * (const) Returns the value of the explicit attribute 'RateSource'.
         * 
         * @return the value of the explicit attribute 'RateSource'
         */
        virtual const IfcLibraryInformation *getRateSource() const;
        /**
         * Sets the value of the explicit attribute 'RateSource'.
         * 
         * @param value
         */
        virtual void setRateSource(const Step::RefPtr< IfcLibraryInformation > &value);
        /**
         * unset the attribute 'RateSource'.
         * 
         */
        virtual void unsetRateSource();
        /**
         * Test if the attribute 'RateSource' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRateSource() const;
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
