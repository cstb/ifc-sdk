#pragma once

// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009-2018 CSTB   
//   
// For further information please contact
//                                       
//         eveBIM-support@cstb.fr        
//   or                                  
//         CSTB DTI/MIC                  
//         290, route des Lucioles       
//         BP 209                        
//         06904 Sophia Antipolis, France
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


#include <ifc2x3/Export.h>

#include <ifc2x3/DefinedTypes.h>

#include <Step/BaseObject.h>

namespace ifc2x3
{
    /**
     * Generated class for the IfcAppliedValueSelect Select type.
     *
     */
    class IFC2X3_EXPORT IfcAppliedValueSelect : public Step::BaseObject

    {
        ClassType_definitions()

    public:
        enum IfcAppliedValueSelect_select 
        {
            IFCRATIOMEASURE,
            IFCMEASUREWITHUNIT,
            IFCMONETARYMEASURE,
            UNSET
        };

        union IfcAppliedValueSelect_union
        {
            IfcRatioMeasure m_IfcRatioMeasure;
            IfcMeasureWithUnit *m_IfcMeasureWithUnit;
            IfcMonetaryMeasure m_IfcMonetaryMeasure;
        };

        IfcAppliedValueSelect();
        virtual ~IfcAppliedValueSelect();

        virtual void copy(const IfcAppliedValueSelect &obj, const CopyOp &copyop);

        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        std::string currentTypeName() const;

        IfcAppliedValueSelect_select currentType() const;

        void deleteUnion();

        void set(Step::BaseObject *v);

        IfcRatioMeasure getIfcRatioMeasure() const;
        void setIfcRatioMeasure(IfcRatioMeasure value);    

        IfcMeasureWithUnit *getIfcMeasureWithUnit() const;
        void setIfcMeasureWithUnit(IfcMeasureWithUnit *value);

        IfcMonetaryMeasure getIfcMonetaryMeasure() const;
        void setIfcMonetaryMeasure(IfcMonetaryMeasure value);    


    protected:
        IfcAppliedValueSelect(Step::SPFData *args);

        virtual bool init();

    private:
        IfcAppliedValueSelect_select m_type;
  
        IfcAppliedValueSelect_union m_union;
    };
} // namespace ifc2x3