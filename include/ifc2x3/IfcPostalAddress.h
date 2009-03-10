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

#ifndef IFC2X3_IFCPOSTALADDRESS_H
#define IFC2X3_IFCPOSTALADDRESS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcAddress.h"
#include <Step/String.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcPostalAddress : public IfcAddress {
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
         * Gets the value of the explicit attribute 'InternalLocation'.
         * 
         */
        virtual IfcLabel getInternalLocation();
        /**
         * (const) Returns the value of the explicit attribute 'InternalLocation'.
         * 
         * @return the value of the explicit attribute 'InternalLocation'
         */
        virtual const IfcLabel getInternalLocation() const;
        /**
         * Sets the value of the explicit attribute 'InternalLocation'.
         * 
         * @param value
         */
        virtual void setInternalLocation(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'AddressLines'.
         * 
         */
        virtual List_IfcLabel_1_n &getAddressLines();
        /**
         * (const) Returns the value of the explicit attribute 'AddressLines'.
         * 
         * @return the value of the explicit attribute 'AddressLines'
         */
        virtual const List_IfcLabel_1_n &getAddressLines() const;
        /**
         * Sets the value of the explicit attribute 'AddressLines'.
         * 
         * @param value
         */
        virtual void setAddressLines(const List_IfcLabel_1_n &value);
        /**
         * Gets the value of the explicit attribute 'PostalBox'.
         * 
         */
        virtual IfcLabel getPostalBox();
        /**
         * (const) Returns the value of the explicit attribute 'PostalBox'.
         * 
         * @return the value of the explicit attribute 'PostalBox'
         */
        virtual const IfcLabel getPostalBox() const;
        /**
         * Sets the value of the explicit attribute 'PostalBox'.
         * 
         * @param value
         */
        virtual void setPostalBox(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'Town'.
         * 
         */
        virtual IfcLabel getTown();
        /**
         * (const) Returns the value of the explicit attribute 'Town'.
         * 
         * @return the value of the explicit attribute 'Town'
         */
        virtual const IfcLabel getTown() const;
        /**
         * Sets the value of the explicit attribute 'Town'.
         * 
         * @param value
         */
        virtual void setTown(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'Region'.
         * 
         */
        virtual IfcLabel getRegion();
        /**
         * (const) Returns the value of the explicit attribute 'Region'.
         * 
         * @return the value of the explicit attribute 'Region'
         */
        virtual const IfcLabel getRegion() const;
        /**
         * Sets the value of the explicit attribute 'Region'.
         * 
         * @param value
         */
        virtual void setRegion(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'PostalCode'.
         * 
         */
        virtual IfcLabel getPostalCode();
        /**
         * (const) Returns the value of the explicit attribute 'PostalCode'.
         * 
         * @return the value of the explicit attribute 'PostalCode'
         */
        virtual const IfcLabel getPostalCode() const;
        /**
         * Sets the value of the explicit attribute 'PostalCode'.
         * 
         * @param value
         */
        virtual void setPostalCode(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'Country'.
         * 
         */
        virtual IfcLabel getCountry();
        /**
         * (const) Returns the value of the explicit attribute 'Country'.
         * 
         * @return the value of the explicit attribute 'Country'
         */
        virtual const IfcLabel getCountry() const;
        /**
         * Sets the value of the explicit attribute 'Country'.
         * 
         * @param value
         */
        virtual void setCountry(const IfcLabel &value);
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
        Step::String m_internalLocation;
        /**
         */
        List_IfcLabel_1_n m_addressLines;
        /**
         */
        Step::String m_postalBox;
        /**
         */
        Step::String m_town;
        /**
         */
        Step::String m_region;
        /**
         */
        Step::String m_postalCode;
        /**
         */
        Step::String m_country;

    };

}

#endif // IFC2X3_IFCPOSTALADDRESS_H
