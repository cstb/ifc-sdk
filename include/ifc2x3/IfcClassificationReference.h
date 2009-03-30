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

#ifndef IFC2X3_IFCCLASSIFICATIONREFERENCE_H
#define IFC2X3_IFCCLASSIFICATIONREFERENCE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcExternalReference.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcClassification;

    /**
     * Generated class for the IfcClassificationReference Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcClassificationReference : public IfcExternalReference {
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
         * Gets the value of the explicit attribute 'ReferencedSource'.
         * 
         */
        virtual IfcClassification *getReferencedSource();
        /**
         * (const) Returns the value of the explicit attribute 'ReferencedSource'.
         * 
         * @return the value of the explicit attribute 'ReferencedSource'
         */
        virtual const IfcClassification *getReferencedSource() const;
        /**
         * Sets the value of the explicit attribute 'ReferencedSource'.
         * 
         * @param value
         */
        virtual void setReferencedSource(const Step::RefPtr< IfcClassification > &value);
        /**
         * unset the attribute 'ReferencedSource'.
         * 
         */
        virtual void unsetReferencedSource();
        /**
         * Test if the attribute 'ReferencedSource' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testReferencedSource() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcClassificationReference(Step::Id id, Step::SPFData *args);
        virtual ~IfcClassificationReference();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcClassificationReference &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcClassification > m_referencedSource;

    };

}

#endif // IFC2X3_IFCCLASSIFICATIONREFERENCE_H
