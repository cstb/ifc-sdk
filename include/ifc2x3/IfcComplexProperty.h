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

#ifndef IFC2X3_IFCCOMPLEXPROPERTY_H
#define IFC2X3_IFCCOMPLEXPROPERTY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>
#include <ifc2x3/IfcProperty.h>

#include <stdexcept>
#include <Step/Referenced.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/String.h>

namespace ifc2x3 {

    class IfcComplexProperty;

    /**
     */
    class Inverted_IfcComplexProperty_HasProperties_type : public Set_IfcProperty_1_n {
    public:
        /**
         */
        typedef Set_IfcProperty_1_n::size_type size_type;

        /**
         */
        IfcComplexProperty *mOwner;
        /**
         */
        Inverted_IfcComplexProperty_HasProperties_type();
        /**
         * @param owner
         */
        void setOwner(IfcComplexProperty *owner);
        /**
         * @param value
         */
        virtual void insert(const Step::RefPtr< IfcProperty > &value) throw(std::out_of_range);
        /**
         * @param value
         */
        virtual size_type erase(const Step::RefPtr< IfcProperty > &value);

    };

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcComplexProperty : public IfcProperty {
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
         * Gets the value of the explicit attribute 'UsageName'.
         * 
         */
        virtual IfcIdentifier getUsageName();
        /**
         * (const) Returns the value of the explicit attribute 'UsageName'.
         * 
         * @return the value of the explicit attribute 'UsageName'
         */
        virtual const IfcIdentifier getUsageName() const;
        /**
         * Sets the value of the explicit attribute 'UsageName'.
         * 
         * @param value
         */
        virtual void setUsageName(const IfcIdentifier &value);
        /**
         * Gets the value of the explicit attribute 'HasProperties'.
         * 
         */
        virtual Set_IfcProperty_1_n &getHasProperties();
        /**
         * (const) Returns the value of the explicit attribute 'HasProperties'.
         * 
         * @return the value of the explicit attribute 'HasProperties'
         */
        virtual const Set_IfcProperty_1_n &getHasProperties() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcComplexProperty(Step::Id id, Step::SPFData *args);
        virtual ~IfcComplexProperty();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcComplexProperty &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_usageName;
        /**
         */
        Inverted_IfcComplexProperty_HasProperties_type m_hasProperties;

    };

}

#endif // IFC2X3_IFCCOMPLEXPROPERTY_H
