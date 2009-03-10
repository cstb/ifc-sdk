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

#ifndef IFC2X3_IFCRELDECOMPOSES_H
#define IFC2X3_IFCRELDECOMPOSES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <stdexcept>
#include <Step/Referenced.h>
#include "ifc2x3/IfcRelationship.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class IfcObjectDefinition;
    class IfcRelDecomposes;

    /**
     */
    class Inverted_IfcRelDecomposes_RelatedObjects_type : public Set_IfcObjectDefinition_1_n {
    public:
        /**
         */
        typedef Set_IfcObjectDefinition_1_n::size_type size_type;

        /**
         */
        IfcRelDecomposes *mOwner;
        /**
         */
        Inverted_IfcRelDecomposes_RelatedObjects_type();
        /**
         * @param owner
         */
        void setOwner(IfcRelDecomposes *owner);
        /**
         * @param value
         */
        virtual void insert(const Step::RefPtr< IfcObjectDefinition > &value) throw(std::out_of_range);
        /**
         * @param value
         */
        virtual size_type erase(const Step::RefPtr< IfcObjectDefinition > &value);

    };

    class CopyOp;
    class IfcObjectDefinition;

    /**
     */
    class IFC2X3_DLL_DEF IfcRelDecomposes : public IfcRelationship {
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
         * Gets the value of the explicit attribute 'RelatingObject'.
         * 
         */
        virtual IfcObjectDefinition *getRelatingObject();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingObject'.
         * 
         * @return the value of the explicit attribute 'RelatingObject'
         */
        virtual const IfcObjectDefinition *getRelatingObject() const;
        /**
         * Sets the value of the explicit attribute 'RelatingObject'.
         * 
         * @param value
         */
        virtual void setRelatingObject(const Step::RefPtr< IfcObjectDefinition > &value);
        /**
         * Gets the value of the explicit attribute 'RelatedObjects'.
         * 
         */
        virtual Set_IfcObjectDefinition_1_n &getRelatedObjects();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedObjects'.
         * 
         * @return the value of the explicit attribute 'RelatedObjects'
         */
        virtual const Set_IfcObjectDefinition_1_n &getRelatedObjects() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelDecomposes(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelDecomposes();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelDecomposes &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcObjectDefinition > m_relatingObject;
        /**
         */
        Inverted_IfcRelDecomposes_RelatedObjects_type m_relatedObjects;

    };

}

#endif // IFC2X3_IFCRELDECOMPOSES_H
