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

#pragma once

#include <Step/IntegerTypes.h>
#include <Step/Referenced.h>

#include <map>
#include <limits>

#ifdef min
#undef min
#endif

#ifdef max
#undef max
#endif

namespace Step
{
    class BaseVisitor;
    class BaseObject;
    class BaseExpressDataSet;
    class ClientData;
    class BaseEntity;

    //! different typedef used by the generated classes @{
    typedef RefPtr<BaseVisitor> BaseVisitorPtr;
    typedef RefPtr<BaseObject> BaseObjectPtr;
    typedef RefPtr<BaseEntity> BaseEntityPtr;
    typedef RefPtr<ClientData> ClientDataPtr;
    //!@}

    //! The ClientDataKey type definition
    typedef uintptr_t ClientDataKey;

    //! The Id type definition
    typedef uint64_t Id;

    //! for error handling
	const Id Id_UNDEF = std::numeric_limits<Id>::max();

    //! for '$' token
    const Id Id_UNSET = 0;

    //! The allocate function pointer type definition used by generated SPFReader
    typedef BaseEntity* (*AllocateFuncType)(BaseExpressDataSet*, Id);

    //! The map of entities type definition
    typedef std::map<Id, BaseEntityPtr> MapOfEntities;
}
