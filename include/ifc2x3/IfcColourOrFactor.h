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
 *     Copyright (C) 2008 CSTB                                             *
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

#ifndef IFC2X3_IFCCOLOURORFACTOR_H
#define IFC2X3_IFCCOLOURORFACTOR_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcColourRgb;

    /**
     */
    class IFC2X3_DLL_DEF IfcColourOrFactor : public Step::BaseObject {
    public:
        /**
 */
enum IfcColourOrFactor_select {
            IFCCOLOURRGB,
            IFCNORMALISEDRATIOMEASURE,
            UNSET,
        };

        union IfcColourOrFactor_union {
            IfcColourRgb *m_IfcColourRgb;
            IfcNormalisedRatioMeasure m_IfcNormalisedRatioMeasure;
        };
        /**
         */
        IfcColourOrFactor();
        virtual ~IfcColourOrFactor();
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
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcColourOrFactor &obj, const CopyOp &copyop);
        /**
         */
        std::string currentTypeName() const;
        /**
         */
        IfcColourOrFactor_select currentType() const;
        /**
         */
        void deleteUnion();
        /**
         */
        IfcColourRgb *getIfcColourRgb() const;
        /**
         * @param value
         */
        void setIfcColourRgb(IfcColourRgb *value);
        /**
         */
        IfcNormalisedRatioMeasure getIfcNormalisedRatioMeasure() const;
        /**
         * @param value
         */
        void setIfcNormalisedRatioMeasure(IfcNormalisedRatioMeasure value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcColourOrFactor(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcColourOrFactor_select m_type;
        /**
         */
        IfcColourOrFactor_union m_IfcColourOrFactor_union;

    };

}

#endif // IFC2X3_IFCCOLOURORFACTOR_H
