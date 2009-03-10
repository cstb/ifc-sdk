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

#ifndef IFC2X3_IFCLOCALPLACEMENT_H
#define IFC2X3_IFCLOCALPLACEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>
#include "ifc2x3/IfcObjectPlacement.h"

namespace ifc2x3 {

    class CopyOp;
    class IfcAxis2Placement;

    /**
     */
    class IFC2X3_DLL_DEF IfcLocalPlacement : public IfcObjectPlacement {
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
         * Gets the value of the explicit attribute 'PlacementRelTo'.
         * 
         */
        virtual IfcObjectPlacement *getPlacementRelTo();
        /**
         * (const) Returns the value of the explicit attribute 'PlacementRelTo'.
         * 
         * @return the value of the explicit attribute 'PlacementRelTo'
         */
        virtual const IfcObjectPlacement *getPlacementRelTo() const;
        /**
         * Sets the value of the explicit attribute 'PlacementRelTo'.
         * 
         * @param value
         */
        virtual void setPlacementRelTo(const Step::RefPtr< IfcObjectPlacement > &value);
        /**
         * Gets the value of the explicit attribute 'RelativePlacement'.
         * 
         */
        virtual IfcAxis2Placement *getRelativePlacement();
        /**
         * (const) Returns the value of the explicit attribute 'RelativePlacement'.
         * 
         * @return the value of the explicit attribute 'RelativePlacement'
         */
        virtual const IfcAxis2Placement *getRelativePlacement() const;
        /**
         * Sets the value of the explicit attribute 'RelativePlacement'.
         * 
         * @param value
         */
        virtual void setRelativePlacement(const Step::RefPtr< IfcAxis2Placement > &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcLocalPlacement(Step::Id id, Step::SPFData *args);
        virtual ~IfcLocalPlacement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcLocalPlacement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcObjectPlacement > m_placementRelTo;
        /**
         */
        Step::RefPtr< IfcAxis2Placement > m_relativePlacement;

    };

}

#endif // IFC2X3_IFCLOCALPLACEMENT_H
