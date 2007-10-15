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

#ifndef IFC2X3_IFCELEMENT_H
#define IFC2X3_IFCELEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/SPFData.h>
#include "ifc2x3/IfcProduct.h"
#include <Step/Referenced.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/Aggregation.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcRelConnectsElements;
    class IfcRelConnectsPortToElement;
    class IfcRelConnectsStructuralElement;
    class IfcRelConnectsWithRealizingElements;
    class IfcRelContainedInSpatialStructure;
    class IfcRelCoversBldgElements;
    class IfcRelFillsElement;
    class IfcRelProjectsElement;
    class IfcRelReferencedInSpatialStructure;
    class IfcRelSpaceBoundary;
    class IfcRelVoidsElement;

    /**
     */
    class IFC2X3_DLL_DEF IfcElement : public IfcProduct {
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
        IfcIdentifier getTag();
        /**
         * Sets the value of the explicit attribute 'Tag'.
         * 
         * @param value
         */
        void setTag(const IfcIdentifier &value);
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelFillsElement > > &getFillsVoids();
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelConnectsElements > > &getConnectedTo();
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelCoversBldgElements > > &getHasCoverings();
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelProjectsElement > > &getHasProjections();
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelConnectsStructuralElement > > &getHasStructuralMember();
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelReferencedInSpatialStructure > > &getReferencedInStructures();
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelConnectsPortToElement > > &getHasPorts();
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelVoidsElement > > &getHasOpenings();
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelConnectsWithRealizingElements > > &getIsConnectionRealization();
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelSpaceBoundary > > &getProvidesBoundaries();
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelConnectsElements > > &getConnectedFrom();
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelContainedInSpatialStructure > > &getContainedInStructure();
        /**
         */
        virtual void release();
        friend class IfcRelCoversBldgElements;
        friend class IfcRelVoidsElement;
        friend class IfcRelFillsElement;
        friend class IfcRelSpaceBoundary;
        friend class IfcRelProjectsElement;
        friend class IfcRelConnectsWithRealizingElements;
        friend class IfcRelReferencedInSpatialStructure;
        friend class IfcRelConnectsStructuralElement;
        friend class ExpressDataSet;
        friend class IfcRelConnectsElements;
        friend class IfcRelContainedInSpatialStructure;
        friend class IfcRelConnectsPortToElement;

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
        std::string m_tag;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelFillsElement > > m_fillsVoids;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelConnectsElements > > m_connectedTo;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelCoversBldgElements > > m_hasCoverings;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelProjectsElement > > m_hasProjections;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelConnectsStructuralElement > > m_hasStructuralMember;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelReferencedInSpatialStructure > > m_referencedInStructures;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelConnectsPortToElement > > m_hasPorts;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelVoidsElement > > m_hasOpenings;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelConnectsWithRealizingElements > > m_isConnectionRealization;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelSpaceBoundary > > m_providesBoundaries;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelConnectsElements > > m_connectedFrom;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelContainedInSpatialStructure > > m_containedInStructure;

    };

}

#endif // IFC2X3_IFCELEMENT_H
