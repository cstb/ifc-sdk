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

#ifndef IFC2X3_IFCPROPERTYENUMERATEDVALUE_H
#define IFC2X3_IFCPROPERTYENUMERATEDVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcSimpleProperty.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcPropertyEnumeration;

    /**
     */
    class IFC2X3_DLL_DEF IfcPropertyEnumeratedValue : public IfcSimpleProperty {
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
         * Gets the value of the explicit attribute 'EnumerationValues'.
         * 
         */
        virtual List_IfcValue_1_n &getEnumerationValues();
        /**
         * (const) Returns the value of the explicit attribute 'EnumerationValues'.
         * 
         * @return the value of the explicit attribute 'EnumerationValues'
         */
        virtual const List_IfcValue_1_n &getEnumerationValues() const;
        /**
         * Sets the value of the explicit attribute 'EnumerationValues'.
         * 
         * @param value
         */
        virtual void setEnumerationValues(const List_IfcValue_1_n &value);
        /**
         * Gets the value of the explicit attribute 'EnumerationReference'.
         * 
         */
        virtual IfcPropertyEnumeration *getEnumerationReference();
        /**
         * (const) Returns the value of the explicit attribute 'EnumerationReference'.
         * 
         * @return the value of the explicit attribute 'EnumerationReference'
         */
        virtual const IfcPropertyEnumeration *getEnumerationReference() const;
        /**
         * Sets the value of the explicit attribute 'EnumerationReference'.
         * 
         * @param value
         */
        virtual void setEnumerationReference(const Step::RefPtr< IfcPropertyEnumeration > &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPropertyEnumeratedValue(Step::Id id, Step::SPFData *args);
        virtual ~IfcPropertyEnumeratedValue();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPropertyEnumeratedValue &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        List_IfcValue_1_n m_enumerationValues;
        /**
         */
        Step::RefPtr< IfcPropertyEnumeration > m_enumerationReference;

    };

}

#endif // IFC2X3_IFCPROPERTYENUMERATEDVALUE_H
