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

#ifndef IFC2X3_IFCELEMENT_H
#define IFC2X3_IFCELEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcProduct.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcElement Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcElement : public IfcProduct {
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
         * Gets the value of the explicit attribute 'Tag'.
         * 
         */
        virtual IfcIdentifier getTag();
        /**
         * (const) Returns the value of the explicit attribute 'Tag'.
         * 
         * @return the value of the explicit attribute 'Tag'
         */
        virtual const IfcIdentifier getTag() const;
        /**
         * Sets the value of the explicit attribute 'Tag'.
         * 
         * @param value
         */
        virtual void setTag(const IfcIdentifier &value);
        /**
         * unset the attribute 'Tag'.
         * 
         */
        virtual void unsetTag();
        /**
         * Test if the attribute 'Tag' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTag() const;
        /**
         * Gets the value of the inverse attribute 'HasStructuralMember'.
         * 
         */
        Inverse_Set_IfcRelConnectsStructuralElement_0_n &getHasStructuralMember();
        /**
         * (const) Returns the value of the explicit attribute 'HasStructuralMember'.
         * 
         * @return the value of the explicit attribute 'HasStructuralMember'
         */
        virtual const Inverse_Set_IfcRelConnectsStructuralElement_0_n &getHasStructuralMember() const;
        /**
         * Test if the attribute 'HasStructuralMember' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHasStructuralMember() const;
        /**
         * Gets the value of the inverse attribute 'FillsVoids'.
         * 
         */
        Inverse_Set_IfcRelFillsElement_0_1 &getFillsVoids();
        /**
         * (const) Returns the value of the explicit attribute 'FillsVoids'.
         * 
         * @return the value of the explicit attribute 'FillsVoids'
         */
        virtual const Inverse_Set_IfcRelFillsElement_0_1 &getFillsVoids() const;
        /**
         * Test if the attribute 'FillsVoids' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFillsVoids() const;
        /**
         * Gets the value of the inverse attribute 'ConnectedTo'.
         * 
         */
        Inverse_Set_IfcRelConnectsElements_0_n &getConnectedTo();
        /**
         * (const) Returns the value of the explicit attribute 'ConnectedTo'.
         * 
         * @return the value of the explicit attribute 'ConnectedTo'
         */
        virtual const Inverse_Set_IfcRelConnectsElements_0_n &getConnectedTo() const;
        /**
         * Test if the attribute 'ConnectedTo' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testConnectedTo() const;
        /**
         * Gets the value of the inverse attribute 'HasCoverings'.
         * 
         */
        Inverse_Set_IfcRelCoversBldgElements_0_n &getHasCoverings();
        /**
         * (const) Returns the value of the explicit attribute 'HasCoverings'.
         * 
         * @return the value of the explicit attribute 'HasCoverings'
         */
        virtual const Inverse_Set_IfcRelCoversBldgElements_0_n &getHasCoverings() const;
        /**
         * Test if the attribute 'HasCoverings' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHasCoverings() const;
        /**
         * Gets the value of the inverse attribute 'HasProjections'.
         * 
         */
        Inverse_Set_IfcRelProjectsElement_0_n &getHasProjections();
        /**
         * (const) Returns the value of the explicit attribute 'HasProjections'.
         * 
         * @return the value of the explicit attribute 'HasProjections'
         */
        virtual const Inverse_Set_IfcRelProjectsElement_0_n &getHasProjections() const;
        /**
         * Test if the attribute 'HasProjections' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHasProjections() const;
        /**
         * Gets the value of the inverse attribute 'ReferencedInStructures'.
         * 
         */
        Inverse_Set_IfcRelReferencedInSpatialStructure_0_n &getReferencedInStructures();
        /**
         * (const) Returns the value of the explicit attribute 'ReferencedInStructures'.
         * 
         * @return the value of the explicit attribute 'ReferencedInStructures'
         */
        virtual const Inverse_Set_IfcRelReferencedInSpatialStructure_0_n &getReferencedInStructures() const;
        /**
         * Test if the attribute 'ReferencedInStructures' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testReferencedInStructures() const;
        /**
         * Gets the value of the inverse attribute 'HasPorts'.
         * 
         */
        Inverse_Set_IfcRelConnectsPortToElement_0_n &getHasPorts();
        /**
         * (const) Returns the value of the explicit attribute 'HasPorts'.
         * 
         * @return the value of the explicit attribute 'HasPorts'
         */
        virtual const Inverse_Set_IfcRelConnectsPortToElement_0_n &getHasPorts() const;
        /**
         * Test if the attribute 'HasPorts' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHasPorts() const;
        /**
         * Gets the value of the inverse attribute 'HasOpenings'.
         * 
         */
        Inverse_Set_IfcRelVoidsElement_0_n &getHasOpenings();
        /**
         * (const) Returns the value of the explicit attribute 'HasOpenings'.
         * 
         * @return the value of the explicit attribute 'HasOpenings'
         */
        virtual const Inverse_Set_IfcRelVoidsElement_0_n &getHasOpenings() const;
        /**
         * Test if the attribute 'HasOpenings' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHasOpenings() const;
        /**
         * Gets the value of the inverse attribute 'IsConnectionRealization'.
         * 
         */
        Inverse_Set_IfcRelConnectsWithRealizingElements_0_n &getIsConnectionRealization();
        /**
         * (const) Returns the value of the explicit attribute 'IsConnectionRealization'.
         * 
         * @return the value of the explicit attribute 'IsConnectionRealization'
         */
        virtual const Inverse_Set_IfcRelConnectsWithRealizingElements_0_n &getIsConnectionRealization() const;
        /**
         * Test if the attribute 'IsConnectionRealization' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIsConnectionRealization() const;
        /**
         * Gets the value of the inverse attribute 'ProvidesBoundaries'.
         * 
         */
        Inverse_Set_IfcRelSpaceBoundary_0_n &getProvidesBoundaries();
        /**
         * (const) Returns the value of the explicit attribute 'ProvidesBoundaries'.
         * 
         * @return the value of the explicit attribute 'ProvidesBoundaries'
         */
        virtual const Inverse_Set_IfcRelSpaceBoundary_0_n &getProvidesBoundaries() const;
        /**
         * Test if the attribute 'ProvidesBoundaries' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testProvidesBoundaries() const;
        /**
         * Gets the value of the inverse attribute 'ConnectedFrom'.
         * 
         */
        Inverse_Set_IfcRelConnectsElements_0_n &getConnectedFrom();
        /**
         * (const) Returns the value of the explicit attribute 'ConnectedFrom'.
         * 
         * @return the value of the explicit attribute 'ConnectedFrom'
         */
        virtual const Inverse_Set_IfcRelConnectsElements_0_n &getConnectedFrom() const;
        /**
         * Test if the attribute 'ConnectedFrom' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testConnectedFrom() const;
        /**
         * Gets the value of the inverse attribute 'ContainedInStructure'.
         * 
         */
        Inverse_Set_IfcRelContainedInSpatialStructure_0_1 &getContainedInStructure();
        /**
         * (const) Returns the value of the explicit attribute 'ContainedInStructure'.
         * 
         * @return the value of the explicit attribute 'ContainedInStructure'
         */
        virtual const Inverse_Set_IfcRelContainedInSpatialStructure_0_1 &getContainedInStructure() const;
        /**
         * Test if the attribute 'ContainedInStructure' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testContainedInStructure() const;
        friend class IfcRelFillsElement;
        friend class IfcRelProjectsElement;
        friend class Inverted_IfcRelContainedInSpatialStructure_RelatedElements_type;
        friend class IfcRelConnectsStructuralElement;
        friend class IfcRelConnectsWithRealizingElements;
        friend class ExpressDataSet;
        friend class IfcRelConnectsElements;
        friend class IfcRelContainedInSpatialStructure;
        friend class Inverted_IfcRelConnectsWithRealizingElements_RealizingElements_type;
        friend class IfcRelConnectsPortToElement;
        friend class IfcRelCoversBldgElements;
        friend class IfcRelVoidsElement;
        friend class IfcRelSpaceBoundary;
        friend class IfcRelReferencedInSpatialStructure;
        friend class Inverted_IfcRelReferencedInSpatialStructure_RelatedElements_type;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcElement(Step::Id id, Step::SPFData *args);
        virtual ~IfcElement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcElement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_tag;
        /**
         */
        Inverse_Set_IfcRelConnectsStructuralElement_0_n m_hasStructuralMember;
        /**
         */
        Inverse_Set_IfcRelFillsElement_0_1 m_fillsVoids;
        /**
         */
        Inverse_Set_IfcRelConnectsElements_0_n m_connectedTo;
        /**
         */
        Inverse_Set_IfcRelCoversBldgElements_0_n m_hasCoverings;
        /**
         */
        Inverse_Set_IfcRelProjectsElement_0_n m_hasProjections;
        /**
         */
        Inverse_Set_IfcRelReferencedInSpatialStructure_0_n m_referencedInStructures;
        /**
         */
        Inverse_Set_IfcRelConnectsPortToElement_0_n m_hasPorts;
        /**
         */
        Inverse_Set_IfcRelVoidsElement_0_n m_hasOpenings;
        /**
         */
        Inverse_Set_IfcRelConnectsWithRealizingElements_0_n m_isConnectionRealization;
        /**
         */
        Inverse_Set_IfcRelSpaceBoundary_0_n m_providesBoundaries;
        /**
         */
        Inverse_Set_IfcRelConnectsElements_0_n m_connectedFrom;
        /**
         */
        Inverse_Set_IfcRelContainedInSpatialStructure_0_1 m_containedInStructure;

    };

}

#endif // IFC2X3_IFCELEMENT_H
