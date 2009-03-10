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

#ifndef IFC2X3_IFCRELSERVICESBUILDINGS_H
#define IFC2X3_IFCRELSERVICESBUILDINGS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <stdexcept>
#include <Step/Referenced.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>
#include "ifc2x3/IfcRelConnects.h"

namespace ifc2x3 {

    class IfcRelServicesBuildings;
    class IfcSpatialStructureElement;

    /**
     */
    class Inverted_IfcRelServicesBuildings_RelatedBuildings_type : public Set_IfcSpatialStructureElement_1_n {
    public:
        /**
         */
        typedef Set_IfcSpatialStructureElement_1_n::size_type size_type;

        /**
         */
        IfcRelServicesBuildings *mOwner;
        /**
         */
        Inverted_IfcRelServicesBuildings_RelatedBuildings_type();
        /**
         * @param owner
         */
        void setOwner(IfcRelServicesBuildings *owner);
        /**
         * @param value
         */
        virtual void insert(const Step::RefPtr< IfcSpatialStructureElement > &value) throw(std::out_of_range);
        /**
         * @param value
         */
        virtual size_type erase(const Step::RefPtr< IfcSpatialStructureElement > &value);

    };

    class CopyOp;
    class IfcSystem;

    /**
     */
    class IFC2X3_DLL_DEF IfcRelServicesBuildings : public IfcRelConnects {
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
         * Gets the value of the explicit attribute 'RelatingSystem'.
         * 
         */
        virtual IfcSystem *getRelatingSystem();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingSystem'.
         * 
         * @return the value of the explicit attribute 'RelatingSystem'
         */
        virtual const IfcSystem *getRelatingSystem() const;
        /**
         * Sets the value of the explicit attribute 'RelatingSystem'.
         * 
         * @param value
         */
        virtual void setRelatingSystem(const Step::RefPtr< IfcSystem > &value);
        /**
         * Gets the value of the explicit attribute 'RelatedBuildings'.
         * 
         */
        virtual Set_IfcSpatialStructureElement_1_n &getRelatedBuildings();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedBuildings'.
         * 
         * @return the value of the explicit attribute 'RelatedBuildings'
         */
        virtual const Set_IfcSpatialStructureElement_1_n &getRelatedBuildings() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelServicesBuildings(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelServicesBuildings();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelServicesBuildings &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcSystem > m_relatingSystem;
        /**
         */
        Inverted_IfcRelServicesBuildings_RelatedBuildings_type m_relatedBuildings;

    };

}

#endif // IFC2X3_IFCRELSERVICESBUILDINGS_H
