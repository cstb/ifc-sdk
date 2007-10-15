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

#ifndef IFC2X3_IFCTEXTURECOORDINATEGENERATOR_H
#define IFC2X3_IFCTEXTURECOORDINATEGENERATOR_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <string>
#include "ifc2x3/IfcTextureCoordinate.h"
#include "ifc2x3/IfcSimpleValue.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcTextureCoordinateGenerator : public IfcTextureCoordinate {
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
        IfcLabel getMode();
        /**
         * Sets the value of the explicit attribute 'Mode'.
         * 
         * @param value
         */
        void setMode(const IfcLabel &value);
        /**
         */
        Step::List< Step::RefPtr< IfcSimpleValue > > &getParameter();
        /**
         * Sets the value of the explicit attribute 'Parameter'.
         * 
         * @param value
         */
        void setParameter(const Step::List< Step::RefPtr< IfcSimpleValue > > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTextureCoordinateGenerator(Step::Id id, Step::SPFData *args);
        virtual ~IfcTextureCoordinateGenerator();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTextureCoordinateGenerator &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_mode;
        /**
         */
        Step::List< Step::RefPtr< IfcSimpleValue > > m_parameter;

    };

}

#endif // IFC2X3_IFCTEXTURECOORDINATEGENERATOR_H
