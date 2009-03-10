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

#ifndef IFC2X3_IFCRELCONNECTSWITHREALIZINGELEMENTS_H
#define IFC2X3_IFCRELCONNECTSWITHREALIZINGELEMENTS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <stdexcept>
#include <Step/Referenced.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcRelConnectsElements.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/String.h>

namespace ifc2x3 {

    class IfcElement;
    class IfcRelConnectsWithRealizingElements;

    /**
     */
    class Inverted_IfcRelConnectsWithRealizingElements_RealizingElements_type : public Set_IfcElement_1_n {
    public:
        /**
         */
        typedef Set_IfcElement_1_n::size_type size_type;

        /**
         */
        IfcRelConnectsWithRealizingElements *mOwner;
        /**
         */
        Inverted_IfcRelConnectsWithRealizingElements_RealizingElements_type();
        /**
         * @param owner
         */
        void setOwner(IfcRelConnectsWithRealizingElements *owner);
        /**
         * @param value
         */
        virtual void insert(const Step::RefPtr< IfcElement > &value) throw(std::out_of_range);
        /**
         * @param value
         */
        virtual size_type erase(const Step::RefPtr< IfcElement > &value);

    };

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcRelConnectsWithRealizingElements : public IfcRelConnectsElements {
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
         * Gets the value of the explicit attribute 'RealizingElements'.
         * 
         */
        virtual Set_IfcElement_1_n &getRealizingElements();
        /**
         * (const) Returns the value of the explicit attribute 'RealizingElements'.
         * 
         * @return the value of the explicit attribute 'RealizingElements'
         */
        virtual const Set_IfcElement_1_n &getRealizingElements() const;
        /**
         * Gets the value of the explicit attribute 'ConnectionType'.
         * 
         */
        virtual IfcLabel getConnectionType();
        /**
         * (const) Returns the value of the explicit attribute 'ConnectionType'.
         * 
         * @return the value of the explicit attribute 'ConnectionType'
         */
        virtual const IfcLabel getConnectionType() const;
        /**
         * Sets the value of the explicit attribute 'ConnectionType'.
         * 
         * @param value
         */
        virtual void setConnectionType(const IfcLabel &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelConnectsWithRealizingElements(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelConnectsWithRealizingElements();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelConnectsWithRealizingElements &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverted_IfcRelConnectsWithRealizingElements_RealizingElements_type m_realizingElements;
        /**
         */
        Step::String m_connectionType;

    };

}

#endif // IFC2X3_IFCRELCONNECTSWITHREALIZINGELEMENTS_H
