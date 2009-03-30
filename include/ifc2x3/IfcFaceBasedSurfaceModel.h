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
 *     Copyright (C) 2009 CSTB                                             *
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

#ifndef IFC2X3_IFCFACEBASEDSURFACEMODEL_H
#define IFC2X3_IFCFACEBASEDSURFACEMODEL_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcFaceBasedSurfaceModel Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcFaceBasedSurfaceModel : public IfcGeometricRepresentationItem {
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
         * Gets the value of the explicit attribute 'FbsmFaces'.
         * 
         */
        virtual Set_IfcConnectedFaceSet_1_n &getFbsmFaces();
        /**
         * (const) Returns the value of the explicit attribute 'FbsmFaces'.
         * 
         * @return the value of the explicit attribute 'FbsmFaces'
         */
        virtual const Set_IfcConnectedFaceSet_1_n &getFbsmFaces() const;
        /**
         * Sets the value of the explicit attribute 'FbsmFaces'.
         * 
         * @param value
         */
        virtual void setFbsmFaces(const Set_IfcConnectedFaceSet_1_n &value);
        /**
         * unset the attribute 'FbsmFaces'.
         * 
         */
        virtual void unsetFbsmFaces();
        /**
         * Test if the attribute 'FbsmFaces' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFbsmFaces() const;
        /**
         * Gets the value of the derived attribute 'Dim'.
         * 
         */
        virtual IfcDimensionCount getDim() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcFaceBasedSurfaceModel(Step::Id id, Step::SPFData *args);
        virtual ~IfcFaceBasedSurfaceModel();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcFaceBasedSurfaceModel &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Set_IfcConnectedFaceSet_1_n m_fbsmFaces;

    };

}

#endif // IFC2X3_IFCFACEBASEDSURFACEMODEL_H
