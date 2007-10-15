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

#ifndef IFC2X3_IFCGRID_H
#define IFC2X3_IFCGRID_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include "ifc2x3/IfcAlignmentElement.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcGridAxis;
    class IfcRelContainedInSpatialStructure;

    /**
     */
    class IFC2X3_DLL_DEF IfcGrid : public IfcAlignmentElement {
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
        Step::List< Step::RefPtr< IfcGridAxis > > &getUAxes();
        /**
         */
        Step::List< Step::RefPtr< IfcGridAxis > > &getVAxes();
        /**
         */
        Step::List< Step::RefPtr< IfcGridAxis > > &getWAxes();
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelContainedInSpatialStructure > > &getContainedInStructure();
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        friend class IfcRelContainedInSpatialStructure;
        /**
         */
        class Inverted_VAxes_type : public Step::List< Step::RefPtr< IfcGridAxis > > {
        public:
            /**
             */
            IfcGrid *mOwner;
            /**
             */
            Inverted_VAxes_type();
            /**
             * @param owner
             */
            void setOwner(IfcGrid *owner);
            /**
             * @param value
             */
            virtual void push_back(const Step::RefPtr< IfcGridAxis > &value);

        };

        /**
         */
        class Inverted_WAxes_type : public Step::List< Step::RefPtr< IfcGridAxis > > {
        public:
            /**
             */
            IfcGrid *mOwner;
            /**
             */
            Inverted_WAxes_type();
            /**
             * @param owner
             */
            void setOwner(IfcGrid *owner);
            /**
             * @param value
             */
            virtual void push_back(const Step::RefPtr< IfcGridAxis > &value);

        };

        /**
         */
        class Inverted_UAxes_type : public Step::List< Step::RefPtr< IfcGridAxis > > {
        public:
            /**
             */
            IfcGrid *mOwner;
            /**
             */
            Inverted_UAxes_type();
            /**
             * @param owner
             */
            void setOwner(IfcGrid *owner);
            /**
             * @param value
             */
            virtual void push_back(const Step::RefPtr< IfcGridAxis > &value);

        };


    protected:
        /**
         * @param id
         * @param args
         */
        IfcGrid(Step::Id id, Step::SPFData *args);
        virtual ~IfcGrid();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcGrid &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverted_UAxes_type m_uAxes;
        /**
         */
        Inverted_VAxes_type m_vAxes;
        /**
         */
        Inverted_WAxes_type m_wAxes;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelContainedInSpatialStructure > > m_containedInStructure;

    };

}

#endif // IFC2X3_IFCGRID_H
