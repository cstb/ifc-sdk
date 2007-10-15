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

#ifndef IFC2X3_IFCTEXTLITERALWITHEXTENT_H
#define IFC2X3_IFCTEXTLITERALWITHEXTENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcTextLiteral.h"
#include <Step/SPFData.h>
#include <string>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcPlanarExtent;

    /**
     */
    class IFC2X3_DLL_DEF IfcTextLiteralWithExtent : public IfcTextLiteral {
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
        IfcPlanarExtent *getExtent();
        /**
         * Sets the value of the explicit attribute 'Extent'.
         * 
         * @param value
         */
        void setExtent(const Step::RefPtr< IfcPlanarExtent > &value);
        /**
         */
        IfcBoxAlignment getBoxAlignment();
        /**
         * Sets the value of the explicit attribute 'BoxAlignment'.
         * 
         * @param value
         */
        void setBoxAlignment(const IfcBoxAlignment &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTextLiteralWithExtent(Step::Id id, Step::SPFData *args);
        virtual ~IfcTextLiteralWithExtent();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTextLiteralWithExtent &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcPlanarExtent > m_extent;
        /**
         */
        std::string m_boxAlignment;

    };

}

#endif // IFC2X3_IFCTEXTLITERALWITHEXTENT_H
