/*//////////////////////////////////
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
#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif

const Step::ClassType& Step::BaseEntity::getClassType() {
    return Step::BaseEntity::s_type;
}

const Step::ClassType& Step::BaseEntity::getType() const {
    return Step::BaseEntity::s_type;
}

bool Step::BaseEntity::isOfType(const Step::ClassType &t) const {
    return Step::BaseEntity::s_type == t ? true : BaseObject::isOfType(t);
}

bool Step::BaseEntity::acceptVisitor(BaseVisitor *v)
{
    return v->visitBaseEntity(this);
}

const std::string &Step::BaseEntity::type() const {
    return Step::BaseEntity::s_type.getName();
}


Step::ClassType Step::BaseEntity::s_type("BaseEntity");
