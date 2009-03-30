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
 *     Copyright (C) 2009 CSTB                                             *
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

#ifndef IFC2X3_IFCTEXTSTYLEWITHBOXCHARACTERISTICS_H
#define IFC2X3_IFCTEXTSTYLEWITHBOXCHARACTERISTICS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcSizeSelect;

    /**
     * Generated class for the IfcTextStyleWithBoxCharacteristics Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcTextStyleWithBoxCharacteristics : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'BoxHeight'.
         * 
         */
        virtual IfcPositiveLengthMeasure getBoxHeight();
        /**
         * (const) Returns the value of the explicit attribute 'BoxHeight'.
         * 
         * @return the value of the explicit attribute 'BoxHeight'
         */
        virtual const IfcPositiveLengthMeasure getBoxHeight() const;
        /**
         * Sets the value of the explicit attribute 'BoxHeight'.
         * 
         * @param value
         */
        virtual void setBoxHeight(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'BoxHeight'.
         * 
         */
        virtual void unsetBoxHeight();
        /**
         * Test if the attribute 'BoxHeight' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testBoxHeight() const;
        /**
         * Gets the value of the explicit attribute 'BoxWidth'.
         * 
         */
        virtual IfcPositiveLengthMeasure getBoxWidth();
        /**
         * (const) Returns the value of the explicit attribute 'BoxWidth'.
         * 
         * @return the value of the explicit attribute 'BoxWidth'
         */
        virtual const IfcPositiveLengthMeasure getBoxWidth() const;
        /**
         * Sets the value of the explicit attribute 'BoxWidth'.
         * 
         * @param value
         */
        virtual void setBoxWidth(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'BoxWidth'.
         * 
         */
        virtual void unsetBoxWidth();
        /**
         * Test if the attribute 'BoxWidth' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testBoxWidth() const;
        /**
         * Gets the value of the explicit attribute 'BoxSlantAngle'.
         * 
         */
        virtual IfcPlaneAngleMeasure getBoxSlantAngle();
        /**
         * (const) Returns the value of the explicit attribute 'BoxSlantAngle'.
         * 
         * @return the value of the explicit attribute 'BoxSlantAngle'
         */
        virtual const IfcPlaneAngleMeasure getBoxSlantAngle() const;
        /**
         * Sets the value of the explicit attribute 'BoxSlantAngle'.
         * 
         * @param value
         */
        virtual void setBoxSlantAngle(IfcPlaneAngleMeasure value);
        /**
         * unset the attribute 'BoxSlantAngle'.
         * 
         */
        virtual void unsetBoxSlantAngle();
        /**
         * Test if the attribute 'BoxSlantAngle' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testBoxSlantAngle() const;
        /**
         * Gets the value of the explicit attribute 'BoxRotateAngle'.
         * 
         */
        virtual IfcPlaneAngleMeasure getBoxRotateAngle();
        /**
         * (const) Returns the value of the explicit attribute 'BoxRotateAngle'.
         * 
         * @return the value of the explicit attribute 'BoxRotateAngle'
         */
        virtual const IfcPlaneAngleMeasure getBoxRotateAngle() const;
        /**
         * Sets the value of the explicit attribute 'BoxRotateAngle'.
         * 
         * @param value
         */
        virtual void setBoxRotateAngle(IfcPlaneAngleMeasure value);
        /**
         * unset the attribute 'BoxRotateAngle'.
         * 
         */
        virtual void unsetBoxRotateAngle();
        /**
         * Test if the attribute 'BoxRotateAngle' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testBoxRotateAngle() const;
        /**
         * Gets the value of the explicit attribute 'CharacterSpacing'.
         * 
         */
        virtual IfcSizeSelect *getCharacterSpacing();
        /**
         * (const) Returns the value of the explicit attribute 'CharacterSpacing'.
         * 
         * @return the value of the explicit attribute 'CharacterSpacing'
         */
        virtual const IfcSizeSelect *getCharacterSpacing() const;
        /**
         * Sets the value of the explicit attribute 'CharacterSpacing'.
         * 
         * @param value
         */
        virtual void setCharacterSpacing(const Step::RefPtr< IfcSizeSelect > &value);
        /**
         * unset the attribute 'CharacterSpacing'.
         * 
         */
        virtual void unsetCharacterSpacing();
        /**
         * Test if the attribute 'CharacterSpacing' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCharacterSpacing() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTextStyleWithBoxCharacteristics(Step::Id id, Step::SPFData *args);
        virtual ~IfcTextStyleWithBoxCharacteristics();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTextStyleWithBoxCharacteristics &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_boxHeight;
        /**
         */
        Step::Real m_boxWidth;
        /**
         */
        Step::Real m_boxSlantAngle;
        /**
         */
        Step::Real m_boxRotateAngle;
        /**
         */
        Step::RefPtr< IfcSizeSelect > m_characterSpacing;

    };

}

#endif // IFC2X3_IFCTEXTSTYLEWITHBOXCHARACTERISTICS_H
