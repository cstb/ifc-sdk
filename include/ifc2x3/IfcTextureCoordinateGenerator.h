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

#ifndef IFC2X3_IFCTEXTURECOORDINATEGENERATOR_H
#define IFC2X3_IFCTEXTURECOORDINATEGENERATOR_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcTextureCoordinate.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcTextureCoordinateGenerator Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcTextureCoordinateGenerator : public IfcTextureCoordinate {
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
         * Gets the value of the explicit attribute 'Mode'.
         * 
         */
        virtual IfcLabel getMode();
        /**
         * (const) Returns the value of the explicit attribute 'Mode'.
         * 
         * @return the value of the explicit attribute 'Mode'
         */
        virtual const IfcLabel getMode() const;
        /**
         * Sets the value of the explicit attribute 'Mode'.
         * 
         * @param value
         */
        virtual void setMode(const IfcLabel &value);
        /**
         * unset the attribute 'Mode'.
         * 
         */
        virtual void unsetMode();
        /**
         * Test if the attribute 'Mode' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMode() const;
        /**
         * Gets the value of the explicit attribute 'Parameter'.
         * 
         */
        virtual List_IfcSimpleValue_1_n &getParameter();
        /**
         * (const) Returns the value of the explicit attribute 'Parameter'.
         * 
         * @return the value of the explicit attribute 'Parameter'
         */
        virtual const List_IfcSimpleValue_1_n &getParameter() const;
        /**
         * Sets the value of the explicit attribute 'Parameter'.
         * 
         * @param value
         */
        virtual void setParameter(const List_IfcSimpleValue_1_n &value);
        /**
         * unset the attribute 'Parameter'.
         * 
         */
        virtual void unsetParameter();
        /**
         * Test if the attribute 'Parameter' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testParameter() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTextureCoordinateGenerator(Step::Id id, Step::SPFData *args);
        virtual ~IfcTextureCoordinateGenerator();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTextureCoordinateGenerator &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_mode;
        /**
         */
        List_IfcSimpleValue_1_n m_parameter;

    };

}

#endif // IFC2X3_IFCTEXTURECOORDINATEGENERATOR_H
