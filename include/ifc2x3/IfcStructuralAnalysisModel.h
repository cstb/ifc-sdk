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

#ifndef IFC2X3_IFCSTRUCTURALANALYSISMODEL_H
#define IFC2X3_IFCSTRUCTURALANALYSISMODEL_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Aggregation.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>
#include "ifc2x3/IfcSystem.h"

namespace ifc2x3 {

    class CopyOp;
    class IfcAxis2Placement3D;
    class IfcStructuralLoadGroup;
    class IfcStructuralResultGroup;

    /**
     */
    class IFC2X3_DLL_DEF IfcStructuralAnalysisModel : public IfcSystem {
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
        IfcAnalysisModelTypeEnum getPredefinedType();
        /**
         * Sets the value of the explicit attribute 'PredefinedType'.
         * 
         * @param value
         */
        void setPredefinedType(IfcAnalysisModelTypeEnum value);
        /**
         */
        IfcAxis2Placement3D *getOrientationOf2DPlane();
        /**
         * Sets the value of the explicit attribute 'OrientationOf2DPlane'.
         * 
         * @param value
         */
        void setOrientationOf2DPlane(const Step::RefPtr< IfcAxis2Placement3D > &value);
        /**
         */
        Step::Set< Step::RefPtr< IfcStructuralLoadGroup > > &getLoadedBy();
        /**
         */
        Step::Set< Step::RefPtr< IfcStructuralResultGroup > > &getHasResults();
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        /**
         */
        class Inverted_HasResults_type : public Step::Set< Step::RefPtr< IfcStructuralResultGroup > > {
        public:
            /**
             */
            IfcStructuralAnalysisModel *mOwner;
            /**
             */
            Inverted_HasResults_type();
            /**
             * @param owner
             */
            void setOwner(IfcStructuralAnalysisModel *owner);
            /**
             * @param value
             */
            virtual void insert(const Step::RefPtr< IfcStructuralResultGroup > &value);

        };

        /**
         */
        class Inverted_LoadedBy_type : public Step::Set< Step::RefPtr< IfcStructuralLoadGroup > > {
        public:
            /**
             */
            IfcStructuralAnalysisModel *mOwner;
            /**
             */
            Inverted_LoadedBy_type();
            /**
             * @param owner
             */
            void setOwner(IfcStructuralAnalysisModel *owner);
            /**
             * @param value
             */
            virtual void insert(const Step::RefPtr< IfcStructuralLoadGroup > &value);

        };


    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralAnalysisModel(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralAnalysisModel();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralAnalysisModel &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcAnalysisModelTypeEnum m_predefinedType;
        /**
         */
        Step::RefPtr< IfcAxis2Placement3D > m_orientationOf2DPlane;
        /**
         */
        Inverted_LoadedBy_type m_loadedBy;
        /**
         */
        Inverted_HasResults_type m_hasResults;

    };

}

#endif // IFC2X3_IFCSTRUCTURALANALYSISMODEL_H
