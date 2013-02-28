// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

#ifndef IFC2X3_IFCRELINTERACTIONREQUIREMENTS_H
#define IFC2X3_IFCRELINTERACTIONREQUIREMENTS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcRelConnects.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcSpaceProgram;
    class IfcSpatialStructureElement;

    /**
     * Generated class for the IfcRelInteractionRequirements Entity.
     * 
     */
    class IFC2X3_EXPORT IfcRelInteractionRequirements : public IfcRelConnects {
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
         * unset the attribute 'DailyInteraction'.
         * 
         */
        virtual void unsetDailyInteraction();
        /**
         * Test if the attribute 'DailyInteraction' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDailyInteraction() const;
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
         * unset the attribute 'ImportanceRating'.
         * 
         */
        virtual void unsetImportanceRating();
        /**
         * Test if the attribute 'ImportanceRating' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testImportanceRating() const;
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
         * unset the attribute 'LocationOfInteraction'.
         * 
         */
        virtual void unsetLocationOfInteraction();
        /**
         * Test if the attribute 'LocationOfInteraction' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLocationOfInteraction() const;
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
         * unset the attribute 'RelatedSpaceProgram'.
         * 
         */
        virtual void unsetRelatedSpaceProgram();
        /**
         * Test if the attribute 'RelatedSpaceProgram' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatedSpaceProgram() const;
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
        /**
         * unset the attribute 'RelatingSpaceProgram'.
         * 
         */
        virtual void unsetRelatingSpaceProgram();
        /**
         * Test if the attribute 'RelatingSpaceProgram' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatingSpaceProgram() const;
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
