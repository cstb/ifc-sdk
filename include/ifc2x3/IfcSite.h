#pragma once

// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009-2018 CSTB   
//   
// For further information please contact
//                                       
//         eveBIM-support@cstb.fr        
//   or                                  
//         CSTB DTI/MIC                  
//         290, route des Lucioles       
//         BP 209                        
//         06904 Sophia Antipolis, France
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


#include <ifc2x3/Export.h>

#include <ifc2x3/IfcSpatialStructureElement.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcSite Entity.
     *
     */
    class IFC2X3_EXPORT IfcSite : public IfcSpatialStructureElement
    {

        // Attributes
        IfcCompoundPlaneAngleMeasure m_RefLatitude;
        IfcCompoundPlaneAngleMeasure m_RefLongitude;
        IfcLengthMeasure m_RefElevation;
        IfcLabel m_LandTitleNumber;
        Step::RefPtr< IfcPostalAddress > m_SiteAddress;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute RefLatitude
        /// @{
        virtual IfcCompoundPlaneAngleMeasure &getRefLatitude();
        virtual const IfcCompoundPlaneAngleMeasure &getRefLatitude() const;
        virtual void setRefLatitude(const IfcCompoundPlaneAngleMeasure &value);
        virtual void unsetRefLatitude();
        virtual bool testRefLatitude() const;
        /// @}

        /// Attribute RefLongitude
        /// @{
        virtual IfcCompoundPlaneAngleMeasure &getRefLongitude();
        virtual const IfcCompoundPlaneAngleMeasure &getRefLongitude() const;
        virtual void setRefLongitude(const IfcCompoundPlaneAngleMeasure &value);
        virtual void unsetRefLongitude();
        virtual bool testRefLongitude() const;
        /// @}

        /// Attribute RefElevation
        /// @{
        virtual IfcLengthMeasure getRefElevation();
        virtual IfcLengthMeasure getRefElevation() const;
        virtual void setRefElevation(IfcLengthMeasure value);
        virtual void unsetRefElevation();
        virtual bool testRefElevation() const;
        /// @}

        /// Attribute LandTitleNumber
        /// @{
        virtual IfcLabel getLandTitleNumber();
        virtual const IfcLabel getLandTitleNumber() const;
        virtual void setLandTitleNumber(const IfcLabel &value);
        virtual void unsetLandTitleNumber();
        virtual bool testLandTitleNumber() const;
        /// @}

        /// Attribute SiteAddress
        /// @{
        virtual IfcPostalAddress *getSiteAddress();
        virtual const IfcPostalAddress *getSiteAddress() const;
        virtual void setSiteAddress(const Step::RefPtr< IfcPostalAddress > &value);
        virtual void unsetSiteAddress();
        virtual bool testSiteAddress() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcSite(Step::Id id, Step::SPFData *args);
        virtual ~IfcSite();

        virtual bool init();

        virtual void copy(const IfcSite &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3