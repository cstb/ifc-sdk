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

#ifndef IFC2X3_IFCMATERIALLAYERSET_H
#define IFC2X3_IFCMATERIALLAYERSET_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <stdexcept>
#include <string>

namespace ifc2x3 {

    class IfcMaterialLayer;
    class IfcMaterialLayerSet;

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcMaterialLayerSet_MaterialLayers_type : public List_IfcMaterialLayer_1_n {
    public:
        /**
         */
        typedef List_IfcMaterialLayer_1_n::iterator iterator;

        /**
         */
        Inverted_IfcMaterialLayerSet_MaterialLayers_type();
        /**
         * Insert a value in the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual void push_back(const Step::RefPtr< IfcMaterialLayer > &value) throw(std::out_of_range);
        /**
         * Remove a value from the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual iterator erase(const Step::RefPtr< IfcMaterialLayer > &value);
        /**
         * Remove all values from the aggregate.
         * 
         */
        void clear();
        friend class IfcMaterialLayerSet;

    protected:
        /**
         * The owner of this inverted aggregate.
         * 
         */
        IfcMaterialLayerSet *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcMaterialLayerSet *owner);

    };

    class CopyOp;

    /**
     * Generated class for the IfcMaterialLayerSet Entity.
     * 
     */
    class IFC2X3_EXPORT IfcMaterialLayerSet : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'MaterialLayers'.
         * 
         */
        virtual List_IfcMaterialLayer_1_n &getMaterialLayers();
        /**
         * (const) Returns the value of the explicit attribute 'MaterialLayers'.
         * 
         * @return the value of the explicit attribute 'MaterialLayers'
         */
        virtual const List_IfcMaterialLayer_1_n &getMaterialLayers() const;
        /**
         * unset the attribute 'MaterialLayers'.
         * 
         */
        virtual void unsetMaterialLayers();
        /**
         * Test if the attribute 'MaterialLayers' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMaterialLayers() const;
        /**
         * Gets the value of the explicit attribute 'LayerSetName'.
         * 
         */
        virtual IfcLabel getLayerSetName();
        /**
         * (const) Returns the value of the explicit attribute 'LayerSetName'.
         * 
         * @return the value of the explicit attribute 'LayerSetName'
         */
        virtual const IfcLabel getLayerSetName() const;
        /**
         * Sets the value of the explicit attribute 'LayerSetName'.
         * 
         * @param value
         */
        virtual void setLayerSetName(const IfcLabel &value);
        /**
         * unset the attribute 'LayerSetName'.
         * 
         */
        virtual void unsetLayerSetName();
        /**
         * Test if the attribute 'LayerSetName' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLayerSetName() const;
        /**
         * Gets the value of the derived attribute 'TotalThickness'.
         * 
         */
        virtual IfcLengthMeasure getTotalThickness() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcMaterialLayerSet(Step::Id id, Step::SPFData *args);
        virtual ~IfcMaterialLayerSet();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMaterialLayerSet &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverted_IfcMaterialLayerSet_MaterialLayers_type m_materialLayers;
        /**
         */
        Step::String m_layerSetName;

    };

}

#endif // IFC2X3_IFCMATERIALLAYERSET_H
