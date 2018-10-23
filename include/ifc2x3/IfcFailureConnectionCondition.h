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

#include <ifc2x3/IfcStructuralConnectionCondition.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcFailureConnectionCondition Entity.
     *
     */
    class IFC2X3_EXPORT IfcFailureConnectionCondition : public IfcStructuralConnectionCondition
    {

        // Attributes
        IfcForceMeasure m_TensionFailureX;
        IfcForceMeasure m_TensionFailureY;
        IfcForceMeasure m_TensionFailureZ;
        IfcForceMeasure m_CompressionFailureX;
        IfcForceMeasure m_CompressionFailureY;
        IfcForceMeasure m_CompressionFailureZ;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute TensionFailureX
        /// @{
        virtual IfcForceMeasure getTensionFailureX();
        virtual IfcForceMeasure getTensionFailureX() const;
        virtual void setTensionFailureX(IfcForceMeasure value);
        virtual void unsetTensionFailureX();
        virtual bool testTensionFailureX() const;
        /// @}

        /// Attribute TensionFailureY
        /// @{
        virtual IfcForceMeasure getTensionFailureY();
        virtual IfcForceMeasure getTensionFailureY() const;
        virtual void setTensionFailureY(IfcForceMeasure value);
        virtual void unsetTensionFailureY();
        virtual bool testTensionFailureY() const;
        /// @}

        /// Attribute TensionFailureZ
        /// @{
        virtual IfcForceMeasure getTensionFailureZ();
        virtual IfcForceMeasure getTensionFailureZ() const;
        virtual void setTensionFailureZ(IfcForceMeasure value);
        virtual void unsetTensionFailureZ();
        virtual bool testTensionFailureZ() const;
        /// @}

        /// Attribute CompressionFailureX
        /// @{
        virtual IfcForceMeasure getCompressionFailureX();
        virtual IfcForceMeasure getCompressionFailureX() const;
        virtual void setCompressionFailureX(IfcForceMeasure value);
        virtual void unsetCompressionFailureX();
        virtual bool testCompressionFailureX() const;
        /// @}

        /// Attribute CompressionFailureY
        /// @{
        virtual IfcForceMeasure getCompressionFailureY();
        virtual IfcForceMeasure getCompressionFailureY() const;
        virtual void setCompressionFailureY(IfcForceMeasure value);
        virtual void unsetCompressionFailureY();
        virtual bool testCompressionFailureY() const;
        /// @}

        /// Attribute CompressionFailureZ
        /// @{
        virtual IfcForceMeasure getCompressionFailureZ();
        virtual IfcForceMeasure getCompressionFailureZ() const;
        virtual void setCompressionFailureZ(IfcForceMeasure value);
        virtual void unsetCompressionFailureZ();
        virtual bool testCompressionFailureZ() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcFailureConnectionCondition(Step::Id id, Step::SPFData *args);
        virtual ~IfcFailureConnectionCondition();

        virtual bool init();

        virtual void copy(const IfcFailureConnectionCondition &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3