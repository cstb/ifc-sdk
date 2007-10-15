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

#ifndef IFC2X3_IFCTEXTLITERAL_H
#define IFC2X3_IFCTEXTLITERAL_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include <Step/SPFData.h>
#include <string>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcAxis2Placement;

    /**
     */
    class IFC2X3_DLL_DEF IfcTextLiteral : public IfcGeometricRepresentationItem {
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
        IfcPresentableText getLiteral();
        /**
         * Sets the value of the explicit attribute 'Literal'.
         * 
         * @param value
         */
        void setLiteral(const IfcPresentableText &value);
        /**
         */
        IfcAxis2Placement *getPlacement();
        /**
         * Sets the value of the explicit attribute 'Placement'.
         * 
         * @param value
         */
        void setPlacement(const Step::RefPtr< IfcAxis2Placement > &value);
        /**
         */
        IfcTextPath getPath();
        /**
         * Sets the value of the explicit attribute 'Path'.
         * 
         * @param value
         */
        void setPath(IfcTextPath value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTextLiteral(Step::Id id, Step::SPFData *args);
        virtual ~IfcTextLiteral();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTextLiteral &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_literal;
        /**
         */
        Step::RefPtr< IfcAxis2Placement > m_placement;
        /**
         */
        IfcTextPath m_path;

    };

}

#endif // IFC2X3_IFCTEXTLITERAL_H
