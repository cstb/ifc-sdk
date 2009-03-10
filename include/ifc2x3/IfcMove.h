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

#ifndef IFC2X3_IFCMOVE_H
#define IFC2X3_IFCMOVE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcTask.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcSpatialStructureElement;

    /**
     */
    class IFC2X3_DLL_DEF IfcMove : public IfcTask {
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
         * Gets the value of the explicit attribute 'MoveFrom'.
         * 
         */
        virtual IfcSpatialStructureElement *getMoveFrom();
        /**
         * (const) Returns the value of the explicit attribute 'MoveFrom'.
         * 
         * @return the value of the explicit attribute 'MoveFrom'
         */
        virtual const IfcSpatialStructureElement *getMoveFrom() const;
        /**
         * Sets the value of the explicit attribute 'MoveFrom'.
         * 
         * @param value
         */
        virtual void setMoveFrom(const Step::RefPtr< IfcSpatialStructureElement > &value);
        /**
         * Gets the value of the explicit attribute 'MoveTo'.
         * 
         */
        virtual IfcSpatialStructureElement *getMoveTo();
        /**
         * (const) Returns the value of the explicit attribute 'MoveTo'.
         * 
         * @return the value of the explicit attribute 'MoveTo'
         */
        virtual const IfcSpatialStructureElement *getMoveTo() const;
        /**
         * Sets the value of the explicit attribute 'MoveTo'.
         * 
         * @param value
         */
        virtual void setMoveTo(const Step::RefPtr< IfcSpatialStructureElement > &value);
        /**
         * Gets the value of the explicit attribute 'PunchList'.
         * 
         */
        virtual List_IfcText_1_n &getPunchList();
        /**
         * (const) Returns the value of the explicit attribute 'PunchList'.
         * 
         * @return the value of the explicit attribute 'PunchList'
         */
        virtual const List_IfcText_1_n &getPunchList() const;
        /**
         * Sets the value of the explicit attribute 'PunchList'.
         * 
         * @param value
         */
        virtual void setPunchList(const List_IfcText_1_n &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcMove(Step::Id id, Step::SPFData *args);
        virtual ~IfcMove();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMove &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcSpatialStructureElement > m_moveFrom;
        /**
         */
        Step::RefPtr< IfcSpatialStructureElement > m_moveTo;
        /**
         */
        List_IfcText_1_n m_punchList;

    };

}

#endif // IFC2X3_IFCMOVE_H
