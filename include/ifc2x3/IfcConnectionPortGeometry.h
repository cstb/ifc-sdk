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

#ifndef IFC2X3_IFCCONNECTIONPORTGEOMETRY_H
#define IFC2X3_IFCCONNECTIONPORTGEOMETRY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcConnectionGeometry.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcAxis2Placement;
    class IfcProfileDef;

    /**
     */
    class IFC2X3_DLL_DEF IfcConnectionPortGeometry : public IfcConnectionGeometry {
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
        IfcAxis2Placement *getLocationAtRelatingElement();
        /**
         * Sets the value of the explicit attribute 'LocationAtRelatingElement'.
         * 
         * @param value
         */
        void setLocationAtRelatingElement(const Step::RefPtr< IfcAxis2Placement > &value);
        /**
         */
        IfcAxis2Placement *getLocationAtRelatedElement();
        /**
         * Sets the value of the explicit attribute 'LocationAtRelatedElement'.
         * 
         * @param value
         */
        void setLocationAtRelatedElement(const Step::RefPtr< IfcAxis2Placement > &value);
        /**
         */
        IfcProfileDef *getProfileOfPort();
        /**
         * Sets the value of the explicit attribute 'ProfileOfPort'.
         * 
         * @param value
         */
        void setProfileOfPort(const Step::RefPtr< IfcProfileDef > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcConnectionPortGeometry(Step::Id id, Step::SPFData *args);
        virtual ~IfcConnectionPortGeometry();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcConnectionPortGeometry &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcAxis2Placement > m_locationAtRelatingElement;
        /**
         */
        Step::RefPtr< IfcAxis2Placement > m_locationAtRelatedElement;
        /**
         */
        Step::RefPtr< IfcProfileDef > m_profileOfPort;

    };

}

#endif // IFC2X3_IFCCONNECTIONPORTGEOMETRY_H
