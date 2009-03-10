/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
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
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'DailyInteraction'.
         * 
         */
        virtual IfcCountMeasure getDailyInteraction();
        /**
         * (const) Returns the value of the explicit attribute 'DailyInteraction'.
         * 
         * @return the value of the explicit attribute 'DailyInteraction'
         */
        virtual const IfcCountMeasure getDailyInteraction() const;
        /**
         * Sets the value of the explicit attribute 'DailyInteraction'.
         * 
         * @param value
         */
        virtual void setDailyInteraction(IfcCountMeasure value);
        /**
         * Gets the value of the explicit attribute 'ImportanceRating'.
         * 
         */
        virtual IfcNormalisedRatioMeasure getImportanceRating();
        /**
         * (const) Returns the value of the explicit attribute 'ImportanceRating'.
         * 
         * @return the value of the explicit attribute 'ImportanceRating'
         */
        virtual const IfcNormalisedRatioMeasure getImportanceRating() const;
        /**
         * Sets the value of the explicit attribute 'ImportanceRating'.
         * 
         * @param value
         */
        virtual void setImportanceRating(IfcNormalisedRatioMeasure value);
        /**
         * Gets the value of the explicit attribute 'LocationOfInteraction'.
         * 
         */
        virtual IfcSpatialStructureElement *getLocationOfInteraction();
        /**
         * (const) Returns the value of the explicit attribute 'LocationOfInteraction'.
         * 
         * @return the value of the explicit attribute 'LocationOfInteraction'
         */
        virtual const IfcSpatialStructureElement *getLocationOfInteraction() const;
        /**
         * Sets the value of the explicit attribute 'LocationOfInteraction'.
         * 
         * @param value
         */
        virtual void setLocationOfInteraction(const Step::RefPtr< IfcSpatialStructureElement > &value);
        /**
         * Gets the value of the explicit attribute 'RelatedSpaceProgram'.
         * 
         */
        virtual IfcSpaceProgram *getRelatedSpaceProgram();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedSpaceProgram'.
         * 
         * @return the value of the explicit attribute 'RelatedSpaceProgram'
         */
        virtual const IfcSpaceProgram *getRelatedSpaceProgram() const;
        /**
         * Sets the value of the explicit attribute 'RelatedSpaceProgram'.
         * 
         * @param value
         */
        virtual void setRelatedSpaceProgram(const Step::RefPtr< IfcSpaceProgram > &value);
        /**
         * Gets the value of the explicit attribute 'RelatingSpaceProgram'.
         * 
         */
        virtual IfcSpaceProgram *getRelatingSpaceProgram();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingSpaceProgram'.
         * 
         * @return the value of the explicit attribute 'RelatingSpaceProgram'
         */
        virtual const IfcSpaceProgram *getRelatingSpaceProgram() const;
        /**
         * Sets the value of the explicit attribute 'RelatingSpaceProgram'.
         * 
         * @param value
         */
        virtual void setRelatingSpaceProgram(const Step::RefPtr< IfcSpaceProgram > &value);
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
        Step::Number m_dailyInteraction;
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
