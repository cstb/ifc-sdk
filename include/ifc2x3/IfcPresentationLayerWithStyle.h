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

#ifndef IFC2X3_IFCPRESENTATIONLAYERWITHSTYLE_H
#define IFC2X3_IFCPRESENTATIONLAYERWITHSTYLE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcPresentationLayerAssignment.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcPresentationLayerWithStyle Entity.
     * 
     */
    class IFC2X3_EXPORT IfcPresentationLayerWithStyle : public IfcPresentationLayerAssignment {
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
         * Gets the value of the explicit attribute 'LayerOn'.
         * 
         */
        virtual Step::Logical getLayerOn();
        /**
         * (const) Returns the value of the explicit attribute 'LayerOn'.
         * 
         * @return the value of the explicit attribute 'LayerOn'
         */
        virtual const Step::Logical getLayerOn() const;
        /**
         * Sets the value of the explicit attribute 'LayerOn'.
         * 
         * @param value
         */
        virtual void setLayerOn(Step::Logical value);
        /**
         * unset the attribute 'LayerOn'.
         * 
         */
        virtual void unsetLayerOn();
        /**
         * Test if the attribute 'LayerOn' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLayerOn() const;
        /**
         * Gets the value of the explicit attribute 'LayerFrozen'.
         * 
         */
        virtual Step::Logical getLayerFrozen();
        /**
         * (const) Returns the value of the explicit attribute 'LayerFrozen'.
         * 
         * @return the value of the explicit attribute 'LayerFrozen'
         */
        virtual const Step::Logical getLayerFrozen() const;
        /**
         * Sets the value of the explicit attribute 'LayerFrozen'.
         * 
         * @param value
         */
        virtual void setLayerFrozen(Step::Logical value);
        /**
         * unset the attribute 'LayerFrozen'.
         * 
         */
        virtual void unsetLayerFrozen();
        /**
         * Test if the attribute 'LayerFrozen' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLayerFrozen() const;
        /**
         * Gets the value of the explicit attribute 'LayerBlocked'.
         * 
         */
        virtual Step::Logical getLayerBlocked();
        /**
         * (const) Returns the value of the explicit attribute 'LayerBlocked'.
         * 
         * @return the value of the explicit attribute 'LayerBlocked'
         */
        virtual const Step::Logical getLayerBlocked() const;
        /**
         * Sets the value of the explicit attribute 'LayerBlocked'.
         * 
         * @param value
         */
        virtual void setLayerBlocked(Step::Logical value);
        /**
         * unset the attribute 'LayerBlocked'.
         * 
         */
        virtual void unsetLayerBlocked();
        /**
         * Test if the attribute 'LayerBlocked' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLayerBlocked() const;
        /**
         * Gets the value of the explicit attribute 'LayerStyles'.
         * 
         */
        virtual Set_IfcPresentationStyleSelect_0_n &getLayerStyles();
        /**
         * (const) Returns the value of the explicit attribute 'LayerStyles'.
         * 
         * @return the value of the explicit attribute 'LayerStyles'
         */
        virtual const Set_IfcPresentationStyleSelect_0_n &getLayerStyles() const;
        /**
         * Sets the value of the explicit attribute 'LayerStyles'.
         * 
         * @param value
         */
        virtual void setLayerStyles(const Set_IfcPresentationStyleSelect_0_n &value);
        /**
         * unset the attribute 'LayerStyles'.
         * 
         */
        virtual void unsetLayerStyles();
        /**
         * Test if the attribute 'LayerStyles' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLayerStyles() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPresentationLayerWithStyle(Step::Id id, Step::SPFData *args);
        virtual ~IfcPresentationLayerWithStyle();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPresentationLayerWithStyle &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Logical m_layerOn;
        /**
         */
        Step::Logical m_layerFrozen;
        /**
         */
        Step::Logical m_layerBlocked;
        /**
         */
        Set_IfcPresentationStyleSelect_0_n m_layerStyles;

    };

}

#endif // IFC2X3_IFCPRESENTATIONLAYERWITHSTYLE_H
