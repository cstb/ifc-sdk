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

#ifndef IFC2X3_IFCTEXTSTYLEWITHBOXCHARACTERISTICS_H
#define IFC2X3_IFCTEXTSTYLEWITHBOXCHARACTERISTICS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcSizeSelect;

    /**
     */
    class IFC2X3_DLL_DEF IfcTextStyleWithBoxCharacteristics : public Step::BaseEntity {
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
        IfcPositiveLengthMeasure getBoxHeight();
        /**
         * Sets the value of the explicit attribute 'BoxHeight'.
         * 
         * @param value
         */
        void setBoxHeight(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getBoxWidth();
        /**
         * Sets the value of the explicit attribute 'BoxWidth'.
         * 
         * @param value
         */
        void setBoxWidth(IfcPositiveLengthMeasure value);
        /**
         */
        IfcPlaneAngleMeasure getBoxSlantAngle();
        /**
         * Sets the value of the explicit attribute 'BoxSlantAngle'.
         * 
         * @param value
         */
        void setBoxSlantAngle(IfcPlaneAngleMeasure value);
        /**
         */
        IfcPlaneAngleMeasure getBoxRotateAngle();
        /**
         * Sets the value of the explicit attribute 'BoxRotateAngle'.
         * 
         * @param value
         */
        void setBoxRotateAngle(IfcPlaneAngleMeasure value);
        /**
         */
        IfcSizeSelect *getCharacterSpacing();
        /**
         * Sets the value of the explicit attribute 'CharacterSpacing'.
         * 
         * @param value
         */
        void setCharacterSpacing(const Step::RefPtr< IfcSizeSelect > &value);
        /**
         */
        virtual void release();
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
