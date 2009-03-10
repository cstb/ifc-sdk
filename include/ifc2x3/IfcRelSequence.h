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

#ifndef IFC2X3_IFCRELSEQUENCE_H
#define IFC2X3_IFCRELSEQUENCE_H
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
    class IfcProcess;

    /**
     */
    class IFC2X3_DLL_DEF IfcRelSequence : public IfcRelConnects {
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
         * Gets the value of the explicit attribute 'RelatingProcess'.
         * 
         */
        virtual IfcProcess *getRelatingProcess();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingProcess'.
         * 
         * @return the value of the explicit attribute 'RelatingProcess'
         */
        virtual const IfcProcess *getRelatingProcess() const;
        /**
         * Sets the value of the explicit attribute 'RelatingProcess'.
         * 
         * @param value
         */
        virtual void setRelatingProcess(const Step::RefPtr< IfcProcess > &value);
        /**
         * Gets the value of the explicit attribute 'RelatedProcess'.
         * 
         */
        virtual IfcProcess *getRelatedProcess();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedProcess'.
         * 
         * @return the value of the explicit attribute 'RelatedProcess'
         */
        virtual const IfcProcess *getRelatedProcess() const;
        /**
         * Sets the value of the explicit attribute 'RelatedProcess'.
         * 
         * @param value
         */
        virtual void setRelatedProcess(const Step::RefPtr< IfcProcess > &value);
        /**
         * Gets the value of the explicit attribute 'TimeLag'.
         * 
         */
        virtual IfcTimeMeasure getTimeLag();
        /**
         * (const) Returns the value of the explicit attribute 'TimeLag'.
         * 
         * @return the value of the explicit attribute 'TimeLag'
         */
        virtual const IfcTimeMeasure getTimeLag() const;
        /**
         * Sets the value of the explicit attribute 'TimeLag'.
         * 
         * @param value
         */
        virtual void setTimeLag(IfcTimeMeasure value);
        /**
         * Gets the value of the explicit attribute 'SequenceType'.
         * 
         */
        virtual IfcSequenceEnum getSequenceType();
        /**
         * (const) Returns the value of the explicit attribute 'SequenceType'.
         * 
         * @return the value of the explicit attribute 'SequenceType'
         */
        virtual const IfcSequenceEnum getSequenceType() const;
        /**
         * Sets the value of the explicit attribute 'SequenceType'.
         * 
         * @param value
         */
        virtual void setSequenceType(IfcSequenceEnum value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelSequence(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelSequence();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelSequence &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcProcess > m_relatingProcess;
        /**
         */
        Step::RefPtr< IfcProcess > m_relatedProcess;
        /**
         */
        Step::Real m_timeLag;
        /**
         */
        IfcSequenceEnum m_sequenceType;

    };

}

#endif // IFC2X3_IFCRELSEQUENCE_H
