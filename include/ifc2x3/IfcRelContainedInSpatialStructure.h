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

#ifndef IFC2X3_IFCRELCONTAINEDINSPATIALSTRUCTURE_H
#define IFC2X3_IFCRELCONTAINEDINSPATIALSTRUCTURE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <stdexcept>
#include <Step/Referenced.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>
#include "ifc2x3/IfcRelConnects.h"

namespace ifc2x3 {

    class IfcProduct;
    class IfcRelContainedInSpatialStructure;

    /**
     */
    class Inverted_IfcRelContainedInSpatialStructure_RelatedElements_type : public Set_IfcProduct_1_n {
    public:
        /**
         */
        typedef Set_IfcProduct_1_n::size_type size_type;

        /**
         */
        IfcRelContainedInSpatialStructure *mOwner;
        /**
         */
        Inverted_IfcRelContainedInSpatialStructure_RelatedElements_type();
        /**
         * @param owner
         */
        void setOwner(IfcRelContainedInSpatialStructure *owner);
        /**
         * @param value
         */
        virtual void insert(const Step::RefPtr< IfcProduct > &value) throw(std::out_of_range);
        /**
         * @param value
         */
        virtual size_type erase(const Step::RefPtr< IfcProduct > &value);

    };

    class CopyOp;
    class IfcSpatialStructureElement;

    /**
     */
    class IFC2X3_DLL_DEF IfcRelContainedInSpatialStructure : public IfcRelConnects {
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
         * Gets the value of the explicit attribute 'RelatedElements'.
         * 
         */
        virtual Set_IfcProduct_1_n &getRelatedElements();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedElements'.
         * 
         * @return the value of the explicit attribute 'RelatedElements'
         */
        virtual const Set_IfcProduct_1_n &getRelatedElements() const;
        /**
         * Gets the value of the explicit attribute 'RelatingStructure'.
         * 
         */
        virtual IfcSpatialStructureElement *getRelatingStructure();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingStructure'.
         * 
         * @return the value of the explicit attribute 'RelatingStructure'
         */
        virtual const IfcSpatialStructureElement *getRelatingStructure() const;
        /**
         * Sets the value of the explicit attribute 'RelatingStructure'.
         * 
         * @param value
         */
        virtual void setRelatingStructure(const Step::RefPtr< IfcSpatialStructureElement > &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelContainedInSpatialStructure(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelContainedInSpatialStructure();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelContainedInSpatialStructure &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverted_IfcRelContainedInSpatialStructure_RelatedElements_type m_relatedElements;
        /**
         */
        Step::RefPtr< IfcSpatialStructureElement > m_relatingStructure;

    };

}

#endif // IFC2X3_IFCRELCONTAINEDINSPATIALSTRUCTURE_H
