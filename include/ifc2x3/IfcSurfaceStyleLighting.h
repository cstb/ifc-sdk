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

#ifndef IFC2X3_IFCSURFACESTYLELIGHTING_H
#define IFC2X3_IFCSURFACESTYLELIGHTING_H
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
    class IfcColourRgb;

    /**
     * Generated class for the IfcSurfaceStyleLighting Entity.
     * 
     */
    class IFC2X3_EXPORT IfcSurfaceStyleLighting : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'DiffuseTransmissionColour'.
         * 
         */
        virtual IfcColourRgb *getDiffuseTransmissionColour();
        /**
         * (const) Returns the value of the explicit attribute 'DiffuseTransmissionColour'.
         * 
         * @return the value of the explicit attribute 'DiffuseTransmissionColour'
         */
        virtual const IfcColourRgb *getDiffuseTransmissionColour() const;
        /**
         * Sets the value of the explicit attribute 'DiffuseTransmissionColour'.
         * 
         * @param value
         */
        virtual void setDiffuseTransmissionColour(const Step::RefPtr< IfcColourRgb > &value);
        /**
         * unset the attribute 'DiffuseTransmissionColour'.
         * 
         */
        virtual void unsetDiffuseTransmissionColour();
        /**
         * Test if the attribute 'DiffuseTransmissionColour' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDiffuseTransmissionColour() const;
        /**
         * Gets the value of the explicit attribute 'DiffuseReflectionColour'.
         * 
         */
        virtual IfcColourRgb *getDiffuseReflectionColour();
        /**
         * (const) Returns the value of the explicit attribute 'DiffuseReflectionColour'.
         * 
         * @return the value of the explicit attribute 'DiffuseReflectionColour'
         */
        virtual const IfcColourRgb *getDiffuseReflectionColour() const;
        /**
         * Sets the value of the explicit attribute 'DiffuseReflectionColour'.
         * 
         * @param value
         */
        virtual void setDiffuseReflectionColour(const Step::RefPtr< IfcColourRgb > &value);
        /**
         * unset the attribute 'DiffuseReflectionColour'.
         * 
         */
        virtual void unsetDiffuseReflectionColour();
        /**
         * Test if the attribute 'DiffuseReflectionColour' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDiffuseReflectionColour() const;
        /**
         * Gets the value of the explicit attribute 'TransmissionColour'.
         * 
         */
        virtual IfcColourRgb *getTransmissionColour();
        /**
         * (const) Returns the value of the explicit attribute 'TransmissionColour'.
         * 
         * @return the value of the explicit attribute 'TransmissionColour'
         */
        virtual const IfcColourRgb *getTransmissionColour() const;
        /**
         * Sets the value of the explicit attribute 'TransmissionColour'.
         * 
         * @param value
         */
        virtual void setTransmissionColour(const Step::RefPtr< IfcColourRgb > &value);
        /**
         * unset the attribute 'TransmissionColour'.
         * 
         */
        virtual void unsetTransmissionColour();
        /**
         * Test if the attribute 'TransmissionColour' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTransmissionColour() const;
        /**
         * Gets the value of the explicit attribute 'ReflectanceColour'.
         * 
         */
        virtual IfcColourRgb *getReflectanceColour();
        /**
         * (const) Returns the value of the explicit attribute 'ReflectanceColour'.
         * 
         * @return the value of the explicit attribute 'ReflectanceColour'
         */
        virtual const IfcColourRgb *getReflectanceColour() const;
        /**
         * Sets the value of the explicit attribute 'ReflectanceColour'.
         * 
         * @param value
         */
        virtual void setReflectanceColour(const Step::RefPtr< IfcColourRgb > &value);
        /**
         * unset the attribute 'ReflectanceColour'.
         * 
         */
        virtual void unsetReflectanceColour();
        /**
         * Test if the attribute 'ReflectanceColour' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testReflectanceColour() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSurfaceStyleLighting(Step::Id id, Step::SPFData *args);
        virtual ~IfcSurfaceStyleLighting();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSurfaceStyleLighting &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcColourRgb > m_diffuseTransmissionColour;
        /**
         */
        Step::RefPtr< IfcColourRgb > m_diffuseReflectionColour;
        /**
         */
        Step::RefPtr< IfcColourRgb > m_transmissionColour;
        /**
         */
        Step::RefPtr< IfcColourRgb > m_reflectanceColour;

    };

}

#endif // IFC2X3_IFCSURFACESTYLELIGHTING_H
