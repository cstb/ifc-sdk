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
 *     Copyright (C) 2009 CSTB                                             *
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

#include "ifc2x3/IfcFace.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcSurface;

    /**
     * Generated class for the IfcFaceSurface Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcFaceSurface : public IfcFace {
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
         * Gets the value of the explicit attribute 'FaceSurface'.
         * 
         */
        virtual IfcSurface *getFaceSurface();
        /**
         * (const) Returns the value of the explicit attribute 'FaceSurface'.
         * 
         * @return the value of the explicit attribute 'FaceSurface'
         */
        virtual const IfcSurface *getFaceSurface() const;
        /**
         * Sets the value of the explicit attribute 'FaceSurface'.
         * 
         * @param value
         */
        virtual void setFaceSurface(const Step::RefPtr< IfcSurface > &value);
        /**
         * unset the attribute 'FaceSurface'.
         * 
         */
        virtual void unsetFaceSurface();
        /**
         * Test if the attribute 'FaceSurface' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFaceSurface() const;
        /**
         * Gets the value of the explicit attribute 'SameSense'.
         * 
         */
        virtual Step::Boolean getSameSense();
        /**
         * (const) Returns the value of the explicit attribute 'SameSense'.
         * 
         * @return the value of the explicit attribute 'SameSense'
         */
        virtual const Step::Boolean getSameSense() const;
        /**
         * Sets the value of the explicit attribute 'SameSense'.
         * 
         * @param value
         */
        virtual void setSameSense(Step::Boolean value);
        /**
         * unset the attribute 'SameSense'.
         * 
         */
        virtual void unsetSameSense();
        /**
         * Test if the attribute 'SameSense' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSameSense() const;
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
        Step::Boolean m_sameSense;

    };

}

#endif // IFC2X3_IFCFACESURFACE_H
