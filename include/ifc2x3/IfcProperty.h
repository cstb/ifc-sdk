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

#ifndef IFC2X3_IFCPROPERTY_H
#define IFC2X3_IFCPROPERTY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <string>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcComplexProperty;
    class IfcPropertyDependencyRelationship;

    /**
     */
    class IFC2X3_DLL_DEF IfcProperty : public Step::BaseEntity {
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
        IfcIdentifier getName();
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        void setName(const IfcIdentifier &value);
        /**
         */
        IfcText getDescription();
        /**
         * Sets the value of the explicit attribute 'Description'.
         * 
         * @param value
         */
        void setDescription(const IfcText &value);
        /**
         */
        Step::Set< Step::ObsPtr< IfcPropertyDependencyRelationship > > &getPropertyForDependance();
        /**
         */
        Step::Set< Step::ObsPtr< IfcPropertyDependencyRelationship > > &getPropertyDependsOn();
        /**
         */
        Step::Set< Step::ObsPtr< IfcComplexProperty > > &getPartOfComplex();
        /**
         */
        virtual void release();
        friend class IfcPropertyDependencyRelationship;
        friend class ExpressDataSet;
        friend class IfcComplexProperty;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcProperty(Step::Id id, Step::SPFData *args);
        virtual ~IfcProperty();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcProperty &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_name;
        /**
         */
        std::string m_description;
        /**
         */
        Step::Set< Step::ObsPtr< IfcPropertyDependencyRelationship > > m_propertyForDependance;
        /**
         */
        Step::Set< Step::ObsPtr< IfcPropertyDependencyRelationship > > m_propertyDependsOn;
        /**
         */
        Step::Set< Step::ObsPtr< IfcComplexProperty > > m_partOfComplex;

    };

}

#endif // IFC2X3_IFCPROPERTY_H
