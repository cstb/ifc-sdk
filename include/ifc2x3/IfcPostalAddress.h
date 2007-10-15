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

#ifndef IFC2X3_IFCPOSTALADDRESS_H
#define IFC2X3_IFCPOSTALADDRESS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <string>
#include "ifc2x3/IfcAddress.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcPostalAddress : public IfcAddress {
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
        IfcLabel getInternalLocation();
        /**
         * Sets the value of the explicit attribute 'InternalLocation'.
         * 
         * @param value
         */
        void setInternalLocation(const IfcLabel &value);
        /**
         */
        Step::List< IfcLabel > &getAddressLines();
        /**
         * Sets the value of the explicit attribute 'AddressLines'.
         * 
         * @param value
         */
        void setAddressLines(const Step::List< IfcLabel > &value);
        /**
         */
        IfcLabel getPostalBox();
        /**
         * Sets the value of the explicit attribute 'PostalBox'.
         * 
         * @param value
         */
        void setPostalBox(const IfcLabel &value);
        /**
         */
        IfcLabel getTown();
        /**
         * Sets the value of the explicit attribute 'Town'.
         * 
         * @param value
         */
        void setTown(const IfcLabel &value);
        /**
         */
        IfcLabel getRegion();
        /**
         * Sets the value of the explicit attribute 'Region'.
         * 
         * @param value
         */
        void setRegion(const IfcLabel &value);
        /**
         */
        IfcLabel getPostalCode();
        /**
         * Sets the value of the explicit attribute 'PostalCode'.
         * 
         * @param value
         */
        void setPostalCode(const IfcLabel &value);
        /**
         */
        IfcLabel getCountry();
        /**
         * Sets the value of the explicit attribute 'Country'.
         * 
         * @param value
         */
        void setCountry(const IfcLabel &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPostalAddress(Step::Id id, Step::SPFData *args);
        virtual ~IfcPostalAddress();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPostalAddress &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_internalLocation;
        /**
         */
        Step::List< IfcLabel > m_addressLines;
        /**
         */
        std::string m_postalBox;
        /**
         */
        std::string m_town;
        /**
         */
        std::string m_region;
        /**
         */
        std::string m_postalCode;
        /**
         */
        std::string m_country;

    };

}

#endif // IFC2X3_IFCPOSTALADDRESS_H
