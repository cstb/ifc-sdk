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

#ifndef IFC2X3_IFCFACESURFACE_H
#define IFC2X3_IFCFACESURFACE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcFace.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcSurface;

    /**
     */
    class IFC2X3_DLL_DEF IfcFaceSurface : public IfcFace {
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
        IfcSurface *getFaceSurface();
        /**
         * Sets the value of the explicit attribute 'FaceSurface'.
         * 
         * @param value
         */
        void setFaceSurface(const Step::RefPtr< IfcSurface > &value);
        /**
         */
        Step::Bool getSameSense();
        /**
         * Sets the value of the explicit attribute 'SameSense'.
         * 
         * @param value
         */
        void setSameSense(Step::Bool value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcFaceSurface(Step::Id id, Step::SPFData *args);
        virtual ~IfcFaceSurface();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcFaceSurface &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcSurface > m_faceSurface;
        /**
         */
        Step::Bool m_sameSense;

    };

}

#endif // IFC2X3_IFCFACESURFACE_H
