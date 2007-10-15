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

#ifndef IFC2X3_IFCPROFILEPROPERTIES_H
#define IFC2X3_IFCPROFILEPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcProfileDef;

    /**
     */
    class IFC2X3_DLL_DEF IfcProfileProperties : public Step::BaseEntity {
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
        IfcLabel getProfileName();
        /**
         * Sets the value of the explicit attribute 'ProfileName'.
         * 
         * @param value
         */
        void setProfileName(const IfcLabel &value);
        /**
         */
        IfcProfileDef *getProfileDefinition();
        /**
         * Sets the value of the explicit attribute 'ProfileDefinition'.
         * 
         * @param value
         */
        void setProfileDefinition(const Step::RefPtr< IfcProfileDef > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcProfileProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcProfileProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcProfileProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_profileName;
        /**
         */
        Step::RefPtr< IfcProfileDef > m_profileDefinition;

    };

}

#endif // IFC2X3_IFCPROFILEPROPERTIES_H
