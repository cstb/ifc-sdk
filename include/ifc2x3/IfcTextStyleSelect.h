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

#ifndef IFC2X3_IFCTEXTSTYLESELECT_H
#define IFC2X3_IFCTEXTSTYLESELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcTextStyleTextModel;
    class IfcTextStyleWithBoxCharacteristics;

    /**
     */
    class IFC2X3_DLL_DEF IfcTextStyleSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcTextStyleSelect_select {
            IFCTEXTSTYLEWITHBOXCHARACTERISTICS,
            IFCTEXTSTYLETEXTMODEL,
            UNSET,
        };

        union IfcTextStyleSelect_union {
            IfcTextStyleWithBoxCharacteristics *m_IfcTextStyleWithBoxCharacteristics;
            IfcTextStyleTextModel *m_IfcTextStyleTextModel;
        };
        /**
         */
        IfcTextStyleSelect();
        virtual ~IfcTextStyleSelect();
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
        virtual void copy(const IfcTextStyleSelect &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcTextStyleSelect_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcTextStyleWithBoxCharacteristics *getIfcTextStyleWithBoxCharacteristics();
        /**
         * @param value
         */
        void setIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics *value);
        /**
         */
        IfcTextStyleTextModel *getIfcTextStyleTextModel();
        /**
         * @param value
         */
        void setIfcTextStyleTextModel(IfcTextStyleTextModel *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcTextStyleSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcTextStyleSelect_select m_type;
        /**
         */
        IfcTextStyleSelect_union m_IfcTextStyleSelect_union;

    };

}

#endif // IFC2X3_IFCTEXTSTYLESELECT_H
