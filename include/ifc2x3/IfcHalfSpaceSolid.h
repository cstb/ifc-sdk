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

#ifndef IFC2X3_IFCHALFSPACESOLID_H
#define IFC2X3_IFCHALFSPACESOLID_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcSurface;

    /**
     * Generated class for the IfcHalfSpaceSolid Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcHalfSpaceSolid : public IfcGeometricRepresentationItem {
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
         * Gets the value of the explicit attribute 'BaseSurface'.
         * 
         */
        virtual IfcSurface *getBaseSurface();
        /**
         * (const) Returns the value of the explicit attribute 'BaseSurface'.
         * 
         * @return the value of the explicit attribute 'BaseSurface'
         */
        virtual const IfcSurface *getBaseSurface() const;
        /**
         * Sets the value of the explicit attribute 'BaseSurface'.
         * 
         * @param value
         */
        virtual void setBaseSurface(const Step::RefPtr< IfcSurface > &value);
        /**
         * unset the attribute 'BaseSurface'.
         * 
         */
        virtual void unsetBaseSurface();
        /**
         * Test if the attribute 'BaseSurface' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testBaseSurface() const;
        /**
         * Gets the value of the explicit attribute 'AgreementFlag'.
         * 
         */
        virtual Step::Boolean getAgreementFlag();
        /**
         * (const) Returns the value of the explicit attribute 'AgreementFlag'.
         * 
         * @return the value of the explicit attribute 'AgreementFlag'
         */
        virtual const Step::Boolean getAgreementFlag() const;
        /**
         * Sets the value of the explicit attribute 'AgreementFlag'.
         * 
         * @param value
         */
        virtual void setAgreementFlag(Step::Boolean value);
        /**
         * unset the attribute 'AgreementFlag'.
         * 
         */
        virtual void unsetAgreementFlag();
        /**
         * Test if the attribute 'AgreementFlag' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testAgreementFlag() const;
        /**
         * Gets the value of the derived attribute 'Dim'.
         * 
         */
        virtual IfcDimensionCount getDim() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcHalfSpaceSolid(Step::Id id, Step::SPFData *args);
        virtual ~IfcHalfSpaceSolid();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcHalfSpaceSolid &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcSurface > m_baseSurface;
        /**
         */
        Step::Boolean m_agreementFlag;

    };

}

#endif // IFC2X3_IFCHALFSPACESOLID_H
