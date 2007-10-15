/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
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

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Aggregation.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>
#include "ifc2x3/IfcRelConnects.h"

namespace ifc2x3 {

    class CopyOp;
    class IfcSpatialStructureElement;
    class IfcSystem;

    /**
     */
    class IFC2X3_DLL_DEF IfcRelServicesBuildings : public IfcRelConnects {
    public:
        /**
         * Accepts a read/write DatatypeVisitor.
         * 
         * @param v the read/write DatatypeVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *v);
        /**
         */
        virtual const std::string &type();
        /**
         */
        static Step::ClassType getClassType();
        /**
         */
        virtual Step::ClassType getType() const;
        /**
         * @param t
         */
        virtual bool isOfType(Step::ClassType t);
        /**
         */
        IfcSystem *getRelatingSystem();
        /**
         * Sets the value of the explicit attribute 'RelatingSystem'.
         * 
         * @param value
         */
        void setRelatingSystem(const Step::RefPtr< IfcSystem > &value);
        /**
         */
        Step::Set< Step::RefPtr< IfcSpatialStructureElement > > &getRelatedBuildings();
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        /**
         */
        class Inverted_RelatedBuildings_type : public Step::Set< Step::RefPtr< IfcSpatialStructureElement > > {
        public:
            /**
             */
            IfcRelServicesBuildings *mOwner;
            /**
             */
            Inverted_RelatedBuildings_type();
            /**
             * @param owner
             */
            void setOwner(IfcRelServicesBuildings *owner);
            /**
             * @param value
             */
            virtual void insert(const Step::RefPtr< IfcSpatialStructureElement > &value);

        };


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
        Inverted_RelatedBuildings_type m_relatedBuildings;

    };

}

#endif // IFC2X3_IFCRELSERVICESBUILDINGS_H
