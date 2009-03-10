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

#ifndef IFC2X3_IFCDEFINEDSYMBOL_H
#define IFC2X3_IFCDEFINEDSYMBOL_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCartesianTransformationOperator2D;
    class IfcDefinedSymbolSelect;

    /**
     */
    class IFC2X3_DLL_DEF IfcDefinedSymbol : public IfcGeometricRepresentationItem {
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
         * Gets the value of the explicit attribute 'Definition'.
         * 
         */
        virtual IfcDefinedSymbolSelect *getDefinition();
        /**
         * (const) Returns the value of the explicit attribute 'Definition'.
         * 
         * @return the value of the explicit attribute 'Definition'
         */
        virtual const IfcDefinedSymbolSelect *getDefinition() const;
        /**
         * Sets the value of the explicit attribute 'Definition'.
         * 
         * @param value
         */
        virtual void setDefinition(const Step::RefPtr< IfcDefinedSymbolSelect > &value);
        /**
         * Gets the value of the explicit attribute 'Target'.
         * 
         */
        virtual IfcCartesianTransformationOperator2D *getTarget();
        /**
         * (const) Returns the value of the explicit attribute 'Target'.
         * 
         * @return the value of the explicit attribute 'Target'
         */
        virtual const IfcCartesianTransformationOperator2D *getTarget() const;
        /**
         * Sets the value of the explicit attribute 'Target'.
         * 
         * @param value
         */
        virtual void setTarget(const Step::RefPtr< IfcCartesianTransformationOperator2D > &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcDefinedSymbol(Step::Id id, Step::SPFData *args);
        virtual ~IfcDefinedSymbol();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDefinedSymbol &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcDefinedSymbolSelect > m_definition;
        /**
         */
        Step::RefPtr< IfcCartesianTransformationOperator2D > m_target;

    };

}

#endif // IFC2X3_IFCDEFINEDSYMBOL_H
