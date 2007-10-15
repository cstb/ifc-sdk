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

#ifndef IFC2X3_IFCCIVILELEMENTPART_H
#define IFC2X3_IFCCIVILELEMENTPART_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcElementPart.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcBridgeSegment;

    /**
     */
    class IFC2X3_DLL_DEF IfcCivilElementPart : public IfcElementPart {
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
        IfcBridgeSegment *getContainedInSegment();
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        friend class IfcBridgeSegment;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCivilElementPart(Step::Id id, Step::SPFData *args);
        virtual ~IfcCivilElementPart();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCivilElementPart &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::ObsPtr< IfcBridgeSegment > m_containedInSegment;

    };

}

#endif // IFC2X3_IFCCIVILELEMENTPART_H
