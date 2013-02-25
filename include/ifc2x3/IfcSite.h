// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

#ifndef IFC2X3_IFCSITE_H
#define IFC2X3_IFCSITE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcSpatialStructureElement.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcPostalAddress;

    /**
     * Generated class for the IfcSite Entity.
     * 
     */
    class IFC2X3_EXPORT IfcSite : public IfcSpatialStructureElement {
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
         * Gets the value of the explicit attribute 'RefLatitude'.
         * 
         */
        virtual IfcCompoundPlaneAngleMeasure &getRefLatitude();
        /**
         * (const) Returns the value of the explicit attribute 'RefLatitude'.
         * 
         * @return the value of the explicit attribute 'RefLatitude'
         */
        virtual const IfcCompoundPlaneAngleMeasure &getRefLatitude() const;
        /**
         * Sets the value of the explicit attribute 'RefLatitude'.
         * 
         * @param value
         */
        virtual void setRefLatitude(const IfcCompoundPlaneAngleMeasure &value);
        /**
         * unset the attribute 'RefLatitude'.
         * 
         */
        virtual void unsetRefLatitude();
        /**
         * Test if the attribute 'RefLatitude' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRefLatitude() const;
        /**
         * Gets the value of the explicit attribute 'RefLongitude'.
         * 
         */
        virtual IfcCompoundPlaneAngleMeasure &getRefLongitude();
        /**
         * (const) Returns the value of the explicit attribute 'RefLongitude'.
         * 
         * @return the value of the explicit attribute 'RefLongitude'
         */
        virtual const IfcCompoundPlaneAngleMeasure &getRefLongitude() const;
        /**
         * Sets the value of the explicit attribute 'RefLongitude'.
         * 
         * @param value
         */
        virtual void setRefLongitude(const IfcCompoundPlaneAngleMeasure &value);
        /**
         * unset the attribute 'RefLongitude'.
         * 
         */
        virtual void unsetRefLongitude();
        /**
         * Test if the attribute 'RefLongitude' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRefLongitude() const;
        /**
         * Gets the value of the explicit attribute 'RefElevation'.
         * 
         */
        virtual IfcLengthMeasure getRefElevation();
        /**
         * (const) Returns the value of the explicit attribute 'RefElevation'.
         * 
         * @return the value of the explicit attribute 'RefElevation'
         */
        virtual const IfcLengthMeasure getRefElevation() const;
        /**
         * Sets the value of the explicit attribute 'RefElevation'.
         * 
         * @param value
         */
        virtual void setRefElevation(IfcLengthMeasure value);
        /**
         * unset the attribute 'RefElevation'.
         * 
         */
        virtual void unsetRefElevation();
        /**
         * Test if the attribute 'RefElevation' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRefElevation() const;
        /**
         * Gets the value of the explicit attribute 'LandTitleNumber'.
         * 
         */
        virtual IfcLabel getLandTitleNumber();
        /**
         * (const) Returns the value of the explicit attribute 'LandTitleNumber'.
         * 
         * @return the value of the explicit attribute 'LandTitleNumber'
         */
        virtual const IfcLabel getLandTitleNumber() const;
        /**
         * Sets the value of the explicit attribute 'LandTitleNumber'.
         * 
         * @param value
         */
        virtual void setLandTitleNumber(const IfcLabel &value);
        /**
         * unset the attribute 'LandTitleNumber'.
         * 
         */
        virtual void unsetLandTitleNumber();
        /**
         * Test if the attribute 'LandTitleNumber' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLandTitleNumber() const;
        /**
         * Gets the value of the explicit attribute 'SiteAddress'.
         * 
         */
        virtual IfcPostalAddress *getSiteAddress();
        /**
         * (const) Returns the value of the explicit attribute 'SiteAddress'.
         * 
         * @return the value of the explicit attribute 'SiteAddress'
         */
        virtual const IfcPostalAddress *getSiteAddress() const;
        /**
         * Sets the value of the explicit attribute 'SiteAddress'.
         * 
         * @param value
         */
        virtual void setSiteAddress(const Step::RefPtr< IfcPostalAddress > &value);
        /**
         * unset the attribute 'SiteAddress'.
         * 
         */
        virtual void unsetSiteAddress();
        /**
         * Test if the attribute 'SiteAddress' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSiteAddress() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSite(Step::Id id, Step::SPFData *args);
        virtual ~IfcSite();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSite &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        List_Integer_3_4 m_refLatitude;
        /**
         */
        List_Integer_3_4 m_refLongitude;
        /**
         */
        Step::Real m_refElevation;
        /**
         */
        Step::String m_landTitleNumber;
        /**
         */
        Step::RefPtr< IfcPostalAddress > m_siteAddress;

    };

}

#endif // IFC2X3_IFCSITE_H
