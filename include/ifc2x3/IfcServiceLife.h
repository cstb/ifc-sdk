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

#ifndef IFC2X3_IFCSERVICELIFE_H
#define IFC2X3_IFCSERVICELIFE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcControl.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcServiceLife Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcServiceLife : public IfcControl {
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
         * Gets the value of the explicit attribute 'ServiceLifeType'.
         * 
         */
        virtual IfcServiceLifeTypeEnum getServiceLifeType();
        /**
         * (const) Returns the value of the explicit attribute 'ServiceLifeType'.
         * 
         * @return the value of the explicit attribute 'ServiceLifeType'
         */
        virtual const IfcServiceLifeTypeEnum getServiceLifeType() const;
        /**
         * Sets the value of the explicit attribute 'ServiceLifeType'.
         * 
         * @param value
         */
        virtual void setServiceLifeType(IfcServiceLifeTypeEnum value);
        /**
         * unset the attribute 'ServiceLifeType'.
         * 
         */
        virtual void unsetServiceLifeType();
        /**
         * Test if the attribute 'ServiceLifeType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testServiceLifeType() const;
        /**
         * Gets the value of the explicit attribute 'ServiceLifeDuration'.
         * 
         */
        virtual IfcTimeMeasure getServiceLifeDuration();
        /**
         * (const) Returns the value of the explicit attribute 'ServiceLifeDuration'.
         * 
         * @return the value of the explicit attribute 'ServiceLifeDuration'
         */
        virtual const IfcTimeMeasure getServiceLifeDuration() const;
        /**
         * Sets the value of the explicit attribute 'ServiceLifeDuration'.
         * 
         * @param value
         */
        virtual void setServiceLifeDuration(IfcTimeMeasure value);
        /**
         * unset the attribute 'ServiceLifeDuration'.
         * 
         */
        virtual void unsetServiceLifeDuration();
        /**
         * Test if the attribute 'ServiceLifeDuration' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testServiceLifeDuration() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcServiceLife(Step::Id id, Step::SPFData *args);
        virtual ~IfcServiceLife();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcServiceLife &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcServiceLifeTypeEnum m_serviceLifeType;
        /**
         */
        Step::Real m_serviceLifeDuration;

    };

}

#endif // IFC2X3_IFCSERVICELIFE_H
