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

#include <ifc2x3/DefinedTypes.h>

#include <Step/BaseEntity.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcSurfaceTexture Entity.
     *
     */
    class IFC2X3_EXPORT IfcSurfaceTexture : public Step::BaseEntity
    {

        // Attributes
        Step::Boolean m_RepeatS;
        Step::Boolean m_RepeatT;
        IfcSurfaceTextureEnum m_TextureType;
        Step::RefPtr< IfcCartesianTransformationOperator2D > m_TextureTransform;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute RepeatS
        /// @{
        virtual Step::Boolean getRepeatS();
        virtual Step::Boolean getRepeatS() const;
        virtual void setRepeatS(Step::Boolean value);
        virtual void unsetRepeatS();
        virtual bool testRepeatS() const;
        /// @}

        /// Attribute RepeatT
        /// @{
        virtual Step::Boolean getRepeatT();
        virtual Step::Boolean getRepeatT() const;
        virtual void setRepeatT(Step::Boolean value);
        virtual void unsetRepeatT();
        virtual bool testRepeatT() const;
        /// @}

        /// Attribute TextureType
        /// @{
        virtual IfcSurfaceTextureEnum getTextureType();
        virtual IfcSurfaceTextureEnum getTextureType() const;
        virtual void setTextureType(IfcSurfaceTextureEnum value);
        virtual void unsetTextureType();
        virtual bool testTextureType() const;
        /// @}

        /// Attribute TextureTransform
        /// @{
        virtual IfcCartesianTransformationOperator2D *getTextureTransform();
        virtual const IfcCartesianTransformationOperator2D *getTextureTransform() const;
        virtual void setTextureTransform(const Step::RefPtr< IfcCartesianTransformationOperator2D > &value);
        virtual void unsetTextureTransform();
        virtual bool testTextureTransform() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcSurfaceTexture(Step::Id id, Step::SPFData *args);
        virtual ~IfcSurfaceTexture();

        virtual bool init();

        virtual void copy(const IfcSurfaceTexture &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3