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

#ifndef IFC2X3_IFCSURFACETEXTURE_H
#define IFC2X3_IFCSURFACETEXTURE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcCartesianTransformationOperator2D;

    /**
     * Generated class for the IfcSurfaceTexture Entity.
     * 
     */
    class IFC2X3_EXPORT IfcSurfaceTexture : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'RepeatS'.
         * 
         */
        virtual Step::Boolean getRepeatS();
        /**
         * (const) Returns the value of the explicit attribute 'RepeatS'.
         * 
         * @return the value of the explicit attribute 'RepeatS'
         */
        virtual const Step::Boolean getRepeatS() const;
        /**
         * Sets the value of the explicit attribute 'RepeatS'.
         * 
         * @param value
         */
        virtual void setRepeatS(Step::Boolean value);
        /**
         * unset the attribute 'RepeatS'.
         * 
         */
        virtual void unsetRepeatS();
        /**
         * Test if the attribute 'RepeatS' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRepeatS() const;
        /**
         * Gets the value of the explicit attribute 'RepeatT'.
         * 
         */
        virtual Step::Boolean getRepeatT();
        /**
         * (const) Returns the value of the explicit attribute 'RepeatT'.
         * 
         * @return the value of the explicit attribute 'RepeatT'
         */
        virtual const Step::Boolean getRepeatT() const;
        /**
         * Sets the value of the explicit attribute 'RepeatT'.
         * 
         * @param value
         */
        virtual void setRepeatT(Step::Boolean value);
        /**
         * unset the attribute 'RepeatT'.
         * 
         */
        virtual void unsetRepeatT();
        /**
         * Test if the attribute 'RepeatT' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRepeatT() const;
        /**
         * Gets the value of the explicit attribute 'TextureType'.
         * 
         */
        virtual IfcSurfaceTextureEnum getTextureType();
        /**
         * (const) Returns the value of the explicit attribute 'TextureType'.
         * 
         * @return the value of the explicit attribute 'TextureType'
         */
        virtual const IfcSurfaceTextureEnum getTextureType() const;
        /**
         * Sets the value of the explicit attribute 'TextureType'.
         * 
         * @param value
         */
        virtual void setTextureType(IfcSurfaceTextureEnum value);
        /**
         * unset the attribute 'TextureType'.
         * 
         */
        virtual void unsetTextureType();
        /**
         * Test if the attribute 'TextureType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTextureType() const;
        /**
         * Gets the value of the explicit attribute 'TextureTransform'.
         * 
         */
        virtual IfcCartesianTransformationOperator2D *getTextureTransform();
        /**
         * (const) Returns the value of the explicit attribute 'TextureTransform'.
         * 
         * @return the value of the explicit attribute 'TextureTransform'
         */
        virtual const IfcCartesianTransformationOperator2D *getTextureTransform() const;
        /**
         * Sets the value of the explicit attribute 'TextureTransform'.
         * 
         * @param value
         */
        virtual void setTextureTransform(const Step::RefPtr< IfcCartesianTransformationOperator2D > &value);
        /**
         * unset the attribute 'TextureTransform'.
         * 
         */
        virtual void unsetTextureTransform();
        /**
         * Test if the attribute 'TextureTransform' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTextureTransform() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSurfaceTexture(Step::Id id, Step::SPFData *args);
        virtual ~IfcSurfaceTexture();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSurfaceTexture &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Boolean m_repeatS;
        /**
         */
        Step::Boolean m_repeatT;
        /**
         */
        IfcSurfaceTextureEnum m_textureType;
        /**
         */
        Step::RefPtr< IfcCartesianTransformationOperator2D > m_textureTransform;

    };

}

#endif // IFC2X3_IFCSURFACETEXTURE_H
