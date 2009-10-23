#include "ifc2x3/IfcSurfaceStyleWithTextures.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcSurfaceTexture.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcSurfaceStyleWithTextures::IfcSurfaceStyleWithTextures(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
}

IfcSurfaceStyleWithTextures::~IfcSurfaceStyleWithTextures() {
}

bool IfcSurfaceStyleWithTextures::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSurfaceStyleWithTextures(this);
}

const std::string &IfcSurfaceStyleWithTextures::type() const {
    return IfcSurfaceStyleWithTextures::s_type.getName();
}

const Step::ClassType &IfcSurfaceStyleWithTextures::getClassType() {
    return IfcSurfaceStyleWithTextures::s_type;
}

const Step::ClassType &IfcSurfaceStyleWithTextures::getType() const {
    return IfcSurfaceStyleWithTextures::s_type;
}

bool IfcSurfaceStyleWithTextures::isOfType(const Step::ClassType &t) const {
    return IfcSurfaceStyleWithTextures::s_type == t ? true : Step::BaseObject::isOfType(t);
}

List_IfcSurfaceTexture_1_n &IfcSurfaceStyleWithTextures::getTextures() {
    if (Step::BaseObject::inited()) {
        return m_textures;
    }
    else {
        m_textures.setUnset(true);
        return m_textures;
    }
}

const List_IfcSurfaceTexture_1_n &IfcSurfaceStyleWithTextures::getTextures() const {
    IfcSurfaceStyleWithTextures * deConstObject = const_cast< IfcSurfaceStyleWithTextures * > (this);
    return deConstObject->getTextures();
}

void IfcSurfaceStyleWithTextures::setTextures(const List_IfcSurfaceTexture_1_n &value) {
    m_textures = value;
}

void IfcSurfaceStyleWithTextures::unsetTextures() {
    m_textures.clear();
    m_textures.setUnset(true);
}

bool IfcSurfaceStyleWithTextures::testTextures() const {
    return !Step::isUnset(getTextures());
}

bool IfcSurfaceStyleWithTextures::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_textures.setUnset(true);
    }
    else {
        m_textures.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcSurfaceTexture > attr2;
                attr2 = static_cast< IfcSurfaceTexture * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_textures.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcSurfaceStyleWithTextures::copy(const IfcSurfaceStyleWithTextures &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcSurfaceTexture >, 1 >::const_iterator it_m_textures;
    Step::BaseEntity::copy(obj, copyop);
    for (it_m_textures = obj.m_textures.begin(); it_m_textures != obj.m_textures.end(); ++it_m_textures) {
        Step::RefPtr< IfcSurfaceTexture > copyTarget = (IfcSurfaceTexture *) (copyop((*it_m_textures).get()));
        m_textures.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSurfaceStyleWithTextures::s_type("IfcSurfaceStyleWithTextures");
