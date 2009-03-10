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

#ifndef IFC2X3_IFCRELASSOCIATESPROFILEPROPERTIES_H
#define IFC2X3_IFCRELASSOCIATESPROFILEPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcRelAssociates.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcOrientationSelect;
    class IfcProfileProperties;
    class IfcShapeAspect;

    /**
     */
    class IFC2X3_DLL_DEF IfcRelAssociatesProfileProperties : public IfcRelAssociates {
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
         * Gets the value of the explicit attribute 'RelatingProfileProperties'.
         * 
         */
        virtual IfcProfileProperties *getRelatingProfileProperties();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingProfileProperties'.
         * 
         * @return the value of the explicit attribute 'RelatingProfileProperties'
         */
        virtual const IfcProfileProperties *getRelatingProfileProperties() const;
        /**
         * Sets the value of the explicit attribute 'RelatingProfileProperties'.
         * 
         * @param value
         */
        virtual void setRelatingProfileProperties(const Step::RefPtr< IfcProfileProperties > &value);
        /**
         * Gets the value of the explicit attribute 'ProfileSectionLocation'.
         * 
         */
        virtual IfcShapeAspect *getProfileSectionLocation();
        /**
         * (const) Returns the value of the explicit attribute 'ProfileSectionLocation'.
         * 
         * @return the value of the explicit attribute 'ProfileSectionLocation'
         */
        virtual const IfcShapeAspect *getProfileSectionLocation() const;
        /**
         * Sets the value of the explicit attribute 'ProfileSectionLocation'.
         * 
         * @param value
         */
        virtual void setProfileSectionLocation(const Step::RefPtr< IfcShapeAspect > &value);
        /**
         * Gets the value of the explicit attribute 'ProfileOrientation'.
         * 
         */
        virtual IfcOrientationSelect *getProfileOrientation();
        /**
         * (const) Returns the value of the explicit attribute 'ProfileOrientation'.
         * 
         * @return the value of the explicit attribute 'ProfileOrientation'
         */
        virtual const IfcOrientationSelect *getProfileOrientation() const;
        /**
         * Sets the value of the explicit attribute 'ProfileOrientation'.
         * 
         * @param value
         */
        virtual void setProfileOrientation(const Step::RefPtr< IfcOrientationSelect > &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelAssociatesProfileProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelAssociatesProfileProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelAssociatesProfileProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcProfileProperties > m_relatingProfileProperties;
        /**
         */
        Step::RefPtr< IfcShapeAspect > m_profileSectionLocation;
        /**
         */
        Step::RefPtr< IfcOrientationSelect > m_profileOrientation;

    };

}

#endif // IFC2X3_IFCRELASSOCIATESPROFILEPROPERTIES_H
