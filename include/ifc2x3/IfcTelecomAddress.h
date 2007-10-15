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

#ifndef IFC2X3_IFCTELECOMADDRESS_H
#define IFC2X3_IFCTELECOMADDRESS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>
#include <Step/Aggregation.h>
#include "ifc2x3/IfcAddress.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcTelecomAddress : public IfcAddress {
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
        Step::List< IfcLabel > &getTelephoneNumbers();
        /**
         * Sets the value of the explicit attribute 'TelephoneNumbers'.
         * 
         * @param value
         */
        void setTelephoneNumbers(const Step::List< IfcLabel > &value);
        /**
         */
        Step::List< IfcLabel > &getFacsimileNumbers();
        /**
         * Sets the value of the explicit attribute 'FacsimileNumbers'.
         * 
         * @param value
         */
        void setFacsimileNumbers(const Step::List< IfcLabel > &value);
        /**
         */
        IfcLabel getPagerNumber();
        /**
         * Sets the value of the explicit attribute 'PagerNumber'.
         * 
         * @param value
         */
        void setPagerNumber(const IfcLabel &value);
        /**
         */
        Step::List< IfcLabel > &getElectronicMailAddresses();
        /**
         * Sets the value of the explicit attribute 'ElectronicMailAddresses'.
         * 
         * @param value
         */
        void setElectronicMailAddresses(const Step::List< IfcLabel > &value);
        /**
         */
        IfcLabel getWWWHomePageURL();
        /**
         * Sets the value of the explicit attribute 'WWWHomePageURL'.
         * 
         * @param value
         */
        void setWWWHomePageURL(const IfcLabel &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTelecomAddress(Step::Id id, Step::SPFData *args);
        virtual ~IfcTelecomAddress();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTelecomAddress &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::List< IfcLabel > m_telephoneNumbers;
        /**
         */
        Step::List< IfcLabel > m_facsimileNumbers;
        /**
         */
        std::string m_pagerNumber;
        /**
         */
        Step::List< IfcLabel > m_electronicMailAddresses;
        /**
         */
        std::string m_wWWHomePageURL;

    };

}

#endif // IFC2X3_IFCTELECOMADDRESS_H
