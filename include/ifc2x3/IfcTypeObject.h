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

#ifndef IFC2X3_IFCTYPEOBJECT_H
#define IFC2X3_IFCTYPEOBJECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <stdexcept>
#include <Step/Referenced.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/String.h>
#include "ifc2x3/IfcObjectDefinition.h"

namespace ifc2x3 {

    class IfcPropertySetDefinition;
    class IfcTypeObject;

    /**
     */
    class Inverted_IfcTypeObject_HasPropertySets_type : public Set_IfcPropertySetDefinition_1_n {
    public:
        /**
         */
        typedef Set_IfcPropertySetDefinition_1_n::size_type size_type;

        /**
         */
        IfcTypeObject *mOwner;
        /**
         */
        Inverted_IfcTypeObject_HasPropertySets_type();
        /**
         * @param owner
         */
        void setOwner(IfcTypeObject *owner);
        /**
         * @param value
         */
        virtual void insert(const Step::RefPtr< IfcPropertySetDefinition > &value) throw(std::out_of_range);
        /**
         * @param value
         */
        virtual size_type erase(const Step::RefPtr< IfcPropertySetDefinition > &value);

    };

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcTypeObject : public IfcObjectDefinition {
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
         * Gets the value of the explicit attribute 'ApplicableOccurrence'.
         * 
         */
        virtual IfcLabel getApplicableOccurrence();
        /**
         * (const) Returns the value of the explicit attribute 'ApplicableOccurrence'.
         * 
         * @return the value of the explicit attribute 'ApplicableOccurrence'
         */
        virtual const IfcLabel getApplicableOccurrence() const;
        /**
         * Sets the value of the explicit attribute 'ApplicableOccurrence'.
         * 
         * @param value
         */
        virtual void setApplicableOccurrence(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'HasPropertySets'.
         * 
         */
        virtual Set_IfcPropertySetDefinition_1_n &getHasPropertySets();
        /**
         * (const) Returns the value of the explicit attribute 'HasPropertySets'.
         * 
         * @return the value of the explicit attribute 'HasPropertySets'
         */
        virtual const Set_IfcPropertySetDefinition_1_n &getHasPropertySets() const;
        /**
         * Gets the value of the inverse attribute 'ObjectTypeOf'.
         * 
         */
        Inverse_Set_IfcRelDefinesByType_0_1 &getObjectTypeOf();
        /**
         * (const) Returns the value of the explicit attribute 'ObjectTypeOf'.
         * 
         * @return the value of the explicit attribute 'ObjectTypeOf'
         */
        virtual const Inverse_Set_IfcRelDefinesByType_0_1 &getObjectTypeOf() const;
        friend class IfcRelDefinesByType;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTypeObject(Step::Id id, Step::SPFData *args);
        virtual ~IfcTypeObject();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTypeObject &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_applicableOccurrence;
        /**
         */
        Inverted_IfcTypeObject_HasPropertySets_type m_hasPropertySets;
        /**
         */
        Inverse_Set_IfcRelDefinesByType_0_1 m_objectTypeOf;

    };

}

#endif // IFC2X3_IFCTYPEOBJECT_H
