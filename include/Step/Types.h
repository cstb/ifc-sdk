/*//////////////////////////////////
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
#ifndef Step_Types_h
#define Step_Types_h

#include "Referenced.h"

#include <map>
#include <limits.h>

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
    typedef unsigned long int ClientDataKey;

    //! The Id type definition
    typedef unsigned long int Id;

    //! for error handling
    const unsigned long int Id_UNDEF = UINT_MAX;

    //! for '$' token
    const unsigned long int Id_UNSET = 0;

    //! The allocate function pointer type definition used by generated SPFReader
    typedef BaseEntity* (*AllocateFuncType)(BaseExpressDataSet*, Id);

    //! The map of entities type definition
    typedef std::map<Id, BaseEntityPtr> MapOfEntities;
}

#endif
