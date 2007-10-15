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

#ifndef IFC2X3_IFCTRIMMEDCURVE_H
#define IFC2X3_IFCTRIMMEDCURVE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcTrimmingSelect.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include "ifc2x3/IfcBoundedCurve.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCurve;

    /**
     */
    class IFC2X3_DLL_DEF IfcTrimmedCurve : public IfcBoundedCurve {
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
        IfcCurve *getBasisCurve();
        /**
         * Sets the value of the explicit attribute 'BasisCurve'.
         * 
         * @param value
         */
        void setBasisCurve(const Step::RefPtr< IfcCurve > &value);
        /**
         */
        Step::Set< Step::RefPtr< IfcTrimmingSelect > > &getTrim1();
        /**
         * Sets the value of the explicit attribute 'Trim1'.
         * 
         * @param value
         */
        void setTrim1(const Step::Set< Step::RefPtr< IfcTrimmingSelect > > &value);
        /**
         */
        Step::Set< Step::RefPtr< IfcTrimmingSelect > > &getTrim2();
        /**
         * Sets the value of the explicit attribute 'Trim2'.
         * 
         * @param value
         */
        void setTrim2(const Step::Set< Step::RefPtr< IfcTrimmingSelect > > &value);
        /**
         */
        Step::Bool getSenseAgreement();
        /**
         * Sets the value of the explicit attribute 'SenseAgreement'.
         * 
         * @param value
         */
        void setSenseAgreement(Step::Bool value);
        /**
         */
        IfcTrimmingPreference getMasterRepresentation();
        /**
         * Sets the value of the explicit attribute 'MasterRepresentation'.
         * 
         * @param value
         */
        void setMasterRepresentation(IfcTrimmingPreference value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTrimmedCurve(Step::Id id, Step::SPFData *args);
        virtual ~IfcTrimmedCurve();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTrimmedCurve &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcCurve > m_basisCurve;
        /**
         */
        Step::Set< Step::RefPtr< IfcTrimmingSelect > > m_trim1;
        /**
         */
        Step::Set< Step::RefPtr< IfcTrimmingSelect > > m_trim2;
        /**
         */
        Step::Bool m_senseAgreement;
        /**
         */
        IfcTrimmingPreference m_masterRepresentation;

    };

}

#endif // IFC2X3_IFCTRIMMEDCURVE_H
