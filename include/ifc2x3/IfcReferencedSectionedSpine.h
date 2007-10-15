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

#ifndef IFC2X3_IFCREFERENCEDSECTIONEDSPINE_H
#define IFC2X3_IFCREFERENCEDSECTIONEDSPINE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcSolidModel.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcProfileDef;
    class IfcReferenceCurve;
    class IfcReferencePlacement;

    /**
     *  XXXX End of Ifc Bridge entities XXXX 
     * 
     */
    class IFC2X3_DLL_DEF IfcReferencedSectionedSpine : public IfcSolidModel {
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
        IfcReferenceCurve *getSpineCurve();
        /**
         * Sets the value of the explicit attribute 'SpineCurve'.
         * 
         * @param value
         */
        void setSpineCurve(const Step::RefPtr< IfcReferenceCurve > &value);
        /**
         */
        Step::List< Step::RefPtr< IfcProfileDef > > &getCrossSections();
        /**
         * Sets the value of the explicit attribute 'CrossSections'.
         * 
         * @param value
         */
        void setCrossSections(const Step::List< Step::RefPtr< IfcProfileDef > > &value);
        /**
         */
        Step::List< Step::RefPtr< IfcReferencePlacement > > &getCrossSectionPositions();
        /**
         * Sets the value of the explicit attribute 'CrossSectionPositions'.
         * 
         * @param value
         */
        void setCrossSectionPositions(const Step::List< Step::RefPtr< IfcReferencePlacement > > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcReferencedSectionedSpine(Step::Id id, Step::SPFData *args);
        virtual ~IfcReferencedSectionedSpine();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcReferencedSectionedSpine &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcReferenceCurve > m_spineCurve;
        /**
         */
        Step::List< Step::RefPtr< IfcProfileDef > > m_crossSections;
        /**
         */
        Step::List< Step::RefPtr< IfcReferencePlacement > > m_crossSectionPositions;

    };

}

#endif // IFC2X3_IFCREFERENCEDSECTIONEDSPINE_H
