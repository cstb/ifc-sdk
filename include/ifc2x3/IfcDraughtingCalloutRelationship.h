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

#ifndef IFC2X3_IFCDRAUGHTINGCALLOUTRELATIONSHIP_H
#define IFC2X3_IFCDRAUGHTINGCALLOUTRELATIONSHIP_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/String.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcDraughtingCallout;

    /**
     */
    class IFC2X3_DLL_DEF IfcDraughtingCalloutRelationship : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'Name'.
         * 
         */
        virtual IfcLabel getName();
        /**
         * (const) Returns the value of the explicit attribute 'Name'.
         * 
         * @return the value of the explicit attribute 'Name'
         */
        virtual const IfcLabel getName() const;
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        virtual void setName(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'Description'.
         * 
         */
        virtual IfcText getDescription();
        /**
         * (const) Returns the value of the explicit attribute 'Description'.
         * 
         * @return the value of the explicit attribute 'Description'
         */
        virtual const IfcText getDescription() const;
        /**
         * Sets the value of the explicit attribute 'Description'.
         * 
         * @param value
         */
        virtual void setDescription(const IfcText &value);
        /**
         * Gets the value of the explicit attribute 'RelatingDraughtingCallout'.
         * 
         */
        virtual IfcDraughtingCallout *getRelatingDraughtingCallout();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingDraughtingCallout'.
         * 
         * @return the value of the explicit attribute 'RelatingDraughtingCallout'
         */
        virtual const IfcDraughtingCallout *getRelatingDraughtingCallout() const;
        /**
         * Sets the value of the explicit attribute 'RelatingDraughtingCallout'.
         * 
         * @param value
         */
        virtual void setRelatingDraughtingCallout(const Step::RefPtr< IfcDraughtingCallout > &value);
        /**
         * Gets the value of the explicit attribute 'RelatedDraughtingCallout'.
         * 
         */
        virtual IfcDraughtingCallout *getRelatedDraughtingCallout();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedDraughtingCallout'.
         * 
         * @return the value of the explicit attribute 'RelatedDraughtingCallout'
         */
        virtual const IfcDraughtingCallout *getRelatedDraughtingCallout() const;
        /**
         * Sets the value of the explicit attribute 'RelatedDraughtingCallout'.
         * 
         * @param value
         */
        virtual void setRelatedDraughtingCallout(const Step::RefPtr< IfcDraughtingCallout > &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcDraughtingCalloutRelationship(Step::Id id, Step::SPFData *args);
        virtual ~IfcDraughtingCalloutRelationship();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDraughtingCalloutRelationship &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_name;
        /**
         */
        Step::String m_description;
        /**
         */
        Step::RefPtr< IfcDraughtingCallout > m_relatingDraughtingCallout;
        /**
         */
        Step::RefPtr< IfcDraughtingCallout > m_relatedDraughtingCallout;

    };

}

#endif // IFC2X3_IFCDRAUGHTINGCALLOUTRELATIONSHIP_H
