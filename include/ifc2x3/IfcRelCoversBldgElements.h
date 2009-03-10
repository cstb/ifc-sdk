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

#ifndef IFC2X3_IFCRELCOVERSBLDGELEMENTS_H
#define IFC2X3_IFCRELCOVERSBLDGELEMENTS_H
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

    class IfcCovering;
    class IfcRelCoversBldgElements;

    /**
     */
    class Inverted_IfcRelCoversBldgElements_RelatedCoverings_type : public Set_IfcCovering_1_n {
    public:
        /**
         */
        typedef Set_IfcCovering_1_n::size_type size_type;

        /**
         */
        IfcRelCoversBldgElements *mOwner;
        /**
         */
        Inverted_IfcRelCoversBldgElements_RelatedCoverings_type();
        /**
         * @param owner
         */
        void setOwner(IfcRelCoversBldgElements *owner);
        /**
         * @param value
         */
        virtual void insert(const Step::RefPtr< IfcCovering > &value) throw(std::out_of_range);
        /**
         * @param value
         */
        virtual size_type erase(const Step::RefPtr< IfcCovering > &value);

    };

    class CopyOp;
    class IfcElement;

    /**
     */
    class IFC2X3_DLL_DEF IfcRelCoversBldgElements : public IfcRelConnects {
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
         * Gets the value of the explicit attribute 'RelatingBuildingElement'.
         * 
         */
        virtual IfcElement *getRelatingBuildingElement();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingBuildingElement'.
         * 
         * @return the value of the explicit attribute 'RelatingBuildingElement'
         */
        virtual const IfcElement *getRelatingBuildingElement() const;
        /**
         * Sets the value of the explicit attribute 'RelatingBuildingElement'.
         * 
         * @param value
         */
        virtual void setRelatingBuildingElement(const Step::RefPtr< IfcElement > &value);
        /**
         * Gets the value of the explicit attribute 'RelatedCoverings'.
         * 
         */
        virtual Set_IfcCovering_1_n &getRelatedCoverings();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedCoverings'.
         * 
         * @return the value of the explicit attribute 'RelatedCoverings'
         */
        virtual const Set_IfcCovering_1_n &getRelatedCoverings() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelCoversBldgElements(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelCoversBldgElements();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelCoversBldgElements &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcElement > m_relatingBuildingElement;
        /**
         */
        Inverted_IfcRelCoversBldgElements_RelatedCoverings_type m_relatedCoverings;

    };

}

#endif // IFC2X3_IFCRELCOVERSBLDGELEMENTS_H
