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

#ifndef IFC2X3_IFCHATCHLINEDISTANCESELECT_H
#define IFC2X3_IFCHATCHLINEDISTANCESELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcOneDirectionRepeatFactor;

    /**
     */
    class IFC2X3_DLL_DEF IfcHatchLineDistanceSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcHatchLineDistanceSelect_select {
            IFCONEDIRECTIONREPEATFACTOR,
            IFCPOSITIVELENGTHMEASURE,
            UNSET,
        };

        union IfcHatchLineDistanceSelect_union {
            IfcOneDirectionRepeatFactor *m_IfcOneDirectionRepeatFactor;
            IfcPositiveLengthMeasure m_IfcPositiveLengthMeasure;
        };
        /**
         */
        IfcHatchLineDistanceSelect();
        virtual ~IfcHatchLineDistanceSelect();
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
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcHatchLineDistanceSelect &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcHatchLineDistanceSelect_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcOneDirectionRepeatFactor *getIfcOneDirectionRepeatFactor();
        /**
         * @param value
         */
        void setIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor *value);
        /**
         */
        IfcPositiveLengthMeasure getIfcPositiveLengthMeasure();
        /**
         * @param value
         */
        void setIfcPositiveLengthMeasure(IfcPositiveLengthMeasure value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcHatchLineDistanceSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcHatchLineDistanceSelect_select m_type;
        /**
         */
        IfcHatchLineDistanceSelect_union m_IfcHatchLineDistanceSelect_union;

    };

}

#endif // IFC2X3_IFCHATCHLINEDISTANCESELECT_H
