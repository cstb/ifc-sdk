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

#ifndef IFC2X3_IFCSTRUCTURALLOADSINGLEDISPLACEMENT_H
#define IFC2X3_IFCSTRUCTURALLOADSINGLEDISPLACEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcStructuralLoadStatic.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcStructuralLoadSingleDisplacement : public IfcStructuralLoadStatic {
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
        IfcLengthMeasure getDisplacementX();
        /**
         * Sets the value of the explicit attribute 'DisplacementX'.
         * 
         * @param value
         */
        void setDisplacementX(IfcLengthMeasure value);
        /**
         */
        IfcLengthMeasure getDisplacementY();
        /**
         * Sets the value of the explicit attribute 'DisplacementY'.
         * 
         * @param value
         */
        void setDisplacementY(IfcLengthMeasure value);
        /**
         */
        IfcLengthMeasure getDisplacementZ();
        /**
         * Sets the value of the explicit attribute 'DisplacementZ'.
         * 
         * @param value
         */
        void setDisplacementZ(IfcLengthMeasure value);
        /**
         */
        IfcPlaneAngleMeasure getRotationalDisplacementRX();
        /**
         * Sets the value of the explicit attribute 'RotationalDisplacementRX'.
         * 
         * @param value
         */
        void setRotationalDisplacementRX(IfcPlaneAngleMeasure value);
        /**
         */
        IfcPlaneAngleMeasure getRotationalDisplacementRY();
        /**
         * Sets the value of the explicit attribute 'RotationalDisplacementRY'.
         * 
         * @param value
         */
        void setRotationalDisplacementRY(IfcPlaneAngleMeasure value);
        /**
         */
        IfcPlaneAngleMeasure getRotationalDisplacementRZ();
        /**
         * Sets the value of the explicit attribute 'RotationalDisplacementRZ'.
         * 
         * @param value
         */
        void setRotationalDisplacementRZ(IfcPlaneAngleMeasure value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralLoadSingleDisplacement(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralLoadSingleDisplacement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralLoadSingleDisplacement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_displacementX;
        /**
         */
        Step::Real m_displacementY;
        /**
         */
        Step::Real m_displacementZ;
        /**
         */
        Step::Real m_rotationalDisplacementRX;
        /**
         */
        Step::Real m_rotationalDisplacementRY;
        /**
         */
        Step::Real m_rotationalDisplacementRZ;

    };

}

#endif // IFC2X3_IFCSTRUCTURALLOADSINGLEDISPLACEMENT_H
