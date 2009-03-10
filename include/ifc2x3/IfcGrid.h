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

#ifndef IFC2X3_IFCGRID_H
#define IFC2X3_IFCGRID_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <stdexcept>
#include <Step/Referenced.h>
#include <stdexcept>
#include <Step/Referenced.h>
#include <stdexcept>
#include <Step/Referenced.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcProduct.h"

namespace ifc2x3 {

    class IfcGrid;
    class IfcGridAxis;

    /**
     */
    class Inverted_IfcGrid_UAxes_type : public List_IfcGridAxis_1_n {
    public:
        /**
         */
        typedef List_IfcGridAxis_1_n::iterator iterator;

        /**
         */
        IfcGrid *mOwner;
        /**
         */
        Inverted_IfcGrid_UAxes_type();
        /**
         * @param owner
         */
        void setOwner(IfcGrid *owner);
        /**
         * @param value
         */
        virtual void push_back(const Step::RefPtr< IfcGridAxis > &value) throw(std::out_of_range);
        /**
         * @param value
         */
        virtual iterator erase(const Step::RefPtr< IfcGridAxis > &value);

    };

    class IfcGrid;
    class IfcGridAxis;

    /**
     */
    class Inverted_IfcGrid_VAxes_type : public List_IfcGridAxis_1_n {
    public:
        /**
         */
        typedef List_IfcGridAxis_1_n::iterator iterator;

        /**
         */
        IfcGrid *mOwner;
        /**
         */
        Inverted_IfcGrid_VAxes_type();
        /**
         * @param owner
         */
        void setOwner(IfcGrid *owner);
        /**
         * @param value
         */
        virtual void push_back(const Step::RefPtr< IfcGridAxis > &value) throw(std::out_of_range);
        /**
         * @param value
         */
        virtual iterator erase(const Step::RefPtr< IfcGridAxis > &value);

    };

    class IfcGrid;
    class IfcGridAxis;

    /**
     */
    class Inverted_IfcGrid_WAxes_type : public List_IfcGridAxis_1_n {
    public:
        /**
         */
        typedef List_IfcGridAxis_1_n::iterator iterator;

        /**
         */
        IfcGrid *mOwner;
        /**
         */
        Inverted_IfcGrid_WAxes_type();
        /**
         * @param owner
         */
        void setOwner(IfcGrid *owner);
        /**
         * @param value
         */
        virtual void push_back(const Step::RefPtr< IfcGridAxis > &value) throw(std::out_of_range);
        /**
         * @param value
         */
        virtual iterator erase(const Step::RefPtr< IfcGridAxis > &value);

    };

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcGrid : public IfcProduct {
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
         * Gets the value of the explicit attribute 'UAxes'.
         * 
         */
        virtual List_IfcGridAxis_1_n &getUAxes();
        /**
         * (const) Returns the value of the explicit attribute 'UAxes'.
         * 
         * @return the value of the explicit attribute 'UAxes'
         */
        virtual const List_IfcGridAxis_1_n &getUAxes() const;
        /**
         * Gets the value of the explicit attribute 'VAxes'.
         * 
         */
        virtual List_IfcGridAxis_1_n &getVAxes();
        /**
         * (const) Returns the value of the explicit attribute 'VAxes'.
         * 
         * @return the value of the explicit attribute 'VAxes'
         */
        virtual const List_IfcGridAxis_1_n &getVAxes() const;
        /**
         * Gets the value of the explicit attribute 'WAxes'.
         * 
         */
        virtual List_IfcGridAxis_1_n &getWAxes();
        /**
         * (const) Returns the value of the explicit attribute 'WAxes'.
         * 
         * @return the value of the explicit attribute 'WAxes'
         */
        virtual const List_IfcGridAxis_1_n &getWAxes() const;
        /**
         * Gets the value of the inverse attribute 'ContainedInStructure'.
         * 
         */
        Inverse_Set_IfcRelContainedInSpatialStructure_0_1 &getContainedInStructure();
        /**
         * (const) Returns the value of the explicit attribute 'ContainedInStructure'.
         * 
         * @return the value of the explicit attribute 'ContainedInStructure'
         */
        virtual const Inverse_Set_IfcRelContainedInSpatialStructure_0_1 &getContainedInStructure() const;
        friend class Inverted_IfcRelContainedInSpatialStructure_RelatedElements_type;
        friend class ExpressDataSet;
        friend class IfcRelContainedInSpatialStructure;

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
        Inverted_IfcGrid_UAxes_type m_uAxes;
        /**
         */
        Inverted_IfcGrid_VAxes_type m_vAxes;
        /**
         */
        Inverted_IfcGrid_WAxes_type m_wAxes;
        /**
         */
        Inverse_Set_IfcRelContainedInSpatialStructure_0_1 m_containedInStructure;

    };

}

#endif // IFC2X3_IFCGRID_H
