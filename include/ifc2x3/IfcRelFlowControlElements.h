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

#ifndef IFC2X3_IFCRELFLOWCONTROLELEMENTS_H
#define IFC2X3_IFCRELFLOWCONTROLELEMENTS_H
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

    class IfcDistributionControlElement;
    class IfcRelFlowControlElements;

    /**
     */
    class Inverted_IfcRelFlowControlElements_RelatedControlElements_type : public Set_IfcDistributionControlElement_1_n {
    public:
        /**
         */
        typedef Set_IfcDistributionControlElement_1_n::size_type size_type;

        /**
         */
        IfcRelFlowControlElements *mOwner;
        /**
         */
        Inverted_IfcRelFlowControlElements_RelatedControlElements_type();
        /**
         * @param owner
         */
        void setOwner(IfcRelFlowControlElements *owner);
        /**
         * @param value
         */
        virtual void insert(const Step::RefPtr< IfcDistributionControlElement > &value) throw(std::out_of_range);
        /**
         * @param value
         */
        virtual size_type erase(const Step::RefPtr< IfcDistributionControlElement > &value);

    };

    class CopyOp;
    class IfcDistributionFlowElement;

    /**
     */
    class IFC2X3_DLL_DEF IfcRelFlowControlElements : public IfcRelConnects {
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
         * Gets the value of the explicit attribute 'RelatedControlElements'.
         * 
         */
        virtual Set_IfcDistributionControlElement_1_n &getRelatedControlElements();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedControlElements'.
         * 
         * @return the value of the explicit attribute 'RelatedControlElements'
         */
        virtual const Set_IfcDistributionControlElement_1_n &getRelatedControlElements() const;
        /**
         * Gets the value of the explicit attribute 'RelatingFlowElement'.
         * 
         */
        virtual IfcDistributionFlowElement *getRelatingFlowElement();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingFlowElement'.
         * 
         * @return the value of the explicit attribute 'RelatingFlowElement'
         */
        virtual const IfcDistributionFlowElement *getRelatingFlowElement() const;
        /**
         * Sets the value of the explicit attribute 'RelatingFlowElement'.
         * 
         * @param value
         */
        virtual void setRelatingFlowElement(const Step::RefPtr< IfcDistributionFlowElement > &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelFlowControlElements(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelFlowControlElements();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelFlowControlElements &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverted_IfcRelFlowControlElements_RelatedControlElements_type m_relatedControlElements;
        /**
         */
        Step::RefPtr< IfcDistributionFlowElement > m_relatingFlowElement;

    };

}

#endif // IFC2X3_IFCRELFLOWCONTROLELEMENTS_H
