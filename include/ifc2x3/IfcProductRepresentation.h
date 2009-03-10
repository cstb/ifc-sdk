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

#ifndef IFC2X3_IFCPRODUCTREPRESENTATION_H
#define IFC2X3_IFCPRODUCTREPRESENTATION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <stdexcept>
#include <Step/Referenced.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/String.h>

namespace ifc2x3 {

    class IfcProductRepresentation;
    class IfcRepresentation;

    /**
     */
    class Inverted_IfcProductRepresentation_Representations_type : public List_IfcRepresentation_1_n {
    public:
        /**
         */
        typedef List_IfcRepresentation_1_n::iterator iterator;

        /**
         */
        IfcProductRepresentation *mOwner;
        /**
         */
        Inverted_IfcProductRepresentation_Representations_type();
        /**
         * @param owner
         */
        void setOwner(IfcProductRepresentation *owner);
        /**
         * @param value
         */
        virtual void push_back(const Step::RefPtr< IfcRepresentation > &value) throw(std::out_of_range);
        /**
         * @param value
         */
        virtual iterator erase(const Step::RefPtr< IfcRepresentation > &value);

    };

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcProductRepresentation : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'Name'.
         * 
         */
        virtual IfcLabel getName();
        /**
         * (const) Returns the value of the explicit attribute 'Name'.
         * 
         * @return the value of the explicit attribute 'Name'
         */
        virtual const IfcLabel getName() const;
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        virtual void setName(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'Description'.
         * 
         */
        virtual IfcText getDescription();
        /**
         * (const) Returns the value of the explicit attribute 'Description'.
         * 
         * @return the value of the explicit attribute 'Description'
         */
        virtual const IfcText getDescription() const;
        /**
         * Sets the value of the explicit attribute 'Description'.
         * 
         * @param value
         */
        virtual void setDescription(const IfcText &value);
        /**
         * Gets the value of the explicit attribute 'Representations'.
         * 
         */
        virtual List_IfcRepresentation_1_n &getRepresentations();
        /**
         * (const) Returns the value of the explicit attribute 'Representations'.
         * 
         * @return the value of the explicit attribute 'Representations'
         */
        virtual const List_IfcRepresentation_1_n &getRepresentations() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcProductRepresentation(Step::Id id, Step::SPFData *args);
        virtual ~IfcProductRepresentation();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcProductRepresentation &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_name;
        /**
         */
        Step::String m_description;
        /**
         */
        Inverted_IfcProductRepresentation_Representations_type m_representations;

    };

}

#endif // IFC2X3_IFCPRODUCTREPRESENTATION_H
