/*
// ////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik modified generator           //
//  Powered by : Eve CSTB                    //
// ////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2005 CSTB                                             *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Lesser General Public            *
 *   License as published by the Free Software Foundation; either          *
 *   version 2.1 of the License, or (at your option) any later version.    *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library; if not, write to the                 *
 *         Free Software Foundation, Inc.                                  *
 *         59 Temple Place, Suite 330                                      *
 *         Boston, MA  02111-1307                                          *
 *         USA                                                             *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Eve, CSTB                                                       *
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
#include <Step/Referenced.h>
#include <string>
#include <Step/SPFData.h>
#include <ifc2x3/IfcProduct.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

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
    virtual const char *type();
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
     * (non-const) Returns the value of the explicit attribute 'Tag'.
     * 
     * @return the value of the explicit attribute 'Tag'
     */
    IfcIdentifier getTag();
    /**
     * Sets the value of the explicit attribute 'Tag'.
     * 
     * @param value
     */
    void setTag(const IfcIdentifier &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'FillsVoids'.
     * 
     * @return the value of the explicit attribute 'FillsVoids'
     */
    Step::StepSet< Step::RefPtr< IfcRelFillsElement > > &getFillsVoids();
    /**
     * Sets the value of the explicit attribute 'FillsVoids'.
     * 
     * @param value
     */
    void setFillsVoids(const Step::StepSet< Step::RefPtr< IfcRelFillsElement > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ConnectedTo'.
     * 
     * @return the value of the explicit attribute 'ConnectedTo'
     */
    Step::StepSet< Step::RefPtr< IfcRelConnectsElements > > &getConnectedTo();
    /**
     * Sets the value of the explicit attribute 'ConnectedTo'.
     * 
     * @param value
     */
    void setConnectedTo(const Step::StepSet< Step::RefPtr< IfcRelConnectsElements > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'HasCoverings'.
     * 
     * @return the value of the explicit attribute 'HasCoverings'
     */
    Step::StepSet< Step::RefPtr< IfcRelCoversBldgElements > > &getHasCoverings();
    /**
     * Sets the value of the explicit attribute 'HasCoverings'.
     * 
     * @param value
     */
    void setHasCoverings(const Step::StepSet< Step::RefPtr< IfcRelCoversBldgElements > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'HasProjections'.
     * 
     * @return the value of the explicit attribute 'HasProjections'
     */
    Step::StepSet< Step::RefPtr< IfcRelProjectsElement > > &getHasProjections();
    /**
     * Sets the value of the explicit attribute 'HasProjections'.
     * 
     * @param value
     */
    void setHasProjections(const Step::StepSet< Step::RefPtr< IfcRelProjectsElement > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'HasStructuralMember'.
     * 
     * @return the value of the explicit attribute 'HasStructuralMember'
     */
    Step::StepSet< Step::RefPtr< IfcRelConnectsStructuralElement > > &getHasStructuralMember();
    /**
     * Sets the value of the explicit attribute 'HasStructuralMember'.
     * 
     * @param value
     */
    void setHasStructuralMember(const Step::StepSet< Step::RefPtr< IfcRelConnectsStructuralElement > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ReferencedInStructures'.
     * 
     * @return the value of the explicit attribute 'ReferencedInStructures'
     */
    Step::StepSet< Step::RefPtr< IfcRelReferencedInSpatialStructure > > &getReferencedInStructures();
    /**
     * Sets the value of the explicit attribute 'ReferencedInStructures'.
     * 
     * @param value
     */
    void setReferencedInStructures(const Step::StepSet< Step::RefPtr< IfcRelReferencedInSpatialStructure > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'HasPorts'.
     * 
     * @return the value of the explicit attribute 'HasPorts'
     */
    Step::StepSet< Step::RefPtr< IfcRelConnectsPortToElement > > &getHasPorts();
    /**
     * Sets the value of the explicit attribute 'HasPorts'.
     * 
     * @param value
     */
    void setHasPorts(const Step::StepSet< Step::RefPtr< IfcRelConnectsPortToElement > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'HasOpenings'.
     * 
     * @return the value of the explicit attribute 'HasOpenings'
     */
    Step::StepSet< Step::RefPtr< IfcRelVoidsElement > > &getHasOpenings();
    /**
     * Sets the value of the explicit attribute 'HasOpenings'.
     * 
     * @param value
     */
    void setHasOpenings(const Step::StepSet< Step::RefPtr< IfcRelVoidsElement > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'IsConnectionRealization'.
     * 
     * @return the value of the explicit attribute 'IsConnectionRealization'
     */
    Step::StepSet< Step::RefPtr< IfcRelConnectsWithRealizingElements > > &getIsConnectionRealization();
    /**
     * Sets the value of the explicit attribute 'IsConnectionRealization'.
     * 
     * @param value
     */
    void setIsConnectionRealization(const Step::StepSet< Step::RefPtr< IfcRelConnectsWithRealizingElements > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ProvidesBoundaries'.
     * 
     * @return the value of the explicit attribute 'ProvidesBoundaries'
     */
    Step::StepSet< Step::RefPtr< IfcRelSpaceBoundary > > &getProvidesBoundaries();
    /**
     * Sets the value of the explicit attribute 'ProvidesBoundaries'.
     * 
     * @param value
     */
    void setProvidesBoundaries(const Step::StepSet< Step::RefPtr< IfcRelSpaceBoundary > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ConnectedFrom'.
     * 
     * @return the value of the explicit attribute 'ConnectedFrom'
     */
    Step::StepSet< Step::RefPtr< IfcRelConnectsElements > > &getConnectedFrom();
    /**
     * Sets the value of the explicit attribute 'ConnectedFrom'.
     * 
     * @param value
     */
    void setConnectedFrom(const Step::StepSet< Step::RefPtr< IfcRelConnectsElements > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ContainedInStructure'.
     * 
     * @return the value of the explicit attribute 'ContainedInStructure'
     */
    Step::StepSet< Step::RefPtr< IfcRelContainedInSpatialStructure > > &getContainedInStructure();
    /**
     * Sets the value of the explicit attribute 'ContainedInStructure'.
     * 
     * @param value
     */
    void setContainedInStructure(const Step::StepSet< Step::RefPtr< IfcRelContainedInSpatialStructure > > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();

  protected:
    /**
     * @param args
     */
    IfcElement(Step::SPFData *args);
    virtual ~IfcElement();

  private:
    static Step::ClassType s_type;
    std::string m_tag;
    Step::StepSet< Step::RefPtr< IfcRelFillsElement > > m_fillsVoids;
    Step::StepSet< Step::RefPtr< IfcRelConnectsElements > > m_connectedTo;
    Step::StepSet< Step::RefPtr< IfcRelCoversBldgElements > > m_hasCoverings;
    Step::StepSet< Step::RefPtr< IfcRelProjectsElement > > m_hasProjections;
    Step::StepSet< Step::RefPtr< IfcRelConnectsStructuralElement > > m_hasStructuralMember;
    Step::StepSet< Step::RefPtr< IfcRelReferencedInSpatialStructure > > m_referencedInStructures;
    Step::StepSet< Step::RefPtr< IfcRelConnectsPortToElement > > m_hasPorts;
    Step::StepSet< Step::RefPtr< IfcRelVoidsElement > > m_hasOpenings;
    Step::StepSet< Step::RefPtr< IfcRelConnectsWithRealizingElements > > m_isConnectionRealization;
    Step::StepSet< Step::RefPtr< IfcRelSpaceBoundary > > m_providesBoundaries;
    Step::StepSet< Step::RefPtr< IfcRelConnectsElements > > m_connectedFrom;
    Step::StepSet< Step::RefPtr< IfcRelContainedInSpatialStructure > > m_containedInStructure;
    /**
     * @param c
     */
    IfcElement(const IfcElement &c);

  };

}

#endif // IFC2X3_IFCELEMENT_H
