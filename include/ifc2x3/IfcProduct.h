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

#ifndef IFC2X3_IFCPRODUCT_H
#define IFC2X3_IFCPRODUCT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>
#include "ifc2x3/IfcObject.h"

namespace ifc2x3 {

    class CopyOp;
    class IfcObjectPlacement;
    class IfcProductRepresentation;

    /**
     */
    class IFC2X3_DLL_DEF IfcProduct : public IfcObject {
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
         * Gets the value of the explicit attribute 'ObjectPlacement'.
         * 
         */
        virtual IfcObjectPlacement *getObjectPlacement();
        /**
         * (const) Returns the value of the explicit attribute 'ObjectPlacement'.
         * 
         * @return the value of the explicit attribute 'ObjectPlacement'
         */
        virtual const IfcObjectPlacement *getObjectPlacement() const;
        /**
         * Sets the value of the explicit attribute 'ObjectPlacement'.
         * 
         * @param value
         */
        virtual void setObjectPlacement(const Step::RefPtr< IfcObjectPlacement > &value);
        /**
         * Gets the value of the explicit attribute 'Representation'.
         * 
         */
        virtual IfcProductRepresentation *getRepresentation();
        /**
         * (const) Returns the value of the explicit attribute 'Representation'.
         * 
         * @return the value of the explicit attribute 'Representation'
         */
        virtual const IfcProductRepresentation *getRepresentation() const;
        /**
         * Sets the value of the explicit attribute 'Representation'.
         * 
         * @param value
         */
        virtual void setRepresentation(const Step::RefPtr< IfcProductRepresentation > &value);
        /**
         * Gets the value of the inverse attribute 'ReferencedBy'.
         * 
         */
        Inverse_Set_IfcRelAssignsToProduct_0_n &getReferencedBy();
        /**
         * (const) Returns the value of the explicit attribute 'ReferencedBy'.
         * 
         * @return the value of the explicit attribute 'ReferencedBy'
         */
        virtual const Inverse_Set_IfcRelAssignsToProduct_0_n &getReferencedBy() const;
        friend class IfcRelAssignsToProduct;
        friend class Inverted_IfcRelContainedInSpatialStructure_RelatedElements_type;
        friend class Inverted_IfcRelReferencedInSpatialStructure_RelatedElements_type;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcProduct(Step::Id id, Step::SPFData *args);
        virtual ~IfcProduct();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcProduct &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcObjectPlacement > m_objectPlacement;
        /**
         */
        Step::RefPtr< IfcProductRepresentation > m_representation;
        /**
         */
        Inverse_Set_IfcRelAssignsToProduct_0_n m_referencedBy;

    };

}

#endif // IFC2X3_IFCPRODUCT_H
