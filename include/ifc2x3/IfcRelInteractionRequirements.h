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

#ifndef IFC2X3_IFCRELINTERACTIONREQUIREMENTS_H
#define IFC2X3_IFCRELINTERACTIONREQUIREMENTS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>
#include "ifc2x3/IfcRelConnects.h"

namespace ifc2x3 {

    class CopyOp;
    class IfcSpaceProgram;
    class IfcSpatialStructureElement;

    /**
     */
    class IFC2X3_DLL_DEF IfcRelInteractionRequirements : public IfcRelConnects {
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
        IfcCountMeasure getDailyInteraction();
        /**
         * Sets the value of the explicit attribute 'DailyInteraction'.
         * 
         * @param value
         */
        void setDailyInteraction(IfcCountMeasure value);
        /**
         */
        IfcNormalisedRatioMeasure getImportanceRating();
        /**
         * Sets the value of the explicit attribute 'ImportanceRating'.
         * 
         * @param value
         */
        void setImportanceRating(IfcNormalisedRatioMeasure value);
        /**
         */
        IfcSpatialStructureElement *getLocationOfInteraction();
        /**
         * Sets the value of the explicit attribute 'LocationOfInteraction'.
         * 
         * @param value
         */
        void setLocationOfInteraction(const Step::RefPtr< IfcSpatialStructureElement > &value);
        /**
         */
        IfcSpaceProgram *getRelatedSpaceProgram();
        /**
         * Sets the value of the explicit attribute 'RelatedSpaceProgram'.
         * 
         * @param value
         */
        void setRelatedSpaceProgram(const Step::RefPtr< IfcSpaceProgram > &value);
        /**
         */
        IfcSpaceProgram *getRelatingSpaceProgram();
        /**
         * Sets the value of the explicit attribute 'RelatingSpaceProgram'.
         * 
         * @param value
         */
        void setRelatingSpaceProgram(const Step::RefPtr< IfcSpaceProgram > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelInteractionRequirements(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelInteractionRequirements();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelInteractionRequirements &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Integer m_dailyInteraction;
        /**
         */
        Step::Real m_importanceRating;
        /**
         */
        Step::RefPtr< IfcSpatialStructureElement > m_locationOfInteraction;
        /**
         */
        Step::RefPtr< IfcSpaceProgram > m_relatedSpaceProgram;
        /**
         */
        Step::RefPtr< IfcSpaceProgram > m_relatingSpaceProgram;

    };

}

#endif // IFC2X3_IFCRELINTERACTIONREQUIREMENTS_H
