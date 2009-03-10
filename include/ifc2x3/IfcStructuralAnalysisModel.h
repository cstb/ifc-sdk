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

#ifndef IFC2X3_IFCSTRUCTURALANALYSISMODEL_H
#define IFC2X3_IFCSTRUCTURALANALYSISMODEL_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <stdexcept>
#include <Step/Referenced.h>
#include <stdexcept>
#include <Step/Referenced.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>
#include "ifc2x3/IfcSystem.h"

namespace ifc2x3 {

    class IfcStructuralAnalysisModel;
    class IfcStructuralLoadGroup;

    /**
     */
    class Inverted_IfcStructuralAnalysisModel_LoadedBy_type : public Set_IfcStructuralLoadGroup_1_n {
    public:
        /**
         */
        typedef Set_IfcStructuralLoadGroup_1_n::size_type size_type;

        /**
         */
        IfcStructuralAnalysisModel *mOwner;
        /**
         */
        Inverted_IfcStructuralAnalysisModel_LoadedBy_type();
        /**
         * @param owner
         */
        void setOwner(IfcStructuralAnalysisModel *owner);
        /**
         * @param value
         */
        virtual void insert(const Step::RefPtr< IfcStructuralLoadGroup > &value) throw(std::out_of_range);
        /**
         * @param value
         */
        virtual size_type erase(const Step::RefPtr< IfcStructuralLoadGroup > &value);

    };

    class IfcStructuralAnalysisModel;
    class IfcStructuralResultGroup;

    /**
     */
    class Inverted_IfcStructuralAnalysisModel_HasResults_type : public Set_IfcStructuralResultGroup_1_n {
    public:
        /**
         */
        typedef Set_IfcStructuralResultGroup_1_n::size_type size_type;

        /**
         */
        IfcStructuralAnalysisModel *mOwner;
        /**
         */
        Inverted_IfcStructuralAnalysisModel_HasResults_type();
        /**
         * @param owner
         */
        void setOwner(IfcStructuralAnalysisModel *owner);
        /**
         * @param value
         */
        virtual void insert(const Step::RefPtr< IfcStructuralResultGroup > &value) throw(std::out_of_range);
        /**
         * @param value
         */
        virtual size_type erase(const Step::RefPtr< IfcStructuralResultGroup > &value);

    };

    class CopyOp;
    class IfcAxis2Placement3D;

    /**
     */
    class IFC2X3_DLL_DEF IfcStructuralAnalysisModel : public IfcSystem {
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
         * Gets the value of the explicit attribute 'PredefinedType'.
         * 
         */
        virtual IfcAnalysisModelTypeEnum getPredefinedType();
        /**
         * (const) Returns the value of the explicit attribute 'PredefinedType'.
         * 
         * @return the value of the explicit attribute 'PredefinedType'
         */
        virtual const IfcAnalysisModelTypeEnum getPredefinedType() const;
        /**
         * Sets the value of the explicit attribute 'PredefinedType'.
         * 
         * @param value
         */
        virtual void setPredefinedType(IfcAnalysisModelTypeEnum value);
        /**
         * Gets the value of the explicit attribute 'OrientationOf2DPlane'.
         * 
         */
        virtual IfcAxis2Placement3D *getOrientationOf2DPlane();
        /**
         * (const) Returns the value of the explicit attribute 'OrientationOf2DPlane'.
         * 
         * @return the value of the explicit attribute 'OrientationOf2DPlane'
         */
        virtual const IfcAxis2Placement3D *getOrientationOf2DPlane() const;
        /**
         * Sets the value of the explicit attribute 'OrientationOf2DPlane'.
         * 
         * @param value
         */
        virtual void setOrientationOf2DPlane(const Step::RefPtr< IfcAxis2Placement3D > &value);
        /**
         * Gets the value of the explicit attribute 'LoadedBy'.
         * 
         */
        virtual Set_IfcStructuralLoadGroup_1_n &getLoadedBy();
        /**
         * (const) Returns the value of the explicit attribute 'LoadedBy'.
         * 
         * @return the value of the explicit attribute 'LoadedBy'
         */
        virtual const Set_IfcStructuralLoadGroup_1_n &getLoadedBy() const;
        /**
         * Gets the value of the explicit attribute 'HasResults'.
         * 
         */
        virtual Set_IfcStructuralResultGroup_1_n &getHasResults();
        /**
         * (const) Returns the value of the explicit attribute 'HasResults'.
         * 
         * @return the value of the explicit attribute 'HasResults'
         */
        virtual const Set_IfcStructuralResultGroup_1_n &getHasResults() const;
        friend class ExpressDataSet;

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
        Inverted_IfcStructuralAnalysisModel_LoadedBy_type m_loadedBy;
        /**
         */
        Inverted_IfcStructuralAnalysisModel_HasResults_type m_hasResults;

    };

}

#endif // IFC2X3_IFCSTRUCTURALANALYSISMODEL_H
