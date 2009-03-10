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

#ifndef IFC2X3_IFCRELCOVERSSPACES_H
#define IFC2X3_IFCRELCOVERSSPACES_H
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
    class IfcRelCoversSpaces;

    /**
     */
    class Inverted_IfcRelCoversSpaces_RelatedCoverings_type : public Set_IfcCovering_1_n {
    public:
        /**
         */
        typedef Set_IfcCovering_1_n::size_type size_type;

        /**
         */
        IfcRelCoversSpaces *mOwner;
        /**
         */
        Inverted_IfcRelCoversSpaces_RelatedCoverings_type();
        /**
         * @param owner
         */
        void setOwner(IfcRelCoversSpaces *owner);
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
    class IfcSpace;

    /**
     */
    class IFC2X3_DLL_DEF IfcRelCoversSpaces : public IfcRelConnects {
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
         * Gets the value of the explicit attribute 'RelatedSpace'.
         * 
         */
        virtual IfcSpace *getRelatedSpace();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedSpace'.
         * 
         * @return the value of the explicit attribute 'RelatedSpace'
         */
        virtual const IfcSpace *getRelatedSpace() const;
        /**
         * Sets the value of the explicit attribute 'RelatedSpace'.
         * 
         * @param value
         */
        virtual void setRelatedSpace(const Step::RefPtr< IfcSpace > &value);
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
        IfcRelCoversSpaces(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelCoversSpaces();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelCoversSpaces &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcSpace > m_relatedSpace;
        /**
         */
        Inverted_IfcRelCoversSpaces_RelatedCoverings_type m_relatedCoverings;

    };

}

#endif // IFC2X3_IFCRELCOVERSSPACES_H
