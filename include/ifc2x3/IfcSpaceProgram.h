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

#ifndef IFC2X3_IFCSPACEPROGRAM_H
#define IFC2X3_IFCSPACEPROGRAM_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include "ifc2x3/IfcControl.h"
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <string>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcRelInteractionRequirements;
    class IfcSpatialStructureElement;

    /**
     */
    class IFC2X3_DLL_DEF IfcSpaceProgram : public IfcControl {
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
        IfcIdentifier getSpaceProgramIdentifier();
        /**
         * Sets the value of the explicit attribute 'SpaceProgramIdentifier'.
         * 
         * @param value
         */
        void setSpaceProgramIdentifier(const IfcIdentifier &value);
        /**
         */
        IfcAreaMeasure getMaxRequiredArea();
        /**
         * Sets the value of the explicit attribute 'MaxRequiredArea'.
         * 
         * @param value
         */
        void setMaxRequiredArea(IfcAreaMeasure value);
        /**
         */
        IfcAreaMeasure getMinRequiredArea();
        /**
         * Sets the value of the explicit attribute 'MinRequiredArea'.
         * 
         * @param value
         */
        void setMinRequiredArea(IfcAreaMeasure value);
        /**
         */
        IfcSpatialStructureElement *getRequestedLocation();
        /**
         * Sets the value of the explicit attribute 'RequestedLocation'.
         * 
         * @param value
         */
        void setRequestedLocation(const Step::RefPtr< IfcSpatialStructureElement > &value);
        /**
         */
        IfcAreaMeasure getStandardRequiredArea();
        /**
         * Sets the value of the explicit attribute 'StandardRequiredArea'.
         * 
         * @param value
         */
        void setStandardRequiredArea(IfcAreaMeasure value);
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelInteractionRequirements > > &getHasInteractionReqsFrom();
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelInteractionRequirements > > &getHasInteractionReqsTo();
        /**
         */
        virtual void release();
        friend class IfcRelInteractionRequirements;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSpaceProgram(Step::Id id, Step::SPFData *args);
        virtual ~IfcSpaceProgram();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSpaceProgram &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_spaceProgramIdentifier;
        /**
         */
        Step::Real m_maxRequiredArea;
        /**
         */
        Step::Real m_minRequiredArea;
        /**
         */
        Step::RefPtr< IfcSpatialStructureElement > m_requestedLocation;
        /**
         */
        Step::Real m_standardRequiredArea;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelInteractionRequirements > > m_hasInteractionReqsFrom;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelInteractionRequirements > > m_hasInteractionReqsTo;

    };

}

#endif // IFC2X3_IFCSPACEPROGRAM_H
