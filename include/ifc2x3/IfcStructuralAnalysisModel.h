// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

#ifndef IFC2X3_IFCSTRUCTURALANALYSISMODEL_H
#define IFC2X3_IFCSTRUCTURALANALYSISMODEL_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcSystem.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <stdexcept>
#include <string>

namespace ifc2x3 {

    class IfcStructuralAnalysisModel;
    class IfcStructuralLoadGroup;

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcStructuralAnalysisModel_LoadedBy_type : public Set_IfcStructuralLoadGroup_1_n {
    public:
        /**
         */
        typedef Set_IfcStructuralLoadGroup_1_n::size_type size_type;

        /**
         */
        Inverted_IfcStructuralAnalysisModel_LoadedBy_type();
        /**
         * Insert a value in the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual void insert(const Step::RefPtr< IfcStructuralLoadGroup > &value) throw(std::out_of_range);
        /**
         * Remove a value from the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual size_type erase(const Step::RefPtr< IfcStructuralLoadGroup > &value);
        /**
         * Remove all values from the aggregate.
         * 
         */
        void clear();
        friend class IfcStructuralAnalysisModel;

    protected:
        /**
         * The owner of this inverted aggregate.
         * 
         */
        IfcStructuralAnalysisModel *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcStructuralAnalysisModel *owner);

    };

    class IfcStructuralResultGroup;

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcStructuralAnalysisModel_HasResults_type : public Set_IfcStructuralResultGroup_1_n {
    public:
        /**
         */
        typedef Set_IfcStructuralResultGroup_1_n::size_type size_type;

        /**
         */
        Inverted_IfcStructuralAnalysisModel_HasResults_type();
        /**
         * Insert a value in the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual void insert(const Step::RefPtr< IfcStructuralResultGroup > &value) throw(std::out_of_range);
        /**
         * Remove a value from the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual size_type erase(const Step::RefPtr< IfcStructuralResultGroup > &value);
        /**
         * Remove all values from the aggregate.
         * 
         */
        void clear();
        friend class IfcStructuralAnalysisModel;

    protected:
        /**
         * The owner of this inverted aggregate.
         * 
         */
        IfcStructuralAnalysisModel *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcStructuralAnalysisModel *owner);

    };

    class CopyOp;
    class IfcAxis2Placement3D;

    /**
     * Generated class for the IfcStructuralAnalysisModel Entity.
     * 
     */
    class IFC2X3_EXPORT IfcStructuralAnalysisModel : public IfcSystem {
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
         * unset the attribute 'PredefinedType'.
         * 
         */
        virtual void unsetPredefinedType();
        /**
         * Test if the attribute 'PredefinedType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPredefinedType() const;
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
         * unset the attribute 'OrientationOf2DPlane'.
         * 
         */
        virtual void unsetOrientationOf2DPlane();
        /**
         * Test if the attribute 'OrientationOf2DPlane' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testOrientationOf2DPlane() const;
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
         * unset the attribute 'LoadedBy'.
         * 
         */
        virtual void unsetLoadedBy();
        /**
         * Test if the attribute 'LoadedBy' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLoadedBy() const;
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
        /**
         * unset the attribute 'HasResults'.
         * 
         */
        virtual void unsetHasResults();
        /**
         * Test if the attribute 'HasResults' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHasResults() const;
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
