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

#ifndef IFC2X3_IFCSOUNDPROPERTIES_H
#define IFC2X3_IFCSOUNDPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcPropertySetDefinition.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcSoundProperties Entity.
     * 
     */
    class IFC2X3_EXPORT IfcSoundProperties : public IfcPropertySetDefinition {
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
         * Gets the value of the explicit attribute 'IsAttenuating'.
         * 
         */
        virtual IfcBoolean getIsAttenuating();
        /**
         * (const) Returns the value of the explicit attribute 'IsAttenuating'.
         * 
         * @return the value of the explicit attribute 'IsAttenuating'
         */
        virtual const IfcBoolean getIsAttenuating() const;
        /**
         * Sets the value of the explicit attribute 'IsAttenuating'.
         * 
         * @param value
         */
        virtual void setIsAttenuating(IfcBoolean value);
        /**
         * unset the attribute 'IsAttenuating'.
         * 
         */
        virtual void unsetIsAttenuating();
        /**
         * Test if the attribute 'IsAttenuating' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIsAttenuating() const;
        /**
         * Gets the value of the explicit attribute 'SoundScale'.
         * 
         */
        virtual IfcSoundScaleEnum getSoundScale();
        /**
         * (const) Returns the value of the explicit attribute 'SoundScale'.
         * 
         * @return the value of the explicit attribute 'SoundScale'
         */
        virtual const IfcSoundScaleEnum getSoundScale() const;
        /**
         * Sets the value of the explicit attribute 'SoundScale'.
         * 
         * @param value
         */
        virtual void setSoundScale(IfcSoundScaleEnum value);
        /**
         * unset the attribute 'SoundScale'.
         * 
         */
        virtual void unsetSoundScale();
        /**
         * Test if the attribute 'SoundScale' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSoundScale() const;
        /**
         * Gets the value of the explicit attribute 'SoundValues'.
         * 
         */
        virtual List_IfcSoundValue_1_8 &getSoundValues();
        /**
         * (const) Returns the value of the explicit attribute 'SoundValues'.
         * 
         * @return the value of the explicit attribute 'SoundValues'
         */
        virtual const List_IfcSoundValue_1_8 &getSoundValues() const;
        /**
         * Sets the value of the explicit attribute 'SoundValues'.
         * 
         * @param value
         */
        virtual void setSoundValues(const List_IfcSoundValue_1_8 &value);
        /**
         * unset the attribute 'SoundValues'.
         * 
         */
        virtual void unsetSoundValues();
        /**
         * Test if the attribute 'SoundValues' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSoundValues() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSoundProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcSoundProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSoundProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Boolean m_isAttenuating;
        /**
         */
        IfcSoundScaleEnum m_soundScale;
        /**
         */
        List_IfcSoundValue_1_8 m_soundValues;

    };

}

#endif // IFC2X3_IFCSOUNDPROPERTIES_H
