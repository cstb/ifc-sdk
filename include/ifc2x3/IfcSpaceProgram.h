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

#ifndef IFC2X3_IFCSPACEPROGRAM_H
#define IFC2X3_IFCSPACEPROGRAM_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcControl.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcSpatialStructureElement;

    /**
     * Generated class for the IfcSpaceProgram Entity.
     * 
     */
    class IFC2X3_EXPORT IfcSpaceProgram : public IfcControl {
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
         * Gets the value of the explicit attribute 'SpaceProgramIdentifier'.
         * 
         */
        virtual IfcIdentifier getSpaceProgramIdentifier();
        /**
         * (const) Returns the value of the explicit attribute 'SpaceProgramIdentifier'.
         * 
         * @return the value of the explicit attribute 'SpaceProgramIdentifier'
         */
        virtual const IfcIdentifier getSpaceProgramIdentifier() const;
        /**
         * Sets the value of the explicit attribute 'SpaceProgramIdentifier'.
         * 
         * @param value
         */
        virtual void setSpaceProgramIdentifier(const IfcIdentifier &value);
        /**
         * unset the attribute 'SpaceProgramIdentifier'.
         * 
         */
        virtual void unsetSpaceProgramIdentifier();
        /**
         * Test if the attribute 'SpaceProgramIdentifier' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSpaceProgramIdentifier() const;
        /**
         * Gets the value of the explicit attribute 'MaxRequiredArea'.
         * 
         */
        virtual IfcAreaMeasure getMaxRequiredArea();
        /**
         * (const) Returns the value of the explicit attribute 'MaxRequiredArea'.
         * 
         * @return the value of the explicit attribute 'MaxRequiredArea'
         */
        virtual const IfcAreaMeasure getMaxRequiredArea() const;
        /**
         * Sets the value of the explicit attribute 'MaxRequiredArea'.
         * 
         * @param value
         */
        virtual void setMaxRequiredArea(IfcAreaMeasure value);
        /**
         * unset the attribute 'MaxRequiredArea'.
         * 
         */
        virtual void unsetMaxRequiredArea();
        /**
         * Test if the attribute 'MaxRequiredArea' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMaxRequiredArea() const;
        /**
         * Gets the value of the explicit attribute 'MinRequiredArea'.
         * 
         */
        virtual IfcAreaMeasure getMinRequiredArea();
        /**
         * (const) Returns the value of the explicit attribute 'MinRequiredArea'.
         * 
         * @return the value of the explicit attribute 'MinRequiredArea'
         */
        virtual const IfcAreaMeasure getMinRequiredArea() const;
        /**
         * Sets the value of the explicit attribute 'MinRequiredArea'.
         * 
         * @param value
         */
        virtual void setMinRequiredArea(IfcAreaMeasure value);
        /**
         * unset the attribute 'MinRequiredArea'.
         * 
         */
        virtual void unsetMinRequiredArea();
        /**
         * Test if the attribute 'MinRequiredArea' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMinRequiredArea() const;
        /**
         * Gets the value of the explicit attribute 'RequestedLocation'.
         * 
         */
        virtual IfcSpatialStructureElement *getRequestedLocation();
        /**
         * (const) Returns the value of the explicit attribute 'RequestedLocation'.
         * 
         * @return the value of the explicit attribute 'RequestedLocation'
         */
        virtual const IfcSpatialStructureElement *getRequestedLocation() const;
        /**
         * Sets the value of the explicit attribute 'RequestedLocation'.
         * 
         * @param value
         */
        virtual void setRequestedLocation(const Step::RefPtr< IfcSpatialStructureElement > &value);
        /**
         * unset the attribute 'RequestedLocation'.
         * 
         */
        virtual void unsetRequestedLocation();
        /**
         * Test if the attribute 'RequestedLocation' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRequestedLocation() const;
        /**
         * Gets the value of the explicit attribute 'StandardRequiredArea'.
         * 
         */
        virtual IfcAreaMeasure getStandardRequiredArea();
        /**
         * (const) Returns the value of the explicit attribute 'StandardRequiredArea'.
         * 
         * @return the value of the explicit attribute 'StandardRequiredArea'
         */
        virtual const IfcAreaMeasure getStandardRequiredArea() const;
        /**
         * Sets the value of the explicit attribute 'StandardRequiredArea'.
         * 
         * @param value
         */
        virtual void setStandardRequiredArea(IfcAreaMeasure value);
        /**
         * unset the attribute 'StandardRequiredArea'.
         * 
         */
        virtual void unsetStandardRequiredArea();
        /**
         * Test if the attribute 'StandardRequiredArea' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testStandardRequiredArea() const;
        /**
         * Gets the value of the inverse attribute 'HasInteractionReqsFrom'.
         * 
         */
        virtual Inverse_Set_IfcRelInteractionRequirements_0_n &getHasInteractionReqsFrom();
        /**
         * (const) Returns the value of the explicit attribute 'HasInteractionReqsFrom'.
         * 
         * @return the value of the explicit attribute 'HasInteractionReqsFrom'
         */
        const virtual Inverse_Set_IfcRelInteractionRequirements_0_n &getHasInteractionReqsFrom() const;
        /**
         * Test if the attribute 'HasInteractionReqsFrom' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHasInteractionReqsFrom() const;
        /**
         * Gets the value of the inverse attribute 'HasInteractionReqsTo'.
         * 
         */
        virtual Inverse_Set_IfcRelInteractionRequirements_0_n &getHasInteractionReqsTo();
        /**
         * (const) Returns the value of the explicit attribute 'HasInteractionReqsTo'.
         * 
         * @return the value of the explicit attribute 'HasInteractionReqsTo'
         */
        const virtual Inverse_Set_IfcRelInteractionRequirements_0_n &getHasInteractionReqsTo() const;
        /**
         * Test if the attribute 'HasInteractionReqsTo' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHasInteractionReqsTo() const;
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
        Step::String m_spaceProgramIdentifier;
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
        Inverse_Set_IfcRelInteractionRequirements_0_n m_hasInteractionReqsFrom;
        /**
         */
        Inverse_Set_IfcRelInteractionRequirements_0_n m_hasInteractionReqsTo;

    };

}

#endif // IFC2X3_IFCSPACEPROGRAM_H
